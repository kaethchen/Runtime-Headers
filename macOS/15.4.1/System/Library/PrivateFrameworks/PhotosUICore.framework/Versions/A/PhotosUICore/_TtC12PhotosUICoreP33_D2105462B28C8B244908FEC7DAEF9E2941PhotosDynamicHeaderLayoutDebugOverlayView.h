@interface _TtC12PhotosUICoreP33_D2105462B28C8B244908FEC7DAEF9E2941PhotosDynamicHeaderLayoutDebugOverlayView : NSView <PXGReusableView> {
    void /* unknown type, empty encoding */ boundsIndicator;
    void /* unknown type, empty encoding */ mainContentIndicator;
    void /* unknown type, empty encoding */ safeAreaIndicator;
    void /* unknown type, empty encoding */ floatingAreaIndicator;
    void /* unknown type, empty encoding */ insets;
    void /* unknown type, empty encoding */ insetsObservation;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ userData;
@property (nonatomic) void /* unknown type, empty encoding */ clippingRect;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)becomeReusable;

@end
