@interface MCXPlugInKitManagement : NSObject

+ (BOOL)allowUseOfPlugIn:(id)a0 byPid:(int)a1 flags:(unsigned long long)a2;
+ (id)buildSettingsFromPayloads:(id)a0;
+ (id)getEffectiveSettings;
+ (id)localizedNameForExtensionID:(id)a0;
+ (id)managementChangedNotificationName;
+ (id)publicExtensionPoints;
+ (id)settingsDomain;
+ (id)settingsKeys;

@end
