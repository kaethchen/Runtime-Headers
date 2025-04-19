@class UXView;

@interface UXParallaxTransitionController : UXTransitionController {
    UXView *_dimmingView;
}

+ (void)_addShadowToView:(id)a0 withAlpha:(double)a1;

- (void).cxx_destruct;
- (void)animateTransition:(id)a0;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (id)navigationController:(id)a0 interactionControllerForAnimationController:(id)a1;
- (void)startInteractiveTransition:(id)a0;
- (void)_setupDimmingViewInContext:(id)a0 withAlpha:(double)a1;
- (BOOL)navigationController:(id)a0 shouldBeginInteractivePopFromViewController:(id)a1 toViewController:(id)a2;
- (void)updateInteractiveTransition:(double)a0 inContext:(id)a1;

@end
