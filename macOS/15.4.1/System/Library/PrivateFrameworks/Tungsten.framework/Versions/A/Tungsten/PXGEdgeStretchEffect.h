@class PXGShader, PXGUniform;

@interface PXGEdgeStretchEffect : PXGEffect {
    PXGShader *_shader;
    PXGUniform *_sampleRect;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sampleRect;

- (void).cxx_destruct;
- (id)shader;
- (id)initWithEntityManager:(id)a0;

@end
