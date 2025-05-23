@class FBSSceneSettingsDiff, NSString, FBSSceneTransitionContext, FBSSceneSettings;
@protocol NSObject, NSCopying;

@interface FBSceneUpdateContext : NSObject <BSDescriptionProviding> {
    BOOL _lifecycleExternallyManaged;
}

@property (readonly, copy, nonatomic) NSString *sceneID;
@property (readonly, nonatomic) unsigned long long transactionID;
@property (readonly, nonatomic) FBSSceneSettings *settings;
@property (readonly, nonatomic) FBSSceneSettingsDiff *settingsDiff;
@property (readonly, weak, nonatomic) FBSSceneTransitionContext *transitionContext;
@property (copy, nonatomic) id<NSObject, NSCopying> clientContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextWithSceneID:(id)a0 transactionID:(unsigned long long)a1 settings:(id)a2 settingsDiff:(id)a3 transitionContext:(id)a4;

- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (BOOL)isClientLifecycleExternallyManaged;

@end
