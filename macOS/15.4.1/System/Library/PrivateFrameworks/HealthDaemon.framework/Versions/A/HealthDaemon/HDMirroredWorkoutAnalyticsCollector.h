@class HDMirroredWorkoutAnalyticEvent, HKPersistentTimer;

@interface HDMirroredWorkoutAnalyticsCollector : NSObject {
    HKPersistentTimer *_startMirroringTimer;
    HKPersistentTimer *_stopMirroringTimer;
    HKPersistentTimer *_sendDataTimer;
    double _startTime;
}

@property (retain, nonatomic) HDMirroredWorkoutAnalyticEvent *mirroredWorkoutEvent;

- (id)init;
- (void).cxx_destruct;
- (void)sendData;
- (void)sentData;
- (void)startMirroring;
- (void)startedMirroring;
- (void)stopMirroring;
- (void)stoppedMirroring;
- (void)submitHeartBeatFailuresWithCoordinator:(id)a0 numOfHeartbeatFailures:(long long)a1 workoutDuration:(double)a2 isFirstParty:(BOOL)a3;
- (void)submitMirroringMetricsWithCoordinator:(id)a0 isFirstParty:(BOOL)a1;

@end
