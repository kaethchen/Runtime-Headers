@class NSColor, PXGShader, PXGUniform;

@interface PXGTextLegibilityEffect : PXGEffect {
    PXGShader *_shader;
    PXGUniform *_values;
}

@property (retain, nonatomic) NSColor *tintColor;
@property (nonatomic) double alpha;
@property (nonatomic) double strength;

- (void).cxx_destruct;
- (void)_updateValues;
- (id)shader;
- (id)initWithEntityManager:(id)a0;

@end
