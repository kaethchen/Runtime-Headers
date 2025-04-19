@interface iCloudLinkButton : NSButtonCell {
    BOOL _mouseInButton;
}

- (void)awakeFromNib;
- (void)drawBezelWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)initTextCell:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;

@end
