@class NSTextField, NSString, NSView, NSURL, BrowserViewController, NSClickGestureRecognizer, NSProgressIndicator;
@protocol PagePreviewViewControllerDelegate;

@interface PagePreviewViewController : BrowserContainerViewController <NSPopoverDelegate> {
    BrowserViewController *_previewBrowserViewController;
    NSView *_previewAndScreenTimeWrapperView;
    struct CGSize { double width; double height; } _mainViewSize;
    NSTextField *_titleTextField;
    NSClickGestureRecognizer *_clickRecognizer;
    NSProgressIndicator *_spinner;
    double _popoverToViewScale;
    BOOL _isPreviewingImage;
    BOOL _isPopoverClosing;
}

@property (weak, nonatomic) id<PagePreviewViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *previewTitle;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (retain, nonatomic) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })previewPadding;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (BOOL)isWindowClosing;
- (void)_clickRecognized:(id)a0;
- (void)loadView;
- (void)popoverDidClose:(id)a0;
- (void)popoverWillClose:(id)a0;
- (void)_addToReadingListButtonClicked:(id)a0;
- (void)replacePreviewWithImage:(id)a0 atSize:(struct CGSize { double x0; double x1; })a1;
- (void)_cleanUpAfterClickInPreviewView;
- (id)_buildTitleViewWithContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_handleClickInPreviewView;
- (id)_previewTitle;
- (id)browserViewController;
- (BOOL)didFireCloseEvent;
- (id)initWithMainViewSize:(struct CGSize { double x0; double x1; })a0 popoverToViewScale:(double)a1;
- (id)tabDialogHostingView;

@end
