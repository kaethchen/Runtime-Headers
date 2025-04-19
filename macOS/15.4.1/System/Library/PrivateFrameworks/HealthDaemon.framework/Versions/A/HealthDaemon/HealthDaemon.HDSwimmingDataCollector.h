@interface HealthDaemon.HDSwimmingDataCollector : NSObject <HDDataCollector, HealthDaemon.HDSwimmingObserver> {
    void /* unknown type, empty encoding */ profile;
    void /* unknown type, empty encoding */ aggregators;
    void /* unknown type, empty encoding */ quantityTypes;
}

- (id)init;
- (void).cxx_destruct;
- (void)beginCollectionForDataAggregator:(id)a0 lastPersistedSensorDatum:(id)a1;
- (void)dataAggregator:(id)a0 wantsCollectionWithConfiguration:(id)a1;
- (void)historicalSwimmingDataDidUpdate:(id)a0 reference:(id)a1;
- (id)identifierForDataAggregator:(id)a0;
- (void)onDemandSwimmingDataDidUpdate:(id)a0 reference:(id)a1;
- (Class)sensorDatumClassForAggregator:(id)a0;
- (id)sourceForDataAggregator:(id)a0;

@end
