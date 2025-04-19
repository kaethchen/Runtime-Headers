@interface FBSSceneSettingsDiffInspector : FBSSettingsDiffInspector

- (id)init;
- (void)observeIsBackgroundedWithBlock:(id /* block */)a0;
- (void)observeDisplayConfigurationWithBlock:(id /* block */)a0;
- (void)observeFrameWithBlock:(id /* block */)a0;
- (void)observeInterfaceOrientationWithBlock:(id /* block */)a0;
- (void)observeIsForegroundWithBlock:(id /* block */)a0;
- (void)observeLevelWithBlock:(id /* block */)a0;
- (void)observeOcclusionsWithBlock:(id /* block */)a0;
- (void)observeProperty:(SEL)a0 withBlock:(id /* block */)a1;

@end
