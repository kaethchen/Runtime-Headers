@class BSKeyedSettings, NSString, FBSSceneIdentityToken;

@interface FBSSceneClientSettingsCore : FBSCoreSettingsExtension <FBSSceneClientSettings>

@property (retain, nonatomic) BSKeyedSettings *layers;
@property (nonatomic) double preferredLevel;
@property (nonatomic) long long preferredInterfaceOrientation;
@property (copy, nonatomic) NSString *preferredSceneHostIdentifier;
@property (copy, nonatomic) FBSSceneIdentityToken *preferredSceneHostIdentity;

+ (id)protocol;
+ (void)configureSetting:(id)a0;
+ (id)descriptionOfValue:(id)a0 forSetting:(id)a1;

@end
