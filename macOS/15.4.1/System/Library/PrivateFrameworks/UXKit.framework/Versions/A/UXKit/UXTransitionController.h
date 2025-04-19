@class NSString;

@interface UXTransitionController : NSObject <UXViewControllerAnimatedTransitioning, UXViewControllerInteractiveTransitioning>

@property (nonatomic) long long operation;
@property (readonly, nonatomic) double percentComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateTransition:(id)a0;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (id)navigationController:(id)a0 interactionControllerForAnimationController:(id)a1;
- (void)startInteractiveTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (BOOL)navigationController:(id)a0 shouldBeginInteractivePopFromViewController:(id)a1 toViewController:(id)a2;
- (void)updateInteractiveTransition:(double)a0 inContext:(id)a1;

@end
