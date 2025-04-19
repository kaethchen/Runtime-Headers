@interface UXSlideTransitionController : UXTransitionController

- (void)animateTransition:(id)a0;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (id)navigationController:(id)a0 interactionControllerForAnimationController:(id)a1;
- (void)startInteractiveTransition:(id)a0;
- (void)updateInteractiveTransition:(double)a0 inContext:(id)a1;

@end
