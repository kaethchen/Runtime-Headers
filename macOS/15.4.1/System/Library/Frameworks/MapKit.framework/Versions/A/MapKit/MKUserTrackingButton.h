@class _MKUserTrackingButton, NSShadow, MKMapView, NSVisualEffectView, NSColor;

@interface MKUserTrackingButton : NSView {
    _MKUserTrackingButton *_button;
    NSVisualEffectView *_effectView;
    NSShadow *_shadow;
}

@property (nonatomic) unsigned long long backgroundStyle;
@property (nonatomic, getter=_controlSize, setter=_setControlSize:) unsigned long long controlSize;
@property (retain, nonatomic, getter=_contentTintColor, setter=_setContentTintColor:) NSColor *contentTintColor;
@property (weak, nonatomic) MKMapView *mapView;

+ (id)userTrackingButtonWithMapView:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 button:(id)a1;

@end
