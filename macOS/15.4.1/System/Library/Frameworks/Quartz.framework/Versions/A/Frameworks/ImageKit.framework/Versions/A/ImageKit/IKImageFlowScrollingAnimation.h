@interface IKImageFlowScrollingAnimation : IKAnimationGroup {
    id _delegate;
}

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (BOOL)animationManager:(id)a0 processStep:(id)a1;
- (BOOL)handleChannel:(id)a0;

@end
