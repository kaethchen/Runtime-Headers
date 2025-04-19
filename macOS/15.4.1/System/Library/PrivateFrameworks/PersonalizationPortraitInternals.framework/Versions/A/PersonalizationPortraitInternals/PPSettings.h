@class NSUserDefaults, PPKVOObserver, NSObject, _PASLock;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PPSettings : NSObject {
    NSUserDefaults *_portraitDefaults;
    NSUserDefaults *_canLearnFromAppDefaults;
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_initializationComplete;
    PPKVOObserver *_canLearnFromAppKVOObserver;
    PPKVOObserver *_weightKVOObserver;
    PPKVOObserver *_abGroupKVObserver;
    PPKVOObserver *_queryPlanLoggingKVOObserver;
}

@property (nonatomic, getter=isAppConnectionsLocationsEnabled) BOOL appConnectionsLocationsEnabled;

+ (id)sharedInstance;
+ (void)disableBundleIdentifier:(id)a0;
+ (BOOL)isCloudSyncEnabled;
+ (void)clearTestSettings;
+ (id)cloudSyncDisabledFirstPartyBundleIds;
+ (BOOL)isVoiceAssistantEnabled;

- (id)init;
- (void).cxx_destruct;
- (id)userDefaults;
- (void)setEntitiesBackfilledTimestamp:(id)a0;
- (id)abGroupOverride;
- (id)assetDefaultBundleOverridePathForAssetIdentifier:(id)a0;
- (double)assetMetadataRefreshIntervalSeconds;
- (BOOL)bundleIdentifierIsEnabledForCloudKit:(id)a0;
- (BOOL)bundleIdentifierIsEnabledForDonation:(id)a0;
- (void)clearAssetMetadataRefreshIntervalSeconds;
- (void)deregisterDisabledBundleIdentifierChangeHandlerWithToken:(int)a0;
- (void)deregisterQueryPlanLoggingChangeHandlerWithToken:(int)a0;
- (id)entitiesBackfilledTimestamp;
- (id)entitiesMappingPreviousTrieSha256;
- (BOOL)hasWrittenSharedWithYouContentAvailable;
- (BOOL)hasWrittenSharedWithYouContentConsumed;
- (BOOL)isAuthorizedToLogLocation;
- (BOOL)queryPlanLoggingEnabled;
- (void)refreshCloudKitDisabledBundleIdsAsync;
- (void)registerCloudKitDisabledBundleIdRewriteHandler;
- (void)registerDisabledBundleIdPurgeHandler;
- (int)registerDisabledBundleIdentifierChangeHandler:(id /* block */)a0;
- (int)registerQueryPlanLoggingChangeHandler:(id /* block */)a0;
- (void)rewriteSyncStateForDisabledBundleIdsAsync;
- (void)setAssetDefaultBundleOverridePath:(id)a0 assetIdentifier:(id)a1;
- (void)setAssetMetadataRefreshIntervalSeconds:(double)a0;
- (void)setEntitiesMappingTrieSha256:(id)a0;
- (void)setQueryPlanLoggingEnabled:(BOOL)a0;
- (void)setTrialPathOverrideForNamespaceName:(id)a0 factorName:(id)a1 path:(id)a2;
- (void)setTrialUseDefaultFiles:(BOOL)a0;
- (void)setWrittenSharedWithYouContentAvailable:(BOOL)a0;
- (void)setWrittenSharedWithYouContentConsumed:(BOOL)a0;
- (BOOL)showLocationsFoundInApps;
- (id)trialPathOverrideForNamespaceName:(id)a0 factorName:(id)a1;
- (id)trialPathOverrides;
- (BOOL)trialUseDefaultFiles;
- (void)triggerDelayedCloudSyncRewrite;
- (double)weightMultiplier;

@end
