@interface HeaderFooterPrintRenderer : NSObject

@property (readonly, nonatomic) double headerHeight;
@property (readonly, nonatomic) double footerHeight;

- (void)_drawUsingFont:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 leftString:(id)a2 rightString:(id)a3 baseline:(double)a4;
- (BOOL)_shouldPrintHeadersAndFooters;
- (void)drawFooterInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forPageWithURLString:(id)a1;
- (void)drawHeaderInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forPageWithTitle:(id)a1;

@end
