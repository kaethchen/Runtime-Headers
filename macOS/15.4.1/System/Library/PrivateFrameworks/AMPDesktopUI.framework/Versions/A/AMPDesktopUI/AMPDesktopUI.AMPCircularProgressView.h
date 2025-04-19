@interface AMPDesktopUI.AMPCircularProgressView : NSView {
    void /* unknown type, empty encoding */ tintColor;
    void /* unknown type, empty encoding */ preferredSize;
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ spinAnimator;
    void /* unknown type, empty encoding */ progressLayer;
    void /* unknown type, empty encoding */ trackLayer;
    void /* unknown type, empty encoding */ imageView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic) void /* unknown type, empty encoding */ imageScale;
@property (nonatomic, readonly) double accessibilityProgressValue;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateLayer;
- (id)propertyKeysForViewSpy;

@end
