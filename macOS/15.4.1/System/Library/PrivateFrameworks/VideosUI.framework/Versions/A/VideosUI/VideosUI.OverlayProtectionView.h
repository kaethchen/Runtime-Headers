@interface VideosUI.OverlayProtectionView : VUIBaseView {
    void /* unknown type, empty encoding */ legibilityGradientLayer;
    void /* unknown type, empty encoding */ protectionHeight;
}

@property (nonatomic) double cornerRadius;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
