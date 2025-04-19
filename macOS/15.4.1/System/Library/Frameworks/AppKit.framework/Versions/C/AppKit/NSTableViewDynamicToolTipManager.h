@interface NSTableViewDynamicToolTipManager : NSViewDynamicToolTipManager

- (void)_getColumn:(long long *)a0 row:(long long *)a1 cell:(id *)a2 cellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 toolTipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 wantsToolTip:(BOOL *)a5 wantsRevealover:(BOOL *)a6 atPoint:(struct CGPoint { double x0; double x1; })a7;
- (id)_tooltipStringForCell:(id)a0 column:(long long)a1 row:(long long)a2 point:(struct CGPoint { double x0; double x1; })a3 trackingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4;
- (BOOL)_wantsRevealoverAtColumn:(long long)a0 row:(long long)a1;
- (BOOL)_wantsToolTipAtColumn:(long long)a0 row:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dynamicToolTipRectAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)dynamicToolTipRevealoverInfoAtPoint:(struct CGPoint { double x0; double x1; })a0 trackingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (id)dynamicToolTipStringAtPoint:(struct CGPoint { double x0; double x1; })a0 trackingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;

@end
