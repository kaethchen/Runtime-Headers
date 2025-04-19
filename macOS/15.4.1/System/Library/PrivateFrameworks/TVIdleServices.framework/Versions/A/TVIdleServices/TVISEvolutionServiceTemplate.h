@class NSDate, NSHashTable, TVISOperationQueue, NSString, TVISEvolutionServicePurgeableAmounts, TVISEvolutionServiceUpdate, NSMutableArray, NSObject, TVISEvolutionServicePurgeableManifest;
@protocol OS_dispatch_group, OS_os_log, TVISEvolutionServiceDelegate, OS_os_transaction;

@interface TVISEvolutionServiceTemplate : NSObject <TVISOperationQueueOwner, TVISStoreDelegate, TVISEvolutionService>

@property (readonly, nonatomic) NSObject<OS_dispatch_group> *workGroup;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (readonly, nonatomic) NSMutableArray *updates;
@property (retain, nonatomic) TVISEvolutionServicePurgeableManifest *purgeableManifest;
@property (readonly, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) TVISEvolutionServiceUpdate *currentUpdate;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (readonly) TVISEvolutionServicePurgeableAmounts *purgeableInfo;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) TVISOperationQueue *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id settings;
@property (weak, nonatomic) id<TVISEvolutionServiceDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)_resetStore;
- (void)onStart;
- (void)onNetworkQueue:(id /* block */)a0;
- (void)_applyObservers:(id /* block */)a0;
- (void)_didEndTransactionWithTraits:(unsigned long long)a0;
- (void)_executeNextUpdate;
- (BOOL)_isValidLocalCacheVolume:(id)a0;
- (void)_resolveTraitsForUpdate:(id)a0;
- (BOOL)_shouldScheduleUpdateForContext:(unsigned long long)a0;
- (void)_updatePurgeableManifest;
- (void)_updatePurgeableManifestAndNotifyForUpdate:(id)a0;
- (void)addServiceSnapshotObserver:(id)a0;
- (void)didAccessWorkQueue;
- (void)didEndUpdate:(id)a0;
- (void)didEndWorkOnOperationQueue:(id)a0;
- (void)didFinishWorkOnOperationQueue:(id)a0;
- (void)didPurgeAssetsWithUrgency:(long long)a0;
- (void)group:(id)a0 notifyOnWorkQueue:(id /* block */)a1;
- (void)onReleaseCachedResources;
- (void)onWorkQueue:(id /* block */)a0;
- (void)onWorkQueueBarrier:(id /* block */)a0;
- (void)onWorkQueueBarrierSync:(id /* block */)a0;
- (void)operationQueue:(id)a0 addBarrierTask:(id /* block */)a1;
- (long long)purgeAssetsForUrgency:(long long)a0 volume:(id)a1 requestedAmount:(long long *)a2;
- (id)purgeableAmountsForVolume:(id)a0;
- (void)queryCurrentSnapshotWithCompletion:(id /* block */)a0;
- (void)removeServiceSnapshotObserver:(id)a0;
- (void)scheduleUpdateIfNeededForContext:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)storeNeedsReset:(id)a0;
- (void)willAccessWorkQueue;
- (void)willBeginUpdate:(id)a0;
- (void)willBeginWorkOnOperationQueue:(id)a0;
- (void)willPurgeAssetsWithUrgency:(long long)a0;
- (void)willScheduleWorkOnOperationQueue:(id)a0;

@end
