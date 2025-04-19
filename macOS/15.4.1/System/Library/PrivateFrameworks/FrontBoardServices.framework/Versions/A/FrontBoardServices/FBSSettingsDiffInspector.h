@class BSMutableKeyedSettings, BSMutableSettings;

@interface FBSSettingsDiffInspector : NSObject {
    BSMutableKeyedSettings *_observerInfo;
    BSMutableSettings *_otherSettingsObserverInfo;
    BOOL _iteratingObservers;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)removeAllObservers;
- (void)inspectDiff:(id)a0 withContext:(void *)a1;
- (void)observeOtherSetting:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (void)observeProperty:(SEL)a0 withBlock:(id /* block */)a1;
- (void)observeSetting:(id)a0 withBlock:(id /* block */)a1;

@end
