@interface IMDMessagesSyncCoordinator : NSObject

+ (BOOL)isSyncing;
+ (void)registerNotifier:(id)a0;
+ (void)initiateSync:(id)a0 forceRunNow:(BOOL)a1 reply:(id /* block */)a2;
+ (void)clearLocalCountsWhenSafe;
+ (void)clearSyncStoreWhenSafe;
+ (id)configureWithDelegate:(id)a0;
+ (void)registerBackupController:(id)a0;
+ (void)registerErrorAnalyzer:(id)a0;
+ (void)registerPreReqsVerifier:(id)a0;
+ (void)registerStore:(id)a0 asType:(long long)a1;
+ (void)registerSyncStateManager:(id)a0;
+ (void)registerSyncTokenStore:(id)a0;
+ (id)scheduleAttachmentAssetDownloadWithDelegate:(id)a0;
+ (id)scheduleBackfillSyncWithDelegate:(id)a0;
+ (id)startInitialSyncWithDelegate:(id)a0;
+ (id)startUserInitiatedSyncWithDelegate:(id)a0;
+ (id)scheduleBackupSyncWithDelegate:(id)a0;
+ (long long)currentTelemetryVersion;
+ (void)fetchSyncStoreCountsWithCompletion:(id /* block */)a0;
+ (id)readServerCountsFromDefaults;
+ (id)schedulePeriodicSyncWithDelegate:(id)a0;
+ (id)scheduleTelemetrySyncWithDelegate:(id)a0;

@end
