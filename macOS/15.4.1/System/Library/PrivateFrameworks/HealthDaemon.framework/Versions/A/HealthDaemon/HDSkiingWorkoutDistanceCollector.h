@interface HDSkiingWorkoutDistanceCollector : HDAggregateDataCollector

+ (id)domain;
+ (id)observedType;

- (id)initWithProfile:(id)a0;
- (void)beginUpdatesFromDatum:(id)a0 withHandler:(id /* block */)a1;
- (void)fetchHistoricalSensorDataSinceDatum:(id)a0 databaseIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)generateDownhillSnowSportsDistanceSampleForDistance:(double)a0 startDate:(id)a1 endDate:(id)a2;
- (id)hkObjectsFromSensorData:(id)a0 baseSensorDatum:(id)a1 startDate:(id)a2 endDate:(id)a3;
- (BOOL)requiresSampleAggregation;
- (void)stopPerformingUpdatesWithErrorEncountered:(BOOL)a0;

@end
