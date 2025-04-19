@class PXGShader, PXGUniform;

@interface PXGEdgeFadeEffect : PXGEffect {
    PXGShader *_shader;
    PXGUniform *_directionUniform;
}

@property (nonatomic) long long direction;

- (void).cxx_destruct;
- (id)shader;
- (id)initWithEntityManager:(id)a0;

@end
