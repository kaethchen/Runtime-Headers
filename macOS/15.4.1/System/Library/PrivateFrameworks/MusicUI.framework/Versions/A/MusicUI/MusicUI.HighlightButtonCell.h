@interface MusicUI.HighlightButtonCell : NSButtonCell

- (id)initWithCoder:(id)a0;
- (void)highlight:(BOOL)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (id)initImageCell:(id)a0;
- (id)initTextCell:(id)a0;

@end
