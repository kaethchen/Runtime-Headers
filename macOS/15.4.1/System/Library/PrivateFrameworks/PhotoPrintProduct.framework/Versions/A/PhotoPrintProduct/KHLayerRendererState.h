@interface KHLayerRendererState : KHLayerRenderer {
    int _blendMode;
    BOOL _beginTransparencyLayer;
    BOOL _endTransparencyLayer;
    BOOL _disableShadowLayerRenderer;
}

+ (id)supportedAttributes;

- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4 flipped:(BOOL)a5;
- (void)loadAttributes;

@end
