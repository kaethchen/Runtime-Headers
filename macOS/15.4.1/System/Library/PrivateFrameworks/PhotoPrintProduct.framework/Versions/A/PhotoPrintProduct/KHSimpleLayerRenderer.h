@class KHColor, NSArray;

@interface KHSimpleLayerRenderer : KHLayerRenderer {
    KHColor *_outerStrokeColor;
    float _outerStrokeWidth;
    KHColor *_dropShadowColor;
    float _dropShadowBlur;
    KHColor *_innerStrokeColor;
    float _innerStrokeWidth;
    KHColor *_strokeColor;
    float _strokeWidth;
    KHColor *_fillColor;
    NSArray *_paths;
    BOOL _drawUsingPaths;
}

+ (id)supportedAttributes;

- (void)dealloc;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4 flipped:(BOOL)a5;
- (void)loadAttributes;

@end
