@interface FI_TLayer : CALayer

- (void)addSublayer:(id)a0;
- (void)insertSublayer:(id)a0 above:(id)a1;
- (void)insertSublayer:(id)a0 atIndex:(unsigned int)a1;
- (void)insertSublayer:(id)a0 below:(id)a1;
- (void)replaceSublayer:(id)a0 with:(id)a1;
- (void)setContentsScale:(double)a0;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateContentsScale:(double)a0 forSublayer:(id)a1;

@end
