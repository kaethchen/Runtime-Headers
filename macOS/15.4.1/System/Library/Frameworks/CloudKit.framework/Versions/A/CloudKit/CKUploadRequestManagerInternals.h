@class NSString, CKAssetRepairScheduler, CKUploadRequestPersistentStore, CKUploadRequestManagerStateMachine, CKContainer, CKSyncEngine, CKSchedulerActivity, CKUploadRequestManagerResponseActionThrottler, NSObject, CKUploadRequestConfiguration, NSMutableDictionary;
@protocol OS_dispatch_queue, NSObject;

@interface CKUploadRequestManagerInternals : NSObject <CKSyncEngineDataSource, CKAssetRepairSchedulerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double recurringFetchPeriod;
@property (nonatomic) double tryAgainLaterRetryTime;
@property (nonatomic) double retryableErrorRetryTime;
@property (nonatomic) double cancelledErrorRetryTime;
@property (nonatomic) double retryableErrorMaxRetryCount;
@property (nonatomic) double notificationDebouncePeriod;
@property (nonatomic) long long assetRepairSchedulerRepairBatchCountLimit;
@property (nonatomic) double assetRepairSchedulerDefaultSuspensionTime;
@property (nonatomic) long long assetRepairSchedulerRepairRetryCount;
@property (readonly, nonatomic) CKContainer *container;
@property (readonly, nonatomic) CKContainer *repairContainer;
@property (readonly, nonatomic) CKUploadRequestConfiguration *repairContainerOverrides;
@property (retain, nonatomic) CKUploadRequestManagerStateMachine *stateMachine;
@property (retain, nonatomic) CKSyncEngine *repairZoneSyncEngine;
@property (retain, nonatomic) NSString *assignedMachServiceName;
@property (nonatomic) BOOL hasRegisteredActivity;
@property (retain, nonatomic) CKAssetRepairScheduler *repairProcessor;
@property (retain, nonatomic) CKUploadRequestPersistentStore *database;
@property (retain, nonatomic) NSString *deviceID;
@property (retain, nonatomic) NSString *cachesDirectory;
@property (nonatomic) struct __SCNetworkReachability { } *reachability;
@property (retain, nonatomic) id<NSObject> accountChangeObserver;
@property (copy, nonatomic) id /* block */ scheduledAccountStatusCheck;
@property (nonatomic) int fetchAllToken;
@property (copy, nonatomic) id /* block */ repairActivityHandler;
@property (retain, nonatomic) CKSchedulerActivity *observedRepairActivity;
@property (readonly, nonatomic) CKUploadRequestManagerResponseActionThrottler *responseActionThrottler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateMachineQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSMutableDictionary *callbackForOverridePoint;
@property (readonly, nonatomic) BOOL ignoringSystemConditions;
@property (copy) id /* block */ assetRequestCallback;
@property (copy) id /* block */ packageRequestCallback;
@property (copy) NSString *machServiceName;
@property (readonly, nonatomic) NSString *activityIdentifierForSchedulingRepairs;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)closeSyncEngine;
- (void)registerForAccountNotifications;
- (void)syncEngine:(id)a0 zoneWithIDWasPurged:(id)a1;
- (void)assetRepairScheduler:(id)a0 completedRepairWithMetadata:(id)a1 error:(id)a2;
- (void)assetRepairScheduler:(id)a0 completedRequestWithMetadata:(id)a1 result:(long long)a2;
- (void)assetRepairScheduler:(id)a0 preparingRepairWithIncludedMetadataCount:(unsigned long long)a1;
- (void)assetRepairSchedulerAllRequestsComplete:(id)a0;
- (BOOL)canPerformFunction:(long long)a0;
- (void)cancelScheduledEvent;
- (void)checkAccountID;
- (void)checkAccountStatus;
- (void)checkNetworkReachability;
- (void)commonInitWithContainer:(id)a0 repairContainerOverrides:(id)a1;
- (id)createDatabase;
- (id)createStateMachine;
- (void)dispatchAsyncOnStateQueue:(id /* block */)a0;
- (void)dispatchEvent:(long long)a0;
- (void)dispatchEvent:(long long)a0 synchronously:(BOOL)a1;
- (void)fetchRepairContainerMetadata;
- (void)fetchServerChanges:(id /* block */)a0;
- (void)finishSchedulerCallbackWithDeferral:(BOOL)a0;
- (id)initWithContainer:(id)a0 repairContainerOverrides:(id)a1;
- (id)initWithContainer:(id)a0 repairContainerOverrides:(id)a1 ignoringSystemConditions:(BOOL)a2;
- (void)invokeCallbackForOverridePoint:(long long)a0 withError:(id)a1 onCallbackQueue:(BOOL)a2;
- (BOOL)isRepairRecordActionable:(id)a0;
- (void)manuallyTriggerUploadRequests;
- (id)nextRepairDateForDate:(id)a0;
- (void)openSyncEngine;
- (void)performRepairs;
- (void)registerForFetchAllNotifications;
- (void)registerForNetworkReachability;
- (void)registerForRepairScheduler;
- (id)repairZoneID;
- (id)repairableAssetsForDate:(id)a0;
- (void)respondToStateMachineAction:(long long)a0 isRetry:(BOOL)a1;
- (void)respondToStateMachineChangeState:(long long)a0 enter:(BOOL)a1;
- (void)scheduleNextSync;
- (void)scheduleOrInvokeRepairsNow;
- (void)scheduleRecordRepair:(id)a0 withDelay:(double)a1 increasingCount:(BOOL)a2;
- (void)scheduleRecurringFetch;
- (void)scheduleRepairsWithDelay:(double)a0;
- (void)setCallback:(id /* block */)a0 forOverridePoint:(long long)a1;
- (void)syncEngine:(id)a0 didDeleteRecordWithID:(id)a1;
- (void)syncEngine:(id)a0 didFetchRecord:(id)a1;
- (void)syncEngine:(id)a0 didSaveRecord:(id)a1;
- (void)syncEngine:(id)a0 didUpdateMetadata:(id)a1;
- (void)syncEngine:(id)a0 failedToDeleteRecordWithID:(id)a1 error:(id)a2;
- (void)syncEngine:(id)a0 failedToSaveRecord:(id)a1 error:(id)a2;
- (id)syncEngine:(id)a0 recordToSaveForRecordID:(id)a1;
- (void)syncEngine:(id)a0 recordWithIDWasDeleted:(id)a1 recordType:(id)a2;
- (void)syncEngine:(id)a0 zoneWithIDChanged:(id)a1;
- (void)syncEngine:(id)a0 zoneWithIDWasDeleted:(id)a1;
- (void)unregisterFromAccountNotifications;
- (void)unregisterFromFetchAllNotifications;
- (void)unregisterFromNetworkReachability;

@end
