@class CALayer, NSWindow;

@interface SHKDimAndShadowWindow : SHKBorderlessEffectWindow {
    CALayer *groupLayer;
    CALayer *dimLayer;
    CALayer *shadowLayer;
    CALayer *shadowCenterKnockoutLayer;
}

@property (weak) NSWindow *remoteWindow;
@property (weak) NSWindow *sourceWindow;
@property BOOL animatesTransitions;

- (void).cxx_destruct;
- (void)animateLayersToFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 oldFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)continueTransitionInWithIdentityLayerTransformAfterDelay:(double)a0 animate:(BOOL)a1;
- (void)continueTransitionInWithIdentityLayerTransformAfterDelay:(double)a0 animate:(BOOL)a1 currentMediaTime:(double)a2;
- (void)ensureGroupLayerInitialized;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 noSourceWindow:(BOOL)a1;
- (void)startTransitionInWithDimFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 serviceScreenFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 initialLayerTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (void)startTransitionOut;
- (void)updateShadowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
