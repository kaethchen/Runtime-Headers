@class DADBuddyStateObserver, NSMutableDictionary, NSArray, NSDictionary, DADREMLocalDBWatcher, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, DADREMStoreProvider, DADREMUserNotificationPresentingProvider;

@interface DADAgentManager : NSObject {
    NSArray *_activeAgents;
    NSObject<OS_dispatch_queue> *_activeAgentsQueue;
    NSMutableDictionary *_watchedIDs;
    unsigned int _pmNotifier;
    struct IONotificationPort { } *_pmPort;
    struct __CFRunLoopSource { } *_pmRunLoopSource;
    id /* block */ _startAgentsWhenSystemReadyBlock;
    NSObject<OS_dispatch_queue> *_CTCellularUsagePolicyNotificationQ;
    struct __CTServerConnection { } *_ctServerConnection;
    NSDictionary *_wirelessPolicies;
    int _pendingAccountSetupCount;
    DADBuddyStateObserver *_buddyStateObserver;
}

@property (retain, nonatomic) DADREMLocalDBWatcher *rem_localDBWatcher;
@property (copy, nonatomic) id /* block */ rem_xpcEventHandler;
@property (retain, nonatomic) id<DADREMUserNotificationPresentingProvider> rem_userNotificationPresentingProvider;
@property (retain, nonatomic) id<DADREMStoreProvider> rem_storeProvider;
@property (retain, nonatomic) NSMutableArray *subCalHandlers;
@property (nonatomic) unsigned long long nextDisableMonitoringAgentsToken;
@property (readonly, nonatomic) NSMutableDictionary *disableMonitoringAgentsTokens;
@property (readonly, nonatomic) NSArray *activeAgents;

+ (id)sharedManager;
+ (BOOL)wirelessPolicy:(id)a0 isMorePermissiveThanPolicy:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)stateString;
- (BOOL)_systemMayNowBeReady;
- (id)accountWithAccountID:(id)a0;
- (BOOL)hasActiveAccounts;
- (id)_accountInfoPath;
- (void)_addAccountAggdEntries;
- (void)_clearOrphanedStores;
- (id)_configFileForAgent:(id)a0;
- (void)_deviceDidWake;
- (void)_deviceWillSleep;
- (void)_handleCellularDataUsageChangedNotification;
- (BOOL)_hasDataclassWeCareAbout:(id)a0;
- (void)_loadAndStartMonitoringAgents:(BOOL)a0;
- (void)_registerForCTDataUsageNotificaiton;
- (void)_resetMonitoringRequestsAndLoadAgents;
- (void)_stopMonitoringAndSaveAgents;
- (id)accountWithAccountID:(id)a0 andClassName:(id)a1;
- (id)activeAccountBundleIDs;
- (void)addPendingAccountSetup;
- (id)agentWithAccountID:(id)a0;
- (id)currentPolicyKeyForAccount:(id)a0;
- (unsigned long long)disableMonitoringAgents;
- (void)enableMonitoringAgentsWithToken:(unsigned long long)a0;
- (void)getStatusReportDictsWithCompletionBlock:(id /* block */)a0;
- (BOOL)hasEASAccountConfigured;
- (BOOL)hasPendingAccountSetup;
- (void)loadAgents:(BOOL)a0;
- (void)processMeetingRequestDatas:(id)a0 deliveryIdsToClear:(id)a1 deliveryIdsToSoftClear:(id)a2 inFolderWithId:(id)a3 forAccountWithId:(id)a4 callback:(id /* block */)a5;
- (void)registerForBuddy;
- (void)removePendingAccountSetup;
- (void)requestPolicyUpdateForAccount:(id)a0;
- (BOOL)resumeMonitoringAccountID:(id)a0 syncKeyMap:(id)a1;
- (void)saveAndReleaseAgents;
- (BOOL)startMonitoringAccountID:(id)a0 syncKeyMap:(id)a1;
- (BOOL)stopMonitoringAccountID:(id)a0 folderIDs:(id)a1;
- (BOOL)suspendMonitoringAccountID:(id)a0 folderIDs:(id)a1;
- (void)unregisterForBuddy;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)a0 andDataclasses:(long long)a1 isUserRequested:(BOOL)a2;
- (BOOL)updateContentsOfAllFoldersForAccountIDs:(id)a0;
- (BOOL)updateContentsOfFolders:(id)a0 forAccountID:(id)a1 andDataclasses:(long long)a2 isUserRequested:(BOOL)a3;
- (BOOL)updateFolderListForAccountID:(id)a0 andDataclasses:(long long)a1 requireChangedFolders:(BOOL)a2 isUserRequested:(BOOL)a3;

@end
