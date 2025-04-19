@interface AAPreferences : NSObject

+ (BOOL)isSignInSecurityRedesignEnabled;
+ (BOOL)isYorktownEnabled;
+ (BOOL)shouldSkipIdMSFinalizeCustodian;
+ (id)getTrustedContactsPreflightInfo;
+ (void)setMultipleFullAccountsEnabled:(BOOL)a0;
+ (long long)customHealthCheckIntervalMinutes;
+ (long long)customHealthCheckReachabilityIntervalMinutes;
+ (long long)customHealthCheckVersion;
+ (long long)customMaintenanceIntervalMinutes;
+ (BOOL)disableADPStateHealing;
+ (id)getCustodianInfo;
+ (BOOL)isCustomHealthCheckIntervalEnabled;
+ (BOOL)isCustomMaintenanceIntervalEnabled;
+ (BOOL)isExperimentalModeEnabled;
+ (BOOL)isHealthCheckTTREnabled;
+ (BOOL)isLCInviteAcceptanceEnabled;
+ (BOOL)isMomentsDataclassEnabled;
+ (BOOL)isMultipleFullAccountsEnabled;
+ (BOOL)isNeverSkipCustodianCheckEnabled;
+ (BOOL)isRunningInStoreDemoMode;
+ (BOOL)isSignInSecurityRedesignMacOSEnabled;
+ (BOOL)isSimulateUnhealthyCustodianEnabled;
+ (BOOL)isSpyglass2023Enabled;
+ (void)setCustodianInfo:(id)a0;
+ (void)setCustomHealthCheckIntervalEnabled:(BOOL)a0;
+ (void)setCustomHealthCheckIntervalMinutes:(long long)a0;
+ (void)setCustomHealthCheckVersion:(long long)a0;
+ (void)setCustomHealthFailureReachabilityIntervalMinutes:(long long)a0;
+ (void)setCustomMaintenanceIntervalEnabled:(BOOL)a0;
+ (void)setCustomMaintenanceIntervalMinutes:(long long)a0;
+ (void)setDisableADPStateHealing:(BOOL)a0;
+ (void)setExperimentalModeEnabled:(BOOL)a0;
+ (void)setHealthCheckTTREnabled:(BOOL)a0;
+ (void)setLCInviteAcceptanceEnabled:(BOOL)a0;
+ (void)setNeverSkipCustodianCheckEnabled:(BOOL)a0;
+ (void)setShouldShowAccountContacts:(BOOL)a0;
+ (void)setShouldUseUnifiedLoginEndpoint:(BOOL)a0;
+ (void)setSimulateUnhealthyCustodianEnabled:(BOOL)a0;
+ (void)setTrustedContactsPreflightInfo:(id)a0;
+ (BOOL)shouldEnableAccountUserNotifications;
+ (BOOL)shouldEnableFastSignIn;
+ (BOOL)shouldShowAccountContacts;
+ (BOOL)shouldSkipIdMSKeyUpdate;
+ (BOOL)shouldSkipRecoveryInfoRecordStorage;
+ (BOOL)shouldUseUnifiedLoginEndpoint;
+ (BOOL)simulate2FAFA;

- (BOOL)isLCDeletionChangeCKStatusToDeclinedEnabled;

@end
