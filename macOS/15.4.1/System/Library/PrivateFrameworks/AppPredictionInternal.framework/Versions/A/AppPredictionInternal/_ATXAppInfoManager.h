@class _ATXDataStore, NSMutableArray;

@interface _ATXAppInfoManager : NSObject <ATXBundleIdRemovableProtocol> {
    _ATXDataStore *_dataStore;
    NSMutableArray *_installDeltaLog;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

+ (id)sharedInstance;
+ (id)sortArrayAndComputeMedian:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)lastUnlockDate;
- (id)initWithDataStore:(id)a0;
- (void)train;
- (id)allApps;
- (void)updateApp2VecClustersForAllApps;
- (id)_appInfoNoLockForBundleId:(id)a0;
- (void)addAverageSecondsBetweenAppActionsForActionKey:(id)a0 average:(id)a1;
- (void)addAverageSecondsBetweenLaunchesForBundleId:(id)a0 average:(id)a1;
- (void)addExtensionLaunchForBundleId:(id)a0 date:(id)a1;
- (void)addInstallForBundleId:(id)a0 date:(id)a1;
- (void)addInstallForBundleInfoMap:(id)a0;
- (void)addLaunchForAppAction:(id)a0 date:(id)a1;
- (void)addLaunchForBundleId:(id)a0 date:(id)a1;
- (void)addMedianSecondsBetweenAppActionsForActionKey:(id)a0 median:(id)a1;
- (void)addMedianSecondsBetweenLaunchesForBundleId:(id)a0 median:(id)a1;
- (void)addScreenLockAtDate:(id)a0;
- (void)addSpotlightLaunchForBundleId:(id)a0 date:(id)a1;
- (id)allActionKeys;
- (id)allAppsLaunchedOrInstalledWithin30Days;
- (id)allAppsWithInstallDate;
- (id)app2VecClusterForBundleId:(id)a0;
- (id)appInfoForBundleId:(id)a0;
- (void)appLaunchesCalculations:(id)a0;
- (id)averageSecondsBetweenAppActionsForActionKey:(id)a0;
- (id)averageSecondsBetweenLaunchesForBundleId:(id)a0;
- (void)clearAppInstallInfo;
- (void)clearAppLaunchInfo;
- (void)computeAverageAndMedianSecondsBetweenAppActions;
- (void)computeAverageAndMedianSecondsBetweenAppActions:(id)a0;
- (void)computeAverageAndMedianSecondsBetweenAppLaunches;
- (void)computeAverageAndMedianSecondsBetweenAppLaunches:(id)a0;
- (id)genreIdForBundleId:(id)a0;
- (id)genreIdsForBundleId:(id)a0;
- (void)handleAppInstallWithInstallDict:(id)a0;
- (void)handleAppUninstallWithUninstalledAppSet:(id)a0;
- (id)initWithInMemoryStore;
- (id)lastAppActionLaunch;
- (id)lastAppActionLaunchDate;
- (id)lastAppActionLaunchDateForActionKey:(id)a0;
- (id)lastAppLaunch;
- (id)lastAppLaunchDate;
- (id)lastLaunchDateForBundleId:(id)a0;
- (long long)launchedAppCount;
- (id)medianSecondsBetweenAppActionsForActionKey:(id)a0;
- (id)medianSecondsBetweenLaunchesForBundleId:(id)a0;
- (void)removeActionDataForBundleId:(id)a0;
- (void)removeAppInfoForBundleId:(id)a0;
- (void)removeAppInfoForBundleIds:(id)a0;
- (void)removeAppLaunchesForBundleId:(id)a0;
- (void)removeBundleIds:(id)a0;
- (void)removeUninstalledApps;
- (id)secondMostRecentAppLaunch;
- (void)startInstallDeltaRecording;
- (id)stopInstallDeltaRecording;
- (id)subGenreIdsForBundleId:(id)a0;
- (id)totalSlotsInDatastore;
- (void)updateApp2VecClusterForBundleId:(id)a0 app2VecCluster:(id)a1;
- (void)updateGenreIdsForAllApps;
- (void)updateGenreIdsForBundleId:(id)a0 genreId:(id)a1 subGenreIds:(id)a2;

@end
