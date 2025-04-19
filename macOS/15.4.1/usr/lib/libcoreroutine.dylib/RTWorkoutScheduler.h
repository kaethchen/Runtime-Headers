@class RTXPCActivityManager, RTTimerManager, RTWorkoutRouteManager, NSDate, RTPlatform, RTTimer, RTWorkoutSchedulerMetrics, RTLocationManager, RTDefaultsManager, RTBatteryManager, RTDataProtectionManager, RTHealthKitManager;

@interface RTWorkoutScheduler : RTService

@property (retain, nonatomic) RTBatteryManager *batteryManager;
@property (retain, nonatomic) RTXPCActivityManager *xpcActivityManager;
@property (retain, nonatomic) RTDataProtectionManager *dataProtectionManager;
@property (retain, nonatomic) RTWorkoutRouteManager *workoutRouteManager;
@property (retain, nonatomic) RTHealthKitManager *healthKitManager;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTPlatform *platform;
@property (nonatomic) unsigned long long singleWorkoutClusteringTaskState;
@property (nonatomic) unsigned long long updateRelevanceScoreTaskState;
@property (nonatomic) unsigned long long currentNWorkouts;
@property (nonatomic) unsigned long long totalWorkouts;
@property (retain, nonatomic) NSDate *lastClusterAndSyncDate;
@property (retain, nonatomic) NSDate *lastWorkoutComparisonDate;
@property (retain, nonatomic) NSDate *lastRelevanceScoreUpdateDate;
@property (retain, nonatomic) NSDate *lastSingleWorkoutClusteringDate;
@property (retain, nonatomic) NSDate *lastPruneDistanceMatrixDate;
@property (retain, nonatomic) RTTimer *clusteringDeferralTimer;
@property long long encryptedDataAvailability;
@property (retain, nonatomic) RTWorkoutSchedulerMetrics *metrics;

+ (id)taskStateToString:(unsigned long long)a0;
+ (id)taskTypeToString:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)_setup;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)clearTaskStatesWithHandler:(id /* block */)a0;
- (id)initWithBatteryManager:(id)a0 dataProtectionManager:(id)a1 workoutRouteManager:(id)a2 healthKitManager:(id)a3 locationManager:(id)a4 defaultsManager:(id)a5 platform:(id)a6 xpcActivityManager:(id)a7;
- (id)initWithBatteryManager:(id)a0 dataProtectionManager:(id)a1 workoutRouteManager:(id)a2 healthKitManager:(id)a3 locationManager:(id)a4 defaultsManager:(id)a5 timerManager:(id)a6 platform:(id)a7 xpcActivityManager:(id)a8;
- (void)logTaskStates;
- (void)readTaskStates;
- (void)saveTaskStates;

@end
