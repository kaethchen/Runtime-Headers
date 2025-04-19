@interface RBSymbolContentsLayer : RBLayer

- (void)renderInContext:(struct CGContext { } *)a0;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)allowsBottomLeftOrigin;
- (void)drawInDisplayList:(id)a0;

@end
