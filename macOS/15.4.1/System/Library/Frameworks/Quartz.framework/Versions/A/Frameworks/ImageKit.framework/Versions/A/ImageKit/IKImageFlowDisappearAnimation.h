@interface IKImageFlowDisappearAnimation : IKAnimationGroup

- (BOOL)animationManager:(id)a0 processCell:(id)a1 channel:(id)a2;
- (BOOL)handleChannel:(id)a0;
- (id)initialKeysNeeded;
- (BOOL)needFinalDataForKey:(id)a0;
- (BOOL)needInitialDataForKey:(id)a0;

@end
