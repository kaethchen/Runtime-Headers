@class NSString, NSObject;
@protocol OS_os_log;

@interface AMSLogConfig : NSObject <NSCopying, NSMutableCopying>

@property (copy) NSString *category;
@property (copy) NSString *subsystem;
@property (retain) NSObject<OS_os_log> *OSLogObject;
@property (readonly) BOOL debugLogsEnabled;

+ (id)sharedConfig;
+ (id)sharedBagConfig;
+ (BOOL)_debugLogsEnabled:(id)a0;
+ (id)sharedAccountsAuthenticationPluginConfig;
+ (id)sharedAccountsConfig;
+ (id)sharedAccountsCookiesConfig;
+ (id)sharedAccountsDaemonConfig;
+ (id)sharedAccountsLogoutConfig;
+ (id)sharedAccountsMigrationConfig;
+ (id)sharedAccountsMigrationConfigOversize;
+ (id)sharedAccountsMultiUserConfig;
+ (id)sharedAccountsNotificationPluginConfig;
+ (id)sharedAccountsOversizeConfig;
+ (id)sharedAccountsStorefrontConfig;
+ (id)sharedAccountsSyncPluginConfig;
+ (id)sharedActionConfig;
+ (id)sharedAnisetteConfig;
+ (id)sharedAttestationConfig;
+ (id)sharedBagCacheConfig;
+ (id)sharedBiometricsConfig;
+ (id)sharedConfigOversize;
+ (id)sharedDataMigrationConfig;
+ (id)sharedDeviceOffersConfig;
+ (id)sharedEngagementConfig;
+ (id)sharedFollowUpConfig;
+ (id)sharedFraudReportConfig;
+ (id)sharedKeychainConfig;
+ (id)sharedMarketingItemConfig;
+ (id)sharedMediaConfig;
+ (id)sharedMediaServiceOwnerConfig;
+ (id)sharedMessagingUIConfig;
+ (id)sharedMetricsConfig;
+ (id)sharedPrivacyConfig;
+ (id)sharedPromiseConfig;
+ (id)sharedPurchaseConfig;
+ (id)sharedPushNotificationConfig;
+ (id)sharedRatingsProviderConfig;
+ (id)sharedRegulatoryEligibilityConfig;
+ (id)sharedServerDataCacheConfig;
+ (id)sharedTreatmentsConfig;
+ (id)sharedURLLoadingConfig;
+ (id)sharedUserNotificationConfig;
+ (id)sharedWebUIConfig;
+ (id)sharedWebUIPageConfig;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithCategory:(id)a0 backingLog:(id)a1;

@end
