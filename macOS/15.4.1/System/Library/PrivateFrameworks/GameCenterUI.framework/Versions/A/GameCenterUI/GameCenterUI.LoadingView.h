@interface GameCenterUI.LoadingView : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ progressIndicator;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ delayedAnimate;
}

@property (nonatomic) void /* unknown type, empty encoding */ isAnimating;
@property (nonatomic) void /* unknown type, empty encoding */ showsImmediately;

- (void).cxx_destruct;
- (void)layout;
- (id)accessibilityChildren;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (id)accessibilityValue;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (void)viewWillMoveToSuperview:(id)a0;

@end
