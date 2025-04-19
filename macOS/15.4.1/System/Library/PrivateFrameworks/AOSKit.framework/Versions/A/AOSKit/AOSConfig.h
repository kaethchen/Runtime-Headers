@interface AOSConfig : NSObject

+ (void)initialize;
+ (id)sharedInstance;
+ (id)urlForKey:(id)a0;
+ (int)logLevel;
+ (id)apsEnvironment;
+ (id)AOSKGetAccountSettingsURL:(id)a0 forLoggedInUser:(id)a1 andCurrentClient:(id)a2;
+ (id)AOSKClientInfo;
+ (BOOL)AOSKGetValidationInfo;
+ (id)accountsDirectory;
+ (double)alertWindowSeconds;
+ (BOOL)didDownloadConfig;
+ (BOOL)doUseCFURLConnection;
+ (BOOL)isClientValidationEnabled;
+ (BOOL)isDefaultAlertWindowOverridden;
+ (BOOL)isRunningAsAgent;
+ (BOOL)isURLValidationEnabled;
+ (id)mailAppleID;
+ (id)prefsValueForKey:(id)a0 withIdentifier:(id)a1;
+ (void)setIsRunningAsAgent:(BOOL)a0;
+ (void)setPrefsValue:(id)a0 forKey:(id)a1 withIdentifier:(id)a2;
+ (id)u13HeaderName;
+ (id)urlWithAppleID:(id)a0 DSID:(id)a1 andKey:(id)a2;

- (id)init;
- (void)clearCaches;
- (id)setupInfo;
- (void)listenForSystemEvents:(void *)a0;

@end
