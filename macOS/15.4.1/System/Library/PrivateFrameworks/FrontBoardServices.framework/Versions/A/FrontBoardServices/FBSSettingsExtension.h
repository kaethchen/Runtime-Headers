@interface FBSSettingsExtension : NSObject

+ (id)alloc;
+ (id)protocol;
+ (id)settings:(id)a0 valueDescriptionForFlag:(long long)a1 object:(id)a2 ofSetting:(unsigned long long)a3;
+ (id)BSObjCProtocol;
+ (void)configureSetting:(id)a0;
+ (id)descriptionOfValue:(id)a0 forSetting:(id)a1;
+ (Class)extensionForBSObjCProtocol:(id)a0;
+ (Class)extensionForProtocol:(id)a0;
+ (BOOL)isPrivacySensitiveSetting:(id)a0;
+ (BOOL)propagateSetting:(id)a0;
+ (id)valueForUndefinedSetting:(id)a0;

@end
