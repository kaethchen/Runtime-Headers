@class FBSDisplayIdentity, NSSet, FBSDisplayConfiguration, BSKeyedSettings;
@protocol FBSceneClientProcess;

@interface FBSSceneSettings : FBSSettings <FBSSceneSettings, NSCopying, NSMutableCopying> {
    NSSet *_ignoreOcclusionReasons;
}

@property (nonatomic, getter=isOccluded) BOOL occluded;
@property (nonatomic, getter=isClientFuture) BOOL clientFuture;
@property (retain, nonatomic) id<FBSceneClientProcess> clientProcess;
@property (readonly, copy, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly, copy, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) double level;
@property (readonly, nonatomic) long long interfaceOrientation;
@property (readonly, nonatomic, getter=isForeground) BOOL foreground;
@property (readonly, nonatomic, getter=isBackgrounded) BOOL backgrounded;
@property (readonly, nonatomic) long long interruptionPolicy;
@property (nonatomic) char activityMode;
@property (nonatomic) char jetsamMode;
@property (nonatomic) BOOL prefersProcessTaskSuspensionWhileSceneForeground;
@property (retain, nonatomic) BSKeyedSettings *propagatedSettings;

+ (id)settings;
+ (Class)_baseClass;
+ (Class)_mutableClass;
+ (Class)mutableSubclass;
+ (Class)_diffClass;
+ (id)_settingsExtensionsForSceneExtension:(Class)a0;
+ (Class)immutableSubclass;
+ (Class)subclassExtension;

@end
