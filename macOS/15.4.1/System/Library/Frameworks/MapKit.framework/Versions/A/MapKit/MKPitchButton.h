@class NSShadow, MKMapView, NSVisualEffectView, NSButton, NSColor;

@interface MKPitchButton : NSView {
    NSButton *_button;
    NSVisualEffectView *_effectView;
    NSShadow *_shadow;
}

@property (weak, nonatomic) MKMapView *mapView;
@property (nonatomic) long long visibility;
@property (nonatomic, getter=_backgroundStyle, setter=_setBackgroundStyle:) unsigned long long backgroundStyle;
@property (nonatomic, getter=_controlSize, setter=_setControlSize:) unsigned long long controlSize;
@property (retain, nonatomic, getter=_contentTintColor, setter=_setContentTintColor:) NSColor *contentTintColor;

+ (id)pitchButtonWithMapView:(id)a0;

- (void).cxx_destruct;
- (void)layout;
- (void)_updateButtonState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_performPitchAction:(id)a0;
- (void)_updateControlSize;
- (id)initWithMapView:(id)a0;

@end
