@class FBProcessExecutionContext, FBWatchdogTransitionContext, NSError, FBSSceneUpdate, NSSet, RBSProcessHandle, BKSAnimationFenceHandle, FBSceneUpdateContext, NSString, BSProcessHandle, BSAnimationSettings;

@interface FBSSceneTransitionContext : FBSSettings <FBSSceneTransitionContext, NSCopying, NSMutableCopying, FBSMutableSettings>

@property (copy, nonatomic) BSAnimationSettings *animationSettings;
@property (retain, nonatomic) BKSAnimationFenceHandle *animationFence;
@property (copy, nonatomic) NSSet *actions;
@property (retain, nonatomic) BSProcessHandle *originatingProcess;
@property (retain, nonatomic) FBSSceneUpdate *parentUpdate;
@property (retain, nonatomic) FBProcessExecutionContext *executionContext;
@property (retain, nonatomic) RBSProcessHandle *clientProcessHandle;
@property (retain, nonatomic) FBSceneUpdateContext *updateContext;
@property (retain, nonatomic) FBWatchdogTransitionContext *watchdogTransitionContext;
@property (nonatomic) BOOL allowCPUThrottling;
@property (nonatomic, getter=isRunningBoardAssertionDisabled) BOOL runningBoardAssertionDisabled;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_baseClass;
+ (Class)_mutableClass;
+ (Class)mutableSubclass;
+ (id)_settingsExtensionsForSceneExtension:(Class)a0;
+ (Class)immutableSubclass;
+ (Class)subclassExtension;
+ (id)transitionContext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAction:(id)a0;
- (id)initWithSettings:(id)a0;
- (void)addActions:(id)a0;
- (void)removeAction:(id)a0;
- (void)removeActions:(id)a0;
- (id)transientLocalClientSettings;

@end
