@class HDDataAggregatorConfiguration, NSString, NSMapTable, HKObserverSet, HDDataCollectionManager, NSDate, HKObjectType;

@interface HDDataAggregator : NSObject <HDHealthDaemonReadyObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _configurationLock;
    NSMapTable *_lock_collectorRegistry;
    HDDataAggregatorConfiguration *_lock_configuration;
    _Atomic BOOL _hasStartedCollectors;
    BOOL _lock_canStartCollectors;
    HKObserverSet *_sensorDataObservers;
    NSDate *_unitTest_lastObliterationDate;
}

@property (readonly, weak, nonatomic) HDDataCollectionManager *dataCollectionManager;
@property (copy) HDDataAggregatorConfiguration *configuration;
@property (readonly, copy, nonatomic) HKObjectType *objectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)resume;
- (id)diagnosticDescription;
- (void)recomputeCollectorConfiguration;
- (id)allCollectors;
- (id)configurationForCollector:(id)a0;
- (void)daemonReady:(id)a0;
- (void)dataCollector:(id)a0 didChangeState:(id)a1;
- (void)dataCollector:(id)a0 didCollectSensorData:(id)a1 device:(id)a2;
- (void)dataCollector:(id)a0 didCollectSensorData:(id)a1 device:(id)a2 options:(unsigned long long)a3;
- (BOOL)didPersistObjects:(id)a0 lastDatum:(id)a1 collector:(id)a2 error:(id *)a3;
- (BOOL)doesDatumPredateDatabaseObliteration:(id)a0;
- (id)initWithDataCollectionManager:(id)a0;
- (BOOL)persistForCollector:(id)a0 usedDatums:(id)a1 source:(id)a2 device:(id)a3 error:(id *)a4 persistenceHandler:(id /* block */)a5;
- (BOOL)persistObjects:(id)a0 usedDatums:(id)a1 collector:(id)a2 source:(id)a3 device:(id)a4 resolveAssociations:(BOOL)a5 error:(id *)a6;
- (void)registerDataCollector:(id)a0 state:(id)a1;
- (void)registerSensorDataObserver:(id)a0 queue:(id)a1;
- (void)requestAggregationThroughDate:(id)a0 mode:(long long)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)unitTest_setLastObliterationDate:(id)a0;
- (void)unregisterDataCollector:(id)a0;
- (void)unregisterSensorDataObserver:(id)a0;

@end
