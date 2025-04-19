@interface QCInteractionPatchActor : QCPatchActor

- (struct CGSize { double x0; double x1; })sizeForNode:(id)a0;
- (void)_drawNameForPort:(id)a0 node:(id)a1 atPoint:(struct CGPoint { double x0; double x1; })a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 inContext:(struct CGContext { } *)a4;
- (void)_drawTitleForNode:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContext:(struct CGContext { } *)a2;
- (unsigned long long)countOfInteractionPortsInNode:(id)a0 direction:(int)a1;
- (struct CGPoint { double x0; double x1; })pointForPort:(id)a0 inNode:(id)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)setupTooltipViewForPoint:(struct CGPoint { double x0; double x1; })a0 inNode:(id)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 tooltipBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;

@end
