@class RTXPCActivityManager, RTWorkoutDistanceStore, RTPlatform, RTWorkoutMetricsManager, RTDefaultsManager, RTDistanceCalculator, RTLocationManager, RTMapServiceManager, RTHealthKitManager;

@interface RTWorkoutRouteManager : RTService

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) RTHealthKitManager *healthKitManager;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) RTXPCActivityManager *xpcActivityManager;
@property (retain, nonatomic) RTWorkoutDistanceStore *workoutDistanceStore;
@property (retain, nonatomic) RTWorkoutMetricsManager *workoutMetricsManager;

- (id)init;
- (void).cxx_destruct;
- (void)pruneDistanceMatrixWithHandler:(id /* block */)a0;
- (void)deleteWorkout:(id)a0 handler:(id /* block */)a1;
- (void)displayWorkoutDistanceRecordsWithHandler:(id /* block */)a0;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 healthKitManager:(id)a2 locationManager:(id)a3 mapServiceManager:(id)a4 platform:(id)a5 workoutDistanceStore:(id)a6 workoutMetricsManager:(id)a7;
- (void)processNewlyAddedWorkout:(id)a0 handler:(id /* block */)a1;
- (void)processWorkoutsClearClusters:(BOOL)a0 clearExistingDistanceMatrix:(BOOL)a1 buildDistanceMatrix:(BOOL)a2 syncClustersToHealhtKit:(BOOL)a3 syncClustersToWatch:(BOOL)a4 filteringDistanceThreshold:(double)a5 topNWorkouts:(unsigned long long)a6 isSchedulerTriggered:(BOOL)a7 handler:(id /* block */)a8;
- (void)updateRelevanceScoresWithHandler:(id /* block */)a0;

@end
