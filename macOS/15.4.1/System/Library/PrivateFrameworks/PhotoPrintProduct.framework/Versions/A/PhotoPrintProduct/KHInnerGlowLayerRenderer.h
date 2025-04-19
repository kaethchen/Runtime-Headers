@class KHColor;

@interface KHInnerGlowLayerRenderer : KHLayerRenderer {
    int _innerGlowMethod;
    KHColor *_innerGlowColor;
    long long _innerGlowSteps;
    double _innerGlowBlur;
    double _ciScaleDownFactor;
    double _ciMaskScaleFactor;
}

+ (id)supportedAttributes;

- (void)_ciFillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3;
- (void)_multiStrokeFillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4 flipped:(BOOL)a5;
- (void)loadAttributes;

@end
