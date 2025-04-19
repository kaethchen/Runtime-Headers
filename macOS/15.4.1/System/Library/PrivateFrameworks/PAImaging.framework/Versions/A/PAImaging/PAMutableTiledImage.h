@interface PAMutableTiledImage : PATiledImage

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)invalidate;
- (void)setOrientation:(long long)a0;
- (void)invalidateRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateRegion:(id)a0;
- (void)validate;
- (void)setExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setOriginalOrientation:(long long)a0;
- (void)validateRegion:(id)a0;
- (void)validateRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)enumerateMutableTilesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withBlock:(id /* block */)a1;
- (id)mutableTileAtIndex:(unsigned long long)a0;

@end
