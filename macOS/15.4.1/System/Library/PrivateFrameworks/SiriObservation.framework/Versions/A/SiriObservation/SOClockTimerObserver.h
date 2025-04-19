@class NSHashTable, NSString, NSUUID, AFClockItemStorage, SOClockTimerManager, AFInstanceContext, NSObject, NSMutableOrderedSet, AFClockTimerSnapshot;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface SOClockTimerObserver : NSObject <AFClockItemStorageDelegate, AFInvalidating> {
    NSObject<OS_dispatch_queue> *_queue;
    AFInstanceContext *_instanceContext;
    NSHashTable *_listeners;
    SOClockTimerManager *_timerManager;
    AFClockTimerSnapshot *_timerSnapshot;
    NSObject<OS_dispatch_group> *_timerSnapshotGroup;
    long long _timerSnapshotGroupDepth;
    AFClockItemStorage *_timerStorage;
    NSMutableOrderedSet *_notifiedFiringTimerIDs;
    NSUUID *_timersChangedToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_reset;
- (void)_tearDown;
- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (void)_enumerateListenersUsingBlock:(id /* block */)a0;
- (void)getFiringTimerIDsWithCompletion:(id /* block */)a0;
- (id)initWithInstanceContext:(id)a0;
- (void)_beginGroup;
- (void)_endGroup;
- (void)_setUp;
- (void)clockItemStorageDidUpdate:(id)a0 insertedItemIDs:(id)a1 updatedItemIDs:(id)a2 deletedItemIDs:(id)a3;
- (void)timerFired:(id)a0;
- (void)getTimerSnapshotWithCompletion:(id /* block */)a0;
- (void)_consolidateNotifiedFiringTimers;
- (void)_fetchTimersForReason:(id)a0 completion:(id /* block */)a1;
- (void)_handleFetchTimersForReason:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (id)_timerSnapshot;
- (void)firingTimerChanged:(id)a0;
- (void)firingTimerDismissed:(id)a0;
- (void)stateReset:(id)a0;
- (void)timersAdded:(id)a0;
- (void)timersChanged:(id)a0;
- (void)timersRemoved:(id)a0;
- (void)timersUpdated:(id)a0;

@end
