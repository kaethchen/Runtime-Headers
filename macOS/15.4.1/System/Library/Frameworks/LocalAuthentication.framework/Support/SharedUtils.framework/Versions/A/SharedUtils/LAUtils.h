@interface LAUtils : NSObject

+ (BOOL)hasBridge;
+ (id)localizedStringForKey:(id)a0;
+ (int)currentUID;
+ (int)_eosDeviceType;
+ (BOOL)hasSEP;
+ (BOOL)isDaytona;
+ (BOOL)isGibraltar;
+ (id)auditTokenToData:(struct { unsigned int x0[8]; })a0;
+ (BOOL)isScreenLockedWithError:(id *)a0;
+ (BOOL)runningInOsxSystemContext;
+ (id)UIDFromUserName:(id)a0;
+ (BOOL)doesSessionExistForUUID:(unsigned int)a0;
+ (float)globalPreferencesFloatValue:(struct __CFString { } *)a0 defaultValue:(float)a1;
+ (BOOL)isAppleSilicon;
+ (BOOL)isSecureBootCapable;
+ (BOOL)runningInOsxRecovery;
+ (id)userNameFromUID:(id)a0;

@end
