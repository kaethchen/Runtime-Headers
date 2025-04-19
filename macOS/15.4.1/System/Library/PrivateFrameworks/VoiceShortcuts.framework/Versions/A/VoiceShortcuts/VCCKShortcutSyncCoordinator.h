@class VCCKShortcutSyncService, NSString, CKRecordID, CKContainer, VCCKCoherenceSyncCoordinator, VCCKApplicationStateObserver, NSObject, WFCloudKitSyncEventLogger;
@protocol WFDatabaseProvider, OS_dispatch_queue, OS_nw_path_monitor;

@interface VCCKShortcutSyncCoordinator : NSObject

@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) CKContainer *container;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateAccessQueue;
@property (readonly, nonatomic) NSObject<OS_nw_path_monitor> *pathMonitor;
@property (readonly, nonatomic) struct __CTServerConnection { } *telephonyConnection;
@property (readonly, nonatomic) VCCKApplicationStateObserver *applicationObserver;
@property (nonatomic, getter=isStarted) BOOL started;
@property (nonatomic) long long accountStatus;
@property (retain, nonatomic) CKRecordID *userRecordID;
@property (retain, nonatomic) VCCKShortcutSyncService *currentSyncService;
@property (readonly, nonatomic) NSString *accountForSyncToken;
@property (nonatomic, getter=isSyncEnabled) BOOL syncEnabled;
@property (retain, nonatomic) VCCKCoherenceSyncCoordinator *coherenceSyncCoordinator;
@property (readonly, nonatomic) WFCloudKitSyncEventLogger *logger;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)handleAccountChangedNotification:(id)a0;
- (void)stopObservingReachability;
- (void)setupPathMonitor;
- (void)handleCloudKitSyncEnabledChange;
- (void)deleteLegacyShortcutsZoneSubscriptionIfNeeded;
- (void)handleCloudKitSyncZoneWasPurgedChange;
- (void)handleWalrusStatusDidChange;
- (id)initWithDatabaseProvider:(id)a0;
- (void)startObservingAccountChanges;
- (void)startObservingApplicationVisibility;
- (void)startObservingDataUsagePermission;
- (void)startObservingReachability;
- (void)startObservingUserDefaults;
- (void)stopObservingAccountChanges;
- (void)stopObservingApplicationVisibility;
- (void)stopObservingDataUsagePermission;
- (void)stopObservingUserDefaults;
- (void)updateAccountStatusAndUserRecordID;
- (void)updateCurrentSyncService;

@end
