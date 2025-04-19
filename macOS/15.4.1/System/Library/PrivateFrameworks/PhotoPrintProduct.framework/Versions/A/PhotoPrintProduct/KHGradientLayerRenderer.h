@class KHColor;

@interface KHGradientLayerRenderer : KHLayerRenderer {
    KHColor *_startColor;
    struct { double x; double y; BOOL isRelativeX; BOOL isRelativeY; } _startPoint;
    KHColor *_endColor;
    struct { double x; double y; BOOL isRelativeX; BOOL isRelativeY; } _endPoint;
    float _startRadius;
    float _endRadius;
    int _type;
}

+ (id)supportedAttributes;

- (void)dealloc;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4 flipped:(BOOL)a5;
- (void)loadAttributes;

@end
