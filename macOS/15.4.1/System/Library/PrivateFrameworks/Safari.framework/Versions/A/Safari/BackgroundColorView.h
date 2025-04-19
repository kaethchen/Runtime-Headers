@class NSColor, NSVisualEffectView;

@interface BackgroundColorView : ConfigurableVibrancyView {
    NSVisualEffectView *_windowBackgroundMaterialVisualEffectView;
}

@property (retain, nonatomic) NSColor *backgroundColor;
@property (nonatomic) double cornerRadius;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)_updateLayerFromProperties;
- (void)_updateWindowBackgroundMaterialVisualEffectViewIfNeeded;
- (void)setBackgroundColor:(id)a0 withAnimation:(BOOL)a1;

@end
