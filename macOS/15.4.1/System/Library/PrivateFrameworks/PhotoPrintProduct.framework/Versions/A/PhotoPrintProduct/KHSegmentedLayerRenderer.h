@class NSLock, KHSegmentedEdge, KHSegmentedPart;

@interface KHSegmentedLayerRenderer : KHLayerRenderer {
    BOOL _reverseEdgeOrder;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _drawRect;
    struct CGImage { } *_compositedImage;
    NSLock *_compositedImageLock;
    double _compositedImageScale;
    double _backingScaleFactor;
    KHSegmentedEdge *leftEdge;
    KHSegmentedEdge *rightEdge;
    KHSegmentedEdge *topEdge;
    KHSegmentedEdge *bottomEdge;
    KHSegmentedPart *upperLeftCorner;
    KHSegmentedPart *upperRightCorner;
    KHSegmentedPart *lowerLeftCorner;
    KHSegmentedPart *lowerRightCorner;
}

+ (id)supportedAttributes;
+ (id)categoryForPieceType:(int)a0;

- (void)dealloc;
- (id)description;
- (void)_drawBottomEdgeInContext:(struct CGContext { } *)a0 withFrameOrigin:(struct CGPoint { double x0; double x1; })a1;
- (void)_drawEdge:(id)a0 inContext:(struct CGContext { } *)a1 withFrameOrigin:(struct CGPoint { double x0; double x1; })a2;
- (void)_drawLeftEdgeInContext:(struct CGContext { } *)a0 withFrameOrigin:(struct CGPoint { double x0; double x1; })a1;
- (void)_drawLowerLeftCornerInContext:(struct CGContext { } *)a0 withFrameOrigin:(struct CGPoint { double x0; double x1; })a1;
- (void)_drawLowerRightCornerInContext:(struct CGContext { } *)a0 withFrameOrigin:(struct CGPoint { double x0; double x1; })a1;
- (void)_drawRightEdgeInContext:(struct CGContext { } *)a0 withFrameOrigin:(struct CGPoint { double x0; double x1; })a1;
- (void)_drawTopEdgeInContext:(struct CGContext { } *)a0 withFrameOrigin:(struct CGPoint { double x0; double x1; })a1;
- (void)_drawUpperLeftCornerInContext:(struct CGContext { } *)a0 withFrameOrigin:(struct CGPoint { double x0; double x1; })a1;
- (void)_drawUpperRightCornerInContext:(struct CGContext { } *)a0 withFrameOrigin:(struct CGPoint { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })_drawingSize;
- (void)_ensureComponentsAreLoadedAtScale:(double)a0 factor:(double)a1;
- (id)_newPartForType:(int)a0;
- (id)_partForType:(int)a0;
- (void)_updateCompositedImageWithScale:(double)a0;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4 flipped:(BOOL)a5;
- (id)firstCornerForEdge:(id)a0;
- (id)initWithTreatmentLayer:(id)a0;
- (void)loadAttributes;
- (struct { double x0; BOOL x1; double x2; BOOL x3; double x4; BOOL x5; double x6; BOOL x7; })safeRectMarginForPath:(struct CGPath { } *)a0 atScale:(double)a1;
- (id)secondCornerForEdge:(id)a0;

@end
