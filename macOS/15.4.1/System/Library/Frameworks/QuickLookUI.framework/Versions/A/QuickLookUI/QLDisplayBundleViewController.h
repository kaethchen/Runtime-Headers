@class NSView, QLMarkupController, NSArray, NSString, CALayer, QLPreviewNavigationController, NSURL, QLOverlayBorderView, QLDisplayBundle, STBlockingViewController, QLPreviewOverlayController;

@interface QLDisplayBundleViewController : NSViewController <QLPreviewOverlayDataSource, QLMarkupControllerDelegate> {
    int _mode;
    BOOL _showsOverlayControls;
}

@property (retain) NSArray *contentViewSizingConstraints;
@property (retain) STBlockingViewController *blockingViewController;
@property (retain) QLMarkupController *markupController;
@property (weak, nonatomic) QLDisplayBundle *displayBundle;
@property (readonly) int mode;
@property (retain, nonatomic) NSView *contentView;
@property (readonly) CALayer *maskedContentLayer;
@property (readonly) BOOL useLayerMaskForCorners;
@property (retain) QLOverlayBorderView *borderView;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } borderFrame;
@property (readonly) NSView *borderContainerView;
@property (retain) QLPreviewOverlayController *overlayController;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } customOverlayFrame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } customRolloverFrame;
@property (retain) QLPreviewNavigationController *navigationController;
@property (readonly) NSView *markupToolbarView;
@property (readonly) NSView *overlayParentView;
@property (readonly) CALayer *overlayParentLayer;
@property (readonly) double backingScaleFactor;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } overlayFrame;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rolloverFrame;
@property (readonly) BOOL showControls;
@property (readonly) BOOL shouldAlwaysHandleMultiClicks;
@property (readonly) BOOL needsPlayControl;
@property (readonly) BOOL needsTimeControl;
@property BOOL playing;
@property (readonly) float progress;
@property (readonly) BOOL needsPageControl;
@property (readonly) unsigned long long numberOfPages;
@property unsigned long long currentPage;
@property (readonly) double rolloverActivationDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSURL *urlForMarkup;
@property (readonly) NSURL *savedCopyURL;

+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingCurrentPage;
+ (id)keyPathsForValuesAffectingNeedsTimeControl;
+ (id)keyPathsForValuesAffectingNumberOfPages;
+ (id)keyPathsForValuesAffectingOverlayFrame;
+ (id)keyPathsForValuesAffectingProgress;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cleanup;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)copy:(id)a0;
- (void)loadView;
- (void)selectAll:(id)a0;
- (void)viewDidAppear;
- (void)viewDidEndLiveResize;
- (void)viewFrameChanged:(id)a0;
- (void)viewWillStartLiveResize;
- (void)didSave:(BOOL)a0 toURL:(id)a1 forClosing:(BOOL)a2;
- (void)editOccuredOnPage:(long long)a0;
- (void)markupBecameDirty:(BOOL)a0;
- (void)promptSaveForCloseWithCloseHandler:(id /* block */)a0;
- (id)replaceContentWithMarkupViewController:(id)a0;
- (void)revertMarkup;
- (void)willShow;
- (void)disableBorder;
- (void)enableBorder;
- (void)willHide;
- (void)didLoad;
- (void)_activateOverlayControls;
- (void)_attachToOverlayControls:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentFrameInViewSpace;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_convertRectFromDisplayBundleToView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_deactivateOverlayControls;
- (BOOL)_hasOverlayControls;
- (void)_updateNavigationController;
- (void)_updateOverlayBorder;
- (void)_updateOverlayControls;
- (void)enterMarkupWithSaveInPlace:(BOOL)a0;
- (BOOL)hasContentAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)hasOverlayControlAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)hasTimeControlsAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)modeDidChange;
- (BOOL)mustHandleDoubleClickAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)mustHandleDragAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)presentScreenTimeLockoutWithPolicy:(long long)a0 displayBundle:(id)a1;
- (void)setOverlayControlOverlayFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rollOverFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setShowsOverlayControls:(BOOL)a0 withOverlayController:(id)a1;
- (void)shouldEnterMarkup:(id /* block */)a0;
- (void)teardownMarkup:(long long)a0 needsSave:(BOOL *)a1;
- (void)updateContentCornerRadius;
- (void)updateContentViewCrop;
- (void)updateNavigationControls;
- (BOOL)updateOverlayFrame;

@end
