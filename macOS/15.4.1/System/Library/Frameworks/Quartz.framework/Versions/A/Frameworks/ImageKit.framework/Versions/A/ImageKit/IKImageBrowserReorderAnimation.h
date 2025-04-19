@interface IKImageBrowserReorderAnimation : IKAnimationGroup {
    BOOL _avoidCrossing;
}

- (BOOL)animationManager:(id)a0 processCell:(id)a1 channel:(id)a2;
- (BOOL)avoidCrossing;
- (BOOL)handleChannel:(id)a0;
- (id)initialKeysNeeded;
- (BOOL)needFinalDataForKey:(id)a0;
- (BOOL)needInitialDataForKey:(id)a0;
- (void)setAvoidCrossing:(BOOL)a0;

@end
