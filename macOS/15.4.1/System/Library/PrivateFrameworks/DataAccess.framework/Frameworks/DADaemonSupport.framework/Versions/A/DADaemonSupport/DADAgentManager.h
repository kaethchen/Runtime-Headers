@class NSArray, NSMutableDictionary, NSDictionary, DADAgentStopStartController, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface DADAgentManager : NSObject <DADAgentStopStartControllerDelegate> {
    NSArray *_activeAgents;
    NSObject<OS_dispatch_queue> *_activeAgentsQueue;
    NSMutableDictionary *_watchedIDs;
    unsigned int _pmNotifier;
    struct IONotificationPort { } *_pmPort;
    struct __CFRunLoopSource { } *_pmRunLoopSource;
    DADAgentStopStartController *_startStopController;
    id /* block */ _startAgentsWhenSystemReadyBlock;
    NSObject<OS_dispatch_queue> *_CTCellularUsagePolicyNotificationQ;
    struct __CTServerConnection { } *_ctServerConnection;
    NSDictionary *_wirelessPolicies;
    int _pendingAccountSetupCount;
    BOOL _registeredForBuddy;
}

@property (retain, nonatomic) NSMutableArray *subCalHandlers;
@property (nonatomic) unsigned long long nextDisableMonitoringAgentsToken;
@property (readonly, nonatomic) NSMutableDictionary *disableMonitoringAgentsTokens;
@property (readonly, nonatomic) NSArray *activeAgents;

+ (id)sharedManager;
+ (BOOL)wirelessPolicy:(id)a0 isMorePermissiveThanPolicy:(id)a1;
+ (BOOL)_shouldAccount:(id)a0 syncWhenSyncingParentAccountWithID:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)stateString;
- (BOOL)_systemMayNowBeReady;
- (id)accountWithAccountID:(id)a0;
- (BOOL)hasActiveAccounts;
- (id)_configFileForAgent:(id)a0;
- (void)_deviceDidWake;
- (void)_deviceWillSleep;
- (void)_handleCellularDataUsageChangedNotification;
- (BOOL)_hasDataclassWeCareAbout:(id)a0;
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
- (void)processMeetingRequestDatas:(id)a0 deliveryIdsToClear:(id)a1 deliveryIdsToSoftClear:(id)a2 inFolderWithId:(id)a3 forAccountWithId:(id)a4 callback:(id /* block */)a5;
- (void)registerForBuddy;
- (void)removePendingAccountSetup;
- (void)requestPolicyUpdateForAccount:(id)a0;
- (BOOL)stopMonitoringAccountID:(id)a0 folderIDs:(id)a1;
- (BOOL)suspendMonitoringAccountID:(id)a0 folderIDs:(id)a1;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)a0 andDataclasses:(long long)a1 isUserRequested:(BOOL)a2;
- (BOOL)updateContentsOfFolders:(id)a0 forAccountID:(id)a1 andDataclasses:(long long)a2 isUserRequested:(BOOL)a3;
- (BOOL)updateFolderListForAccountID:(id)a0 andDataclasses:(long long)a1 requireChangedFolders:(BOOL)a2 isUserRequested:(BOOL)a3;
- (int)enqueueDisableMonitoringAgents:(id /* block */)a0;
- (void)_calDaysToSyncDidChange;
- (void)_cleanOrphanedTrafficLogFilesWithCurrentEventAccountIdentifiers:(id)a0;
- (void)_cleanUpOrphanedLogIfNeeded:(id)a0;
- (void)_clearOrphanedPublishedCalendarAccounts:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; unsigned long long x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; } *)a0 eventAccountIDs:(id)a1;
- (void)_clearOrphanedStoresAndTrafficLogFiles;
- (BOOL)_clearOrphanedStoresInCalendarDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; unsigned long long x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; } *)a0 eventAccountIds:(id)a1;
- (BOOL)_clearOrphanedSubscribedCalendars:(void *)a0 eventAccountIds:(id)a1;
- (void)_loadAndStartMonitoringAgents;
- (void)_sendAccountAnalytics;
- (id)agentsToSyncForAccountID:(id)a0;
- (id)appleAccountsMatchingClass:(id)a0 errror:(id *)a1;
- (void)enqueueEnableMonitoringAgents:(int)a0 completion:(id /* block */)a1;
- (void)loadAgents;
- (void)releaseAgents;
- (BOOL)resumeMonitoringAccountID:(id)a0 folderIDs:(id)a1;
- (void)scheduleAgentStartOrStopBlock:(id /* block */)a0;
- (BOOL)startMonitoringAccountID:(id)a0 folderIDs:(id)a1;

@end
