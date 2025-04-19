@class MUIWKWebViewController, MUIWebDocument, NSView, NSString;

@interface MUIWebDocumentView : NSView <NSViewToolTipOwner> {
    unsigned long long _loadedState;
    struct CGSize { double width; double height; } _contentSize;
    double _preferredMinLayoutWidth;
}

@property (class, weak, nonatomic) MUIWebDocumentView *relatedWebDocumentView;

@property (readonly, nonatomic) NSView *snapshotView;
@property (nonatomic) BOOL preparingToLayoutSynchronously;
@property (copy, nonatomic) id /* block */ prepareToLayoutSynchronouslyCompletionHandler;
@property (retain, nonatomic) MUIWKWebViewController *wkWebViewController;
@property (nonatomic) unsigned long long loadedState;
@property (nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly, weak, nonatomic) NSView *contentView;
@property (nonatomic) BOOL shouldPaintToBounds;
@property (nonatomic) BOOL drawsBackground;
@property (retain, nonatomic) MUIWebDocument *webDocument;
@property (nonatomic) double pageZoom;
@property (nonatomic) double preferredMinLayoutWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;
+ (id)keyPathsForValuesAffectingPageZoom;
+ (id)keyPathsForValuesAffectingWebDocument;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)findMatchesForString:(id)a0 relativeToMatch:(id)a1 findOptions:(unsigned long long)a2 maxResults:(unsigned long long)a3 resultCollector:(id /* block */)a4;
- (void)getSelectedText:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isFlipped;
- (void)layoutSublayersOfLayer:(id)a0;
- (void)resizeWithOldSuperviewSize:(struct CGSize { double x0; double x1; })a0;
- (void)selectFindMatch:(id)a0 completionHandler:(id /* block */)a1;
- (id)supplementalTargetForAction:(SEL)a0 sender:(id)a1;
- (void)tearDown;
- (id)view:(id)a0 stringForToolTip:(long long)a1 point:(struct CGPoint { double x0; double x1; })a2 userData:(void *)a3;
- (void)viewDidMoveToSuperview;
- (void)evaluateJavaScript:(id)a0 completionHandler:(id /* block */)a1;
- (id)printOperationWithPrintInfo:(id)a0;
- (void)exportAttachmentsToApplication:(id)a0;
- (id)_attachmentControllersForAttachments:(id)a0;
- (void)_muiWebDocumentViewCommonInit:(id)a0;
- (void)_readyToLayoutSynchronously;
- (void)_updatePreferredMinLayoutWidth;
- (BOOL)canExportAttachmentsToApplication:(id)a0;
- (id)evaluateJavaScriptSynchronously:(id)a0;
- (void)generateSelectionWebDocument:(id /* block */)a0;
- (void)generateStyleInlinedWebDocument:(id /* block */)a0;
- (void)mui_cancelAnimation;
- (void)mui_cancelSynchronousLayout;
- (void)mui_didCacheDisplayInRect;
- (void)mui_performAnimation;
- (void)mui_performLayoutSynchronously;
- (void)mui_prepareToAnimate:(id /* block */)a0;
- (void)mui_prepareToCacheDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completionHandler:(id /* block */)a1;
- (void)mui_prepareToLayoutSynchronously:(id /* block */)a0;
- (void)prepareTilesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)presentSaveAttachmentMenuForAttachment:(id)a0 atRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)quickLookAttachments:(id)a0;
- (void)saveAttachments:(id)a0 toDirectory:(id)a1 makePathsUnique:(BOOL)a2;
- (void)saveAttachmentsWithPanel:(id)a0;
- (void)setAttachments:(id)a0 asHidden:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)setWebDocument:(id)a0 forPrinting:(BOOL)a1;
- (BOOL)shouldHandleClickForURL:(id)a0;

@end
