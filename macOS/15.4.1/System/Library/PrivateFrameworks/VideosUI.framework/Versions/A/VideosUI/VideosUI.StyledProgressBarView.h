@interface VideosUI.StyledProgressBarView : VUIBaseView {
    void /* unknown type, empty encoding */ progressBarView;
    void /* unknown type, empty encoding */ shadowImageView;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ height;
    void /* unknown type, empty encoding */ progress;
    void /* unknown type, empty encoding */ progressTintColor;
    void /* unknown type, empty encoding */ gradientStartColor;
    void /* unknown type, empty encoding */ gradientEndColor;
    void /* unknown type, empty encoding */ completeTintColor;
    void /* unknown type, empty encoding */ shouldProgressBarUseRoundCorner;
    void /* unknown type, empty encoding */ padding;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic, readonly) double accessibilityProgress;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
