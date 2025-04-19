@class _KHTransitionHelper;

@interface KHGridPageTransitionController : KHPinchTransitionController

@property (nonatomic) struct CGPoint { double x; double y; } anchorOffset;
@property (nonatomic) struct CGPoint { double x; double y; } anchorPoint;
@property (retain, nonatomic) _KHTransitionHelper *activeTransition;

- (void).cxx_destruct;
- (void)animateTransition:(id)a0;
- (long long)completionCurve;
- (double)completionSpeed;
- (id)navigationController:(id)a0 interactionControllerForAnimationController:(id)a1;
- (double)transitionDuration:(id)a0;
- (void)didBeginInteractionAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)endInteractionWithVelocity:(double)a0;
- (void)updateInteractionWithProgress:(double)a0 offset:(struct UXOffset { double x0; double x1; })a1 rotation:(double)a2;

@end
