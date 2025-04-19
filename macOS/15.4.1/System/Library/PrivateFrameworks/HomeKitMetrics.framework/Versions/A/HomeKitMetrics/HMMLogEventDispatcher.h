@class NSString, NSMapTable, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, HMMLogEventDispatchingDataSource;

@interface HMMLogEventDispatcher : NSObject <HMMLogEventDispatching> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _isProcessingPending;
    NSMutableArray *_pendingLogEvents;
    NSMapTable *_observersByClass;
    NSMapTable *_observersByProtocol;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (weak) id<HMMLogEventDispatchingDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)submitLogEvent:(id)a0;
- (void)addObserver:(id)a0 forEventClass:(Class)a1;
- (void)addObserver:(id)a0 forEventClasses:(id)a1;
- (void)addObserver:(id)a0 forProtocol:(id)a1;
- (void)handleMemoryPressureState:(long long)a0;
- (void)submitLogEvent:(id)a0 error:(id)a1;
- (void)_checkPendingLogEventBuffer;
- (id)_getOrCreateObserversForEventClass:(Class)a0;
- (void)processAndSubmitLogEvents;

@end
