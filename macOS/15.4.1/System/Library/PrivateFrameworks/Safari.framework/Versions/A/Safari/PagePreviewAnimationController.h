@class NSView, NSString, NSURL, NSPopoverAnimationController, NSImmediateActionGestureRecognizer, NSTimer, PagePreviewViewController, NSViewController, NSPopover;
@protocol PagePreviewAnimationControllerDelegate;

@interface PagePreviewAnimationController : NSObject <PagePreviewViewControllerDelegate, NSImmediateActionAnimationController> {
    BOOL _shouldShowPreviewWhenLoadedOrAnimationCompletes;
    BOOL _hasFinishedLoading;
    NSPopover *_previewPopover;
    PagePreviewViewController *_previewViewController;
    struct CGPoint { double x; double y; } _eventLocationInView;
    NSPopoverAnimationController *_popoverAnimationController;
    NSImmediateActionGestureRecognizer *_recognizer;
    BOOL _didCompleteAnimation;
    NSTimer *_previewWatchdogTimer;
}

@property (weak, nonatomic) id<PagePreviewAnimationControllerDelegate> delegate;
@property (weak, nonatomic) NSViewController *parentViewController;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, weak, nonatomic) NSView *view;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)close;
- (void)recognizerDidCompleteAnimation:(id)a0;
- (void)recognizerDidCancelAnimation:(id)a0;
- (void)recognizerDidDismissAnimation:(id)a0;
- (void)recognizerDidUpdateAnimation:(id)a0;
- (void)recognizerWillBeginAnimation:(id)a0;
- (void)_createPreviewPopover;
- (struct CGSize { double x0; double x1; })_popoverContentSizeWithPreviewPadding:(struct CGSize { double x0; double x1; })a0 forTargetSize:(struct CGSize { double x0; double x1; })a1 withMinimumSize:(struct CGSize { double x0; double x1; })a2;
- (void)_previewWatchdogTimerFired:(id)a0;
- (void)_showPreview;
- (struct CGSize { double x0; double x1; })_targetSizeForPagePreview;
- (void)dismissPagePreviewViewController:(id)a0;
- (void)hidePreview;
- (id)initWithURL:(id)a0 view:(id)a1 originRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGSize { double x0; double x1; })largestPopoverSize;
- (id)makePreviewBrowserViewControllerForPagePreviewViewController:(id)a0;
- (void)pagePreviewViewController:(id)a0 addURLToReadingList:(id)a1;
- (void)pagePreviewViewController:(id)a0 didFinishPreviewWithBrowserViewController:(id)a1;
- (void)pagePreviewViewController:(id)a0 handleClickInPreviewBrowserViewController:(id)a1;
- (void)setPreviewLoading:(BOOL)a0;
- (void)setPreviewOverrideImage:(id)a0;
- (void)setPreviewTitle:(id)a0;

@end
