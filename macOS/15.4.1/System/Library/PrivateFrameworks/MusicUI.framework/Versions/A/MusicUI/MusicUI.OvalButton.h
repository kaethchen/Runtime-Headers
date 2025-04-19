@interface MusicUI.OvalButton : NSButton {
    void /* unknown type, empty encoding */ buttonCornerRadius;
    void /* unknown type, empty encoding */ innerColor;
    void /* unknown type, empty encoding */ textColor;
    void /* unknown type, empty encoding */ widthAdjustment;
    void /* unknown type, empty encoding */ heightAdjustment;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } focusRingMaskBounds;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)drawFocusRingMask;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
