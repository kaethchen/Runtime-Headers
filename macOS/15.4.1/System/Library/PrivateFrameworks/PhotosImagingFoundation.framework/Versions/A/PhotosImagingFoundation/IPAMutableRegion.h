@interface IPAMutableRegion : IPARegion

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clear;
- (void)scaleBy:(struct CGPoint { double x0; double x1; })a0;
- (void)addRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addRegion:(id)a0;
- (void)setRegion:(id)a0;
- (void)translateBy:(struct CGPoint { double x0; double x1; })a0;
- (void)clipToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)growBy:(struct CGPoint { double x0; double x1; })a0;
- (void)diffWithRegion:(id)a0;
- (void)applyOrientation:(long long)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (void)clipToRegion:(id)a0;
- (void)diffWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)flipInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)growBy:(struct CGPoint { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)removeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeRegion:(id)a0;
- (void)shrinkBy:(struct CGPoint { double x0; double x1; })a0;
- (void)shrinkBy:(struct CGPoint { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)roundUp;
- (void)addRectArray:(id)a0;
- (void)applyAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)clipToRectArray:(id)a0;
- (void)removeRectArray:(id)a0;
- (void)roundDown;

@end
