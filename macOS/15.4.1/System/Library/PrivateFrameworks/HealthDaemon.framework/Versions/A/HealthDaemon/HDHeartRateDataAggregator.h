@protocol HDDataCollectionForwarder;

@interface HDHeartRateDataAggregator : HDDataAggregator {
    id<HDDataCollectionForwarder> _dataForwarder;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)setConfiguration:(id)a0;
- (id)objectType;
- (id)configurationForCollector:(id)a0;
- (void)dataCollector:(id)a0 didCollectSensorData:(id)a1 device:(id)a2 options:(unsigned long long)a3;
- (id)initWithDataCollectionManager:(id)a0;
- (void)workoutManagerStateChanged:(id)a0;

@end
