@interface NSSystemStatusBar : NSStatusBar

- (void)dealloc;
- (id)_createStatusItemControlInWindow:(id)a0;
- (id)_name;
- (struct CGSize { double x0; double x1; })backgroundSelectionInset;
- (double)contentPadding;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 inView:(id)a1 highlight:(BOOL)a2;
- (double)thickness;

@end
