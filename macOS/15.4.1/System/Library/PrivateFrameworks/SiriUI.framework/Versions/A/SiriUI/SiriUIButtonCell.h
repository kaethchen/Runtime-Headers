@interface SiriUIButtonCell : NSButtonCell

@property struct NSEdgeInsets { double top; double left; double bottom; double right; } imageEdgeInsets;
@property struct NSEdgeInsets { double top; double left; double bottom; double right; } titleEdgeInsets;

- (void)drawImage:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawTitle:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;

@end
