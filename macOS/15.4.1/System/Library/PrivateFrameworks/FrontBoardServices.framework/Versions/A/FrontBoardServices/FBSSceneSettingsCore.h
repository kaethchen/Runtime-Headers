@class FBSDisplayConfiguration, BSKeyedSettings;
@protocol FBSceneClientProcess;

@interface FBSSceneSettingsCore : FBSCoreSettingsExtension <FBSSceneSettings>

@property (copy, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) double level;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic, getter=isForeground) BOOL foreground;
@property (nonatomic) long long interruptionPolicy;
@property (nonatomic, getter=isOccluded) BOOL occluded;
@property (nonatomic, getter=isClientFuture) BOOL clientFuture;
@property (nonatomic) char activityMode;
@property (nonatomic) char jetsamMode;
@property (nonatomic) BOOL prefersProcessTaskSuspensionWhileSceneForeground;
@property (retain, nonatomic) BSKeyedSettings *propagatedSettings;
@property (retain, nonatomic) id<FBSceneClientProcess> clientProcess;

+ (id)protocol;
+ (id)descriptionOfValue:(id)a0 forSetting:(id)a1;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)propagatedSettings;
- (void)setPropagatedSettings:(id)a0;

@end
