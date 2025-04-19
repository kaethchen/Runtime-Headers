@class NSVisualEffectView;

@interface SHKBlurWindow : SHKBorderlessEffectWindow

@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } blurFrame;
@property (retain) NSVisualEffectView *blurView;
@property BOOL animatesTransitions;
@property unsigned long long serviceMask;

- (void).cxx_destruct;
- (void)animateBlurLayerToFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 oldFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)continueBlurWithIdentityLayerTransformAfterDelay:(double)a0 animate:(BOOL)a1;
- (void)continueBlurWithIdentityLayerTransformAfterDelay:(double)a0 animate:(BOOL)a1 currentMediaTime:(double)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 noSourceWindow:(BOOL)a1;
- (void)startBlurWithServiceScreenFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 initialLayerTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (void)startTransitionOut;

@end
