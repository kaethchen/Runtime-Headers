@class NSColor, PXGShader, PXGUniform;

@interface PXGColorTintEffect : PXGEffect {
    PXGShader *_shader;
    PXGUniform *_tintColorUniform;
}

@property (retain, nonatomic) NSColor *tintColor;

- (void).cxx_destruct;
- (id)shader;
- (id)initWithEntityManager:(id)a0;

@end
