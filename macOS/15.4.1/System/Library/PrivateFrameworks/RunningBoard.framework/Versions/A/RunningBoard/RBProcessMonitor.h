@class NSCountedSet, NSString, RBProcessIndex, RBProcessMap, NSMutableSet, NSObject, NSSet;
@protocol RBStateCaptureManaging, RBXNUWrapper, OS_dispatch_queue, RBHistoricalStatisticsMaintaining;

@interface RBProcessMonitor : NSObject <RBProcessMonitoring, RBStateCapturing> {
    RBProcessIndex *_processIndex;
    RBProcessMap *_stateMap;
    RBProcessMap *_suppressedState;
    RBProcessMap *_publishedState;
    NSCountedSet *_suppressedIdentities;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
    NSMutableSet *_observers;
    id<RBStateCaptureManaging> _stateCaptureManager;
    NSSet *_preventLaunchPredicates;
    id<RBHistoricalStatisticsMaintaining> _historicalStatistics;
    NSMutableSet *_runningVisibleApps;
    id<RBXNUWrapper> _xnuWrapper;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *monitorSerializationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)captureState;
- (void)didAddProcess:(id)a0 withState:(id)a1;
- (void)didRemoveProcess:(id)a0 withState:(id)a1;
- (void)didResolvePreventLaunchPredicates:(id)a0;
- (void)didUpdateProcessStates:(id)a0;
- (id)initWithStateCaptureManager:(id)a0 historialStatistics:(id)a1 xnuWrapper:(id)a2;
- (id)preventLaunchPredicates;
- (void)removeStateForProcessIdentity:(id)a0;
- (id)statesMatchingConfiguration:(id)a0;
- (id)statesMatchingPredicate:(id)a0;
- (void)suppressUpdatesForIdentity:(id)a0;
- (void)trackStateForProcessIdentity:(id)a0;
- (void)unsuppressUpdatesForIdentity:(id)a0;

@end
