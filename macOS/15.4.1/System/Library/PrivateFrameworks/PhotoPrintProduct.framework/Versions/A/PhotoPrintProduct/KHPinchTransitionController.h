@class NSView, KHPinchGestureRecognizer, NSString;
@protocol KHPinchTransitionControllerDelegate, UXViewControllerContextTransitioning;

@interface KHPinchTransitionController : NSObject <UXNavigationControllerDelegate, UXViewControllerAnimatedTransitioning, UXViewControllerInteractiveTransitioning>

@property (weak, nonatomic) KHPinchGestureRecognizer *activeTransitioningPinch;
@property (weak, nonatomic) id<KHPinchTransitionControllerDelegate> delegate;
@property (nonatomic) BOOL interactionDisabled;
@property (nonatomic) BOOL rotationDisabled;
@property (nonatomic) BOOL hasActiveInteraction;
@property (nonatomic) double pinchingScaleFactor;
@property (nonatomic) double transitioningThreshold;
@property (nonatomic) double transitionDuration;
@property (nonatomic) double progress;
@property (weak, nonatomic) id<UXViewControllerContextTransitioning> context;
@property (nonatomic) long long navigationOperation;
@property (readonly, nonatomic) NSView *activeTransitioningTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (void)animateTransition:(id)a0;
- (void)animationEnded:(BOOL)a0;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (id)navigationController:(id)a0 interactionControllerForAnimationController:(id)a1;
- (void)startInteractiveTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (BOOL)navigationController:(id)a0 shouldBeginInteractivePopFromViewController:(id)a1 toViewController:(id)a2;
- (void)_setupPinchGestureForView:(id)a0;
- (void)addTargetForTransitioning:(id)a0;
- (void)didBeginInteractionAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)endInteractionWithVelocity:(double)a0;
- (BOOL)shouldBeginInteraction:(id)a0;
- (void)updateInteractionWithProgress:(double)a0 offset:(struct UXOffset { double x0; double x1; })a1 rotation:(double)a2;

@end
