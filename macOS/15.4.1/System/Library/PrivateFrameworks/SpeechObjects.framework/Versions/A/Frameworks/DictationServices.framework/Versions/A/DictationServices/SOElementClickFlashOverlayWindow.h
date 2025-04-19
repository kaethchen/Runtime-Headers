@interface SOElementClickFlashOverlayWindow : NSWindow

- (long long)_orderFrontAnimationType;
- (long long)_orderOutAnimationType;
- (id)_windowTransformAnimationForOrdering:(long long)a0 animationType:(long long)a1 interruptingAnimation:(id)a2;
- (BOOL)accessibilityIsIgnored;
- (BOOL)hasShadow;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (unsigned long long)shadowOptions;

@end
