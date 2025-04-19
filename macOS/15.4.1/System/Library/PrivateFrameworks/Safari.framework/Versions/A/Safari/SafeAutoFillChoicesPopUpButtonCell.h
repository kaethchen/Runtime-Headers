@interface SafeAutoFillChoicesPopUpButtonCell : NSPopUpButtonCell

@property (nonatomic) double highlightOffset;
@property (nonatomic) double menuWidth;

- (struct CGPoint { double x0; double x1; })_menuLocationForEvent:(id)a0 inCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;
- (double)_menuMinimumWidthForEvent:(id)a0 inCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;

@end
