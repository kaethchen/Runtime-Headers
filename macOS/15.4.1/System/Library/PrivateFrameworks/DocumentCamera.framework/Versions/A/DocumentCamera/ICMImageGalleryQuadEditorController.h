@class ICMImageGalleryQuadEditorOverlayView, NSImage, ICMImageGalleryQuadEditorScrollView, NSView, NSLayoutConstraint, NSString;
@protocol ICMImageGalleryQuadEditorControllerDelegate, ICMImageQuad, ICMQuadAttachment;

@interface ICMImageGalleryQuadEditorController : NSViewController <ICMImageGalleryQuadEditorScrollViewDelegate, ICMImageGalleryQuadEditorOverlayViewDelegate>

@property (retain, nonatomic) id<ICMQuadAttachment> attachment;
@property (retain, nonatomic) id<ICMImageQuad> quad;
@property (retain, nonatomic) id<ICMImageQuad> flippedQuad;
@property (readonly, nonatomic) id<ICMImageQuad> adjustedQuad;
@property (retain, nonatomic) NSImage *image;
@property (weak, nonatomic) ICMImageGalleryQuadEditorScrollView *imageScrollView;
@property (weak, nonatomic) ICMImageGalleryQuadEditorOverlayView *overlay;
@property (weak, nonatomic) NSView *backgroundView;
@property (weak, nonatomic) NSLayoutConstraint *backgroundTopInsetConstraint;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL didAdjustQuad;
@property (nonatomic) BOOL stickyZoomToFit;
@property (nonatomic) BOOL isAnimating;
@property (weak, nonatomic) id<ICMImageGalleryQuadEditorControllerDelegate> delegate;
@property (readonly, nonatomic) id<ICMImageQuad> finalQuad;
@property (readonly, nonatomic) BOOL canScaleUp;
@property (readonly, nonatomic) BOOL canScaleDown;
@property (readonly, nonatomic) BOOL canScaleToActualSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingCanScaleDown;
+ (id)keyPathsForValuesAffectingCanScaleToActualSize;
+ (id)keyPathsForValuesAffectingCanScaleUp;

- (void).cxx_destruct;
- (void)magnifyWithEvent:(id)a0;
- (void)setContentInset:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)smartMagnifyWithEvent:(id)a0;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (id)initWithAttachment:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)centerAndScaleImageInScrollView;
- (double)currentZoomFactorForOverlay;
- (id)displayedQuad;
- (BOOL)hitTestIsValidForOverlay:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrameInOverlayCoordinates;
- (void)performSmartZoom;
- (id)quadForOverlay;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectAvailableForDefaultRect;
- (void)resizeToAspectFitIfNecessaryAnimated:(BOOL)a0;
- (void)scaleDown:(id)a0;
- (void)scaleToActualSize:(id)a0;
- (void)scaleUp:(id)a0;
- (void)scrollViewDidEndScrolling:(id)a0;
- (void)scrollViewMagnificationDidChange:(double)a0;
- (void)scrollViewWillBeginScrolling:(id)a0;
- (void)selectedKnobDidChange:(id)a0;
- (void)selectedKnobDidPanToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setStickyZoomToFit:(BOOL)a0 animated:(BOOL)a1;
- (id)uiRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unitImageRectForOverlayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
