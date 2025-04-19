@interface MusicUI.GradientFadeView : NSVisualEffectView {
    void /* unknown type, empty encoding */ blendingView;
    void /* unknown type, empty encoding */ gradientLayer;
    void /* unknown type, empty encoding */ colors;
    void /* unknown type, empty encoding */ locations;
}

@property (nonatomic, readonly) BOOL wantsUpdateLayer;
@property (nonatomic, readonly) BOOL acceptsFirstResponder;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;

@end
