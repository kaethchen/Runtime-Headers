@interface _NSMenuToolTipManager : NSToolTipManager

+ (id)sharedToolTipManager;

- (id)toolTipContentViewWithAttributedString:(id)a0 location:(struct CGPoint { double x0; double x1; })a1 where:(struct CGPoint { double x0; double x1; })a2 windowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 toolTip:(id)a4;

@end
