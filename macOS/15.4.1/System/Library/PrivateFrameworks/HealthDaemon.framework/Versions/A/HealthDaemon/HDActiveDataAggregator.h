@class NSLock, NSMutableDictionary, _HKDelayedOperation;

@interface HDActiveDataAggregator : HDDataAggregator {
    NSLock *_aggregationLock;
    NSMutableDictionary *_currentAggregationStates;
    _HKDelayedOperation *_delayedAggregationOperation;
}

- (void).cxx_destruct;
- (double)aggregationInterval;
- (void)recomputeCollectorConfiguration;
- (id)aggregateForState:(id)a0 collector:(id)a1 device:(id)a2 requestedAggregationDate:(id)a3 mode:(long long)a4 options:(unsigned long long)a5 error:(id *)a6;
- (double)aggregationIntervalForCollector:(id)a0;
- (id)configurationForCollector:(id)a0;
- (void)dataCollector:(id)a0 didCollectSensorData:(id)a1 device:(id)a2 options:(unsigned long long)a3;
- (BOOL)didPersistObjects:(id)a0 lastDatum:(id)a1 collector:(id)a2 error:(id *)a3;
- (id)initWithDataCollectionManager:(id)a0;
- (id)initialAggregationState;
- (void)registerDataCollector:(id)a0 state:(id)a1;
- (void)requestAggregationThroughDate:(id)a0 mode:(long long)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (Class)sensorDatumClass;
- (void)unregisterDataCollector:(id)a0;

@end
