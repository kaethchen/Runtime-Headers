@class KHColor;

@interface KHBevelLayerRenderer : KHLayerRenderer {
    double _thickness;
    KHColor *_leftColor;
    KHColor *_rightColor;
    KHColor *_bottomColor;
    KHColor *_topColor;
    int _leftBlendMode;
    int _rightBlendMode;
    int _bottomBlendMode;
    int _topBlendMode;
}

+ (id)supportedAttributes;

- (void)dealloc;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4 flipped:(BOOL)a5;
- (void)loadAttributes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForFrame:(id)a0 atScale:(double)a1;

@end
