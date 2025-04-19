@interface UINSViewDynamicToolTipManager : NSViewDynamicToolTipManager

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dynamicToolTipRectAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)dynamicToolTipRevealoverInfoAtPoint:(struct CGPoint { double x0; double x1; })a0 trackingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (id)dynamicToolTipStringAtPoint:(struct CGPoint { double x0; double x1; })a0 trackingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (void)view:(id)a0 customToolTip:(long long)a1 drawInView:(id)a2 displayInfo:(id)a3;
- (id)sceneView;

@end
