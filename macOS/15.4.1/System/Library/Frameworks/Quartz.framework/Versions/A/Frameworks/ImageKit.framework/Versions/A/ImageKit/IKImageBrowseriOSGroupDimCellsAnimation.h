@interface IKImageBrowseriOSGroupDimCellsAnimation : IKAnimationGroup {
    BOOL _expandMode;
}

- (BOOL)animationManager:(id)a0 processStep:(id)a1;
- (BOOL)expandMode;
- (BOOL)handleChannel:(id)a0;
- (void)setExpandMode:(BOOL)a0;

@end
