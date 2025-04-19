@interface IKImageBrowserDisappearAnimation : IKAnimationGroup

- (void)dealloc;
- (BOOL)animationManager:(id)a0 processStep:(id)a1;
- (BOOL)handleChannel:(id)a0;
- (id)initialKeysNeeded;
- (BOOL)needFinalDataForKey:(id)a0;
- (BOOL)needInitialDataForKey:(id)a0;

@end
