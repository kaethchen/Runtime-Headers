@interface FBSSceneClientSettingsDiffInspector : FBSSettingsDiffInspector

- (id)init;
- (void)observePreferredLevelWithBlock:(id /* block */)a0;
- (void)observeLayersWithBlock:(id /* block */)a0;
- (void)observeOcclusionsWithBlock:(id /* block */)a0;
- (void)observePreferredInterfaceOrientationWithBlock:(id /* block */)a0;
- (void)observePreferredSceneHostIdentifierWithBlock:(id /* block */)a0;
- (void)observePreferredSceneHostIdentityWithBlock:(id /* block */)a0;
- (void)observeProperty:(SEL)a0 withBlock:(id /* block */)a1;

@end
