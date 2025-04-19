@interface FBSSceneSettingsDiff : FBSSettingsDiff

+ (id)diffFromSettings:(id)a0 toSettings:(id)a1;
+ (Class)_settingsClass;

- (id)settingsByApplyingToMutableCopyOfSettings:(id)a0;

@end
