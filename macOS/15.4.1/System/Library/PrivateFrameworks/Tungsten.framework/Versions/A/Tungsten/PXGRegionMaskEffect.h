@class PXGShader, PXRegion, PXGUniform;

@interface PXGRegionMaskEffect : PXGEffect {
    PXGShader *_shader;
    PXGUniform *_valuesUniform;
}

@property (retain, nonatomic) PXRegion *region;
@property (nonatomic) double alpha;

- (void).cxx_destruct;
- (void)_updateValues;
- (id)shader;
- (id)initWithEntityManager:(id)a0;

@end
