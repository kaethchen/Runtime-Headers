@class NSMutableDictionary, NSDate, NSObject, BRCAccountSession, BRCUserDefaults, CKContainerID, NSString, NSHashTable, BRCTransferStream, NSMutableSet, NSOperationQueue, BRCThrottleBase, CKContainer;
@protocol OS_dispatch_source, BRCSessionContext, OS_dispatch_queue;

@interface BRCSyncContext : NSObject {
    CKContainer *_ckContainer;
    BOOL _isCancelled;
    int _notifyTokenForFramework;
    NSMutableSet *_foregroundClients;
    NSString *_lastForegroundClientDescription;
    NSDate *_dateWhenLastForegroundClientLeft;
    NSObject<OS_dispatch_source> *_timerForGraceForegroundPeriod;
    NSObject<OS_dispatch_source> *_timerForForcedForegroundPeriod;
    NSObject<OS_dispatch_queue> *_foregroundStateQueue;
    unsigned long long _foregroundState;
    NSHashTable *_nonDiscretionaryModifyOperations;
    NSHashTable *_discretionaryModifyOperations;
    NSOperationQueue *_nonDiscretionaryRecursiveListOperationQueue;
    NSOperationQueue *_discretionaryRecursiveListOperationQueue;
}

@property (readonly, nonatomic) long long numberOfSubmittedBGSystemTasks;
@property (readonly, nonatomic) NSMutableDictionary *submittedBGSystemTaskIdentifiers;
@property (readonly, nonatomic) BRCAccountSession *session;
@property (readonly, nonatomic) NSString *contextIdentifier;
@property (readonly, nonatomic) BRCUserDefaults *defaults;
@property (readonly, nonatomic) BOOL isShared;
@property (readonly, nonatomic) CKContainer *ckContainer;
@property (readonly, nonatomic) CKContainerID *ckContainerID;
@property (readonly, nonatomic) BRCTransferStream *uploadStream;
@property (readonly, nonatomic) BRCTransferStream *downloadStream;
@property (readonly, nonatomic) id<BRCSessionContext> sessionContext;
@property (readonly, nonatomic) BRCThrottleBase *readerThrottle;
@property (readonly, nonatomic) BRCThrottleBase *applyThrottle;
@property (readonly, nonatomic) BRCThrottleBase *uploadThrottle;
@property (readonly, nonatomic) BRCThrottleBase *uploadFileModifiedThrottle;
@property (readonly, nonatomic) BRCThrottleBase *perItemSyncUpThrottle;
@property (readonly, nonatomic) BRCThrottleBase *downloadThrottle;

+ (id)_contextIdentifierForMangledID:(id)a0 metadata:(BOOL)a1;
+ (id)_createCKContainerForAccountID:(id)a0 contextIdentifier:(id)a1;
+ (id)transferContextForServerZone:(id)a0 appLibrary:(id)a1;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)addOperation:(id)a0;
- (void)close;
- (void)resume;
- (BOOL)allowsCellularAccess;
- (void)cancel;
- (void)cancelOperation:(id)a0;
- (void)setupIfNeeded;
- (BOOL)isForeground;
- (id)_database;
- (void)_addCKOperationToCKDatabaseQueue:(id)a0 allowsCellularAccess:(id)a1 ckDatabase:(id)a2;
- (void)_addOperation:(id)a0 toDatabase:(id)a1;
- (void)_armForegroundGraceTimerForClientDescription:(id)a0;
- (id)_buildBGSystemTaskIdentifierForCKOperation:(id)a0;
- (void)_cancelBGSystemTasks;
- (BOOL)_cancelBgSystemTaskIfNeededForCKOperation:(id)a0;
- (void)_cancelOperation:(id)a0 underlyingError:(id)a1;
- (id)_get_foregroundStateQueue;
- (void)_notifyContainerBeingNowForeground;
- (void)_notifyFrameworkContainersMonitorWithState:(BOOL)a0;
- (void)_preventConcurrentModifyRecordsOperations:(id)a0 nonDiscretionary:(BOOL)a1;
- (void)_setupCKOperationConfiguration:(id)a0 allowsCellularAccess:(id)a1 nonDiscretionary:(id)a2;
- (void)_updateSubmittedBGSystemTasksWithState:(BOOL)a0;
- (void)_updateSubmittedBGSystemTasksWithState:(BOOL)a0 submittedBGSystemTaskIdentifiers:(id)a1;
- (void)_updateWifiOnlyBGSystemTaskWithCancelledTaskIdentifiers:(id)a0 inexpensiveNetworkConnectivity:(BOOL)a1;
- (void)addForegroundClient:(id)a0;
- (void)addOperation:(id)a0 allowsCellularAccess:(id)a1;
- (void)addOperation:(id)a0 allowsCellularAccess:(id)a1 nonDiscretionary:(id)a2;
- (void)addOperation:(id)a0 nonDiscretionary:(BOOL)a1;
- (void)cancelWiFiOnlyOperationsIfNeeded;
- (void)didReceiveHandoffRequest;
- (void)dumpToContext:(id)a0;
- (void)forceContainerForegroundForDuration:(double)a0;
- (id)foregroundClients;
- (id)initWithSession:(id)a0 contextIdentifier:(id)a1 isShared:(BOOL)a2;
- (void)removeForegroundClient:(id)a0;

@end
