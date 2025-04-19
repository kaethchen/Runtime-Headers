@class UnifiedTabBarVisualEffectView, NSAppearance;

@interface UnifiedFieldBezelView : NSTextField {
    UnifiedTabBarVisualEffectView *_backingMaterial;
}

@property (class, readonly, nonatomic) long long clearBezelMaterial;

@property (nonatomic) unsigned long long browsingMode;
@property (retain, nonatomic) NSAppearance *titlebarAppearance;
@property (nonatomic) long long backingMaterial;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_finishInitialization;
- (BOOL)allowsVibrancy;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)_updateAppearance;
- (void)_setLayerBorderWidthIfNeeded:(double)a0;
- (void)_updateBackingMaterial;
- (BOOL)_usesDarkAppearance;

@end
