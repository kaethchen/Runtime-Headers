@class PAItemViewConfiguration;

@interface PAItemView : NSView {
    PAItemViewConfiguration *_configuration;
    BOOL _inLiveResize;
}

@property (copy, nonatomic) PAItemViewConfiguration *configuration;
@property (nonatomic) struct CGSize { double x0; double x1; } originalSize;
@property (nonatomic) long long originalOrientation;
@property (nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } originalTransform;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentBounds;
@property (nonatomic) double contentScale;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentAnchor;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } frameRenderTime;
@property (nonatomic) struct CGPoint { double x0; double x1; } viewAnchorPoint;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentOrigin;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentOriginPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentClipRect;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } viewContentSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } viewContentBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleViewContentBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleContentBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleOriginalContentBounds;

+ (id)keyPathsForValuesAffectingContentSize;

- (void).cxx_destruct;
- (BOOL)inLiveResize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (struct CGSize { double x0; double x1; })originalSize;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidEndLiveResize;
- (void)viewDidMoveToWindow;
- (void)viewWillStartLiveResize;
- (double)contentScale;
- (void)setContentScale:(double)a0;
- (struct CGPoint { double x0; double x1; })contentOrigin;
- (long long)originalOrientation;
- (void)setOriginalOrientation:(long long)a0;
- (void)setContentOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)setOriginalSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)canRescaleLayerDuringLiveResize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentClipRect;
- (struct CGSize { double x0; double x1; })viewContentSize;
- (struct CGPoint { double x0; double x1; })contentAnchor;
- (struct CGPoint { double x0; double x1; })contentPointToOriginalPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })contentPointToViewPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectToOriginalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectToViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })originalPointToContentPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })originalPointToViewPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originalRectToContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originalRectToViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })originalTransform;
- (void)setContentAnchor:(struct CGPoint { double x0; double x1; })a0;
- (void)setContentClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setOriginalSizeHoldingScaleEquivalent:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1;
- (void)setOriginalTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;
- (void)updateTransforms;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewContentBounds;
- (struct CGPoint { double x0; double x1; })viewPointToContentPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })viewPointToOriginalPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewRectToContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewRectToOriginalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleContentBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleOriginalContentBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleViewContentBounds;

@end
