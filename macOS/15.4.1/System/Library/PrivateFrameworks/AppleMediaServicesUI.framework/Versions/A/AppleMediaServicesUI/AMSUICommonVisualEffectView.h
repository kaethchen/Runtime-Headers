@interface AMSUICommonVisualEffectView : NSVisualEffectView

@property BOOL wallpaperTint;

- (id)init;
- (void)viewDidChangeEffectiveAppearance;
- (void)_updateMaterial;

@end
