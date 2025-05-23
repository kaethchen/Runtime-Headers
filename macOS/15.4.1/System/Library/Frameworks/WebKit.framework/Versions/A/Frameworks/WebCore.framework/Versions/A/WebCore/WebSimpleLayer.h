@interface WebSimpleLayer : CALayer

@property (readonly, nonatomic) BOOL isRenderingInContext;

- (void)setNeedsDisplay;
- (void)display;
- (id)actionForKey:(id)a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)renderInContext:(struct CGContext { } *)a0;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
