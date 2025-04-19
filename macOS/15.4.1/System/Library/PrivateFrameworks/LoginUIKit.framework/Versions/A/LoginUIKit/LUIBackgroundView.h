@interface LUIBackgroundView : NSImageView {
    int _style;
}

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)setStyle:(int)a0;
- (void)_commonInit;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)accessibilityChildren;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseUp:(id)a0;
- (void)setDisplayID:(unsigned int)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;

@end
