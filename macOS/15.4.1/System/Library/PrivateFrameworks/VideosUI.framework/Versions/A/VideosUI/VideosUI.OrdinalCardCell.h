@interface VideosUI.OrdinalCardCell : VUIBaseCollectionViewCell {
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ cellImageView;
    void /* unknown type, empty encoding */ numberLabel;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ overlayView;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)accessibilityChildren;
- (id)accessibilityCustomActions;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (id)accessibilityTitle;
- (BOOL)isAccessibilityElement;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (struct CGSize { double x0; double x1; })vui_sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
