@class FBSSettingsDiff, FBSSceneTransitionContext, FBSSettings;
@protocol FBSMutableSettings;

@interface FBSSceneUpdate : NSObject {
    FBSSettings *_settings;
    FBSSettings<FBSMutableSettings> *_mutableSettings;
    FBSSettings *_previousSettings;
    FBSSettingsDiff *_diff;
    FBSSceneTransitionContext *_context;
    FBSSceneUpdate *_instigatingUpdate;
}

- (void).cxx_destruct;
- (id)settings;
- (id)mutableSettings;
- (void)inspect:(id /* block */)a0;
- (id)parentUpdate;
- (id)previousSettings;
- (id)settingsDiff;
- (id)transitionContext;

@end
