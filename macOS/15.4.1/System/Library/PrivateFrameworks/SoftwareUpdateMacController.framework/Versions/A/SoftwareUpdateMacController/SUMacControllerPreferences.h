@interface SUMacControllerPreferences : NSObject

+ (id)sharedDefaults;
+ (BOOL)purgingDisabled;
+ (id)accessControlResponseOverride;
+ (BOOL)cancelUpdateOnClientDisconnect;
+ (BOOL)cancelUpdateOnClientDisconnectSpecified;
+ (void)configureOverrides:(id)a0;
+ (BOOL)convertMinorUpdateToMajor;
+ (id)defaultsDescription;
+ (BOOL)disableFetchingAuthentication;
+ (BOOL)fakeDisableMASuspension;
+ (BOOL)fakeSemiSplatRestartNow;
+ (BOOL)fakeSemiSplatRestartNowSpecified;
+ (BOOL)forceRosettaUpdates;
+ (void)logCurrentPreferences;
+ (BOOL)persistedStateDisabled;
+ (BOOL)requireRecoveryOSUpdates;
+ (BOOL)requireSFRSoftwareUpdates;
+ (BOOL)scanErrorsAsCustomer;
+ (void)updateDefaultsWithDictionary:(id)a0;
+ (id)westgateTokenFilePath;

@end
