@interface MusicUI.OverlayView : JUCustomView {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ isHovered;
    void /* unknown type, empty encoding */ onActiveStateChange;
    void /* unknown type, empty encoding */ playButton;
    void /* unknown type, empty encoding */ contextMenuButton;
    void /* unknown type, empty encoding */ checkmarkButton;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ descendantIsFirstResponder;
    void /* unknown type, empty encoding */ clickGestureRecognizer;
}

@property (nonatomic) double alphaValue;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (void)onOverlayViewClicked:(id)a0;

@end
