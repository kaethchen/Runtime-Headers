@interface IASFakeLinkButton : NSButton

- (id)initWithCoder:(id)a0;
- (void)setAttributedTitle:(id)a0;
- (void)setTitle:(id)a0;
- (void)drawFocusRingMask;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetCursorRects;

@end
