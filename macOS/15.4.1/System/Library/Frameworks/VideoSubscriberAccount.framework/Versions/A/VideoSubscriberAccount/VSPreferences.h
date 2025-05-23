@class NSDate, NSString, NSUndoManager, NSURL, VSDevice, NSDictionary, NSUserDefaults;

@interface VSPreferences : NSObject

@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (retain, nonatomic) NSUserDefaults *globalUserDefaults;
@property (retain, nonatomic) VSDevice *device;
@property (retain, nonatomic) NSUndoManager *undoManager;
@property (readonly, copy, nonatomic) NSURL *overridingAppBootURL;
@property (readonly, nonatomic) BOOL shouldDisableRequestTimeouts;
@property (readonly, nonatomic) BOOL shouldAlwaysAllowRemoteInspection;
@property (readonly, nonatomic) BOOL shouldSkipSetup;
@property (nonatomic) long long cachedAvailabilityStatus;
@property (nonatomic) long long cachedDeveloperProviderStatus;
@property (nonatomic) long long cachedStoreProviderStatus;
@property (readonly, nonatomic) BOOL allowNonSystemTrust;
@property (readonly, nonatomic) BOOL allowInsecureAuthContext;
@property (readonly, nonatomic) BOOL useLegacyVendorIdentifier;
@property (copy, nonatomic) NSDictionary *vendorIdentifierDictionary;
@property (nonatomic) BOOL isInSTBMode;
@property (readonly, nonatomic) BOOL setTopBoxInfoIsSetTopBoxOverride;
@property (readonly, nonatomic) NSString *setTopBoxInfoProviderIdOverride;
@property (readonly, nonatomic) NSString *setTopBoxInfoProviderDisplayNameOverride;
@property (readonly, nonatomic) NSString *setTopBoxInfoAppAdamIdOverride;
@property (readonly, nonatomic) NSString *setTopBoxInfoBundleIdentifierOverride;
@property (readonly, nonatomic) NSString *forceSingleProviderID;
@property (nonatomic) BOOL ignoreSetTopBoxProfile;
@property (readonly, nonatomic) NSDate *setTopBoxActivationTime;
@property (copy, nonatomic) NSString *metricUserID;
@property (readonly, nonatomic) NSDate *metricUserIDLastGenerated;
@property (readonly, nonatomic) BOOL performedSubcriptionToUserAccountMigration;
@property (readonly, nonatomic) BOOL flushMetrics;

- (void).cxx_destruct;
- (void)disableFeature:(id)a0;
- (void)noteDesiredApp:(id)a0;
- (BOOL)shouldSkipSetup;
- (BOOL)shouldUseLegacyVendorIdentifier;
- (void)_updateShouldSkipSetupWithNumber:(id)a0;
- (void)_updateValue:(id)a0 forKey:(id)a1;
- (void)clearFeature:(id)a0;
- (void)clearSetTopBoxActivationTime;
- (void)enableFeature:(id)a0;
- (BOOL)featureIsEnabled:(id)a0 present:(BOOL *)a1;
- (long long)forcedAvailabilityStatus;
- (BOOL)hasChosenDesiredApp;
- (BOOL)performedSubcriptionToUserAccountMigration;
- (void)removeSkipSetupPreset;
- (void)setPerformedSubcriptionToUserAccountMigration;
- (void)setSetTopBoxActivationTime;
- (void)setShouldSkipSetup;
- (id)setTopBoxActivationTime;

@end
