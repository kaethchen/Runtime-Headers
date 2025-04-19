@class PIParallaxStyle, PFParallaxLayerStack;

@interface PIParallaxClockMaterialRequest : NURenderRequest

@property (retain, nonatomic) PFParallaxLayerStack *layerStack;
@property (retain, nonatomic) PIParallaxStyle *style;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)submit:(id /* block */)a0;
- (id)initWithComposition:(id)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (id)initWithLayerStack:(id)a0;

@end
