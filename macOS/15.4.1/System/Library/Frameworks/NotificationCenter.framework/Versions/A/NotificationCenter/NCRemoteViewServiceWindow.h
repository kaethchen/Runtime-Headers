@class NSVisualEffectView;

@interface NCRemoteViewServiceWindow : NSPanel <NCMaterialDelegate>

@property (readonly, nonatomic) NSVisualEffectView *contentView;
@property (nonatomic) unsigned int effectiveDisplay;
@property (nonatomic) unsigned long long pluginAppearance;

- (void)dealloc;
- (void)_setEventMask:(long long)a0;
- (BOOL)_shouldAutoFlattenLayerTree;
- (id)animationForKey:(id)a0;
- (BOOL)canBecomeKeyWindow;
- (id)screen;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1;
- (void)appearanceChanged:(BOOL)a0;
- (void)_setupPluginAppearance;
- (id)initWithDarkAppearance:(BOOL)a0;
- (void)materialChanged:(unsigned char)a0;
- (void)printViews;

@end
