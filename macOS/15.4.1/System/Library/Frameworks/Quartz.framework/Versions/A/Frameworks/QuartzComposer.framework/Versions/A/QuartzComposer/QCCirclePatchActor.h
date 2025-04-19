@interface QCCirclePatchActor : QCPatchActor

- (struct CGSize { double x0; double x1; })sizeForNode:(id)a0;
- (BOOL)pointInTitleRect:(struct CGPoint { double x0; double x1; })a0 inNode:(id)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (float)_actualScaleFactor:(id)a0;
- (void)_drawBackgroundGradientLayerForNode:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 reflectionHeight:(double)a2 inContext:(struct CGContext { } *)a3;
- (void)_drawHighLightForNode:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContext:(struct CGContext { } *)a2;
- (void)_drawPortsForNode:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 view:(id)a2 inContext:(struct CGContext { } *)a3;
- (void)_drawTitleForNode:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContext:(struct CGContext { } *)a2;
- (void)_makeCGPathForNode:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContext:(struct CGContext { } *)a2;
- (void)_makeSelectionPathForNode:(id)a0 border:(float)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 inContext:(struct CGContext { } *)a3;
- (id)_portForPoint:(struct CGPoint { double x0; double x1; })a0 inNode:(id)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 outBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (id)_portTextAttributesForNode:(id)a0;
- (BOOL)dragsOnPortForNode:(id)a0;
- (struct { unsigned char x0[16]; } *)nodeMD5List:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 view:(id)a2 zoom:(double)a3 outCount:(unsigned long long *)a4;
- (struct CGPoint { double x0; double x1; })pointForPort:(id)a0 inNode:(id)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
