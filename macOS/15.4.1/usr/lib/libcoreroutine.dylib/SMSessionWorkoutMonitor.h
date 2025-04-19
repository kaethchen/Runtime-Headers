@class NSMutableDictionary, SMSessionConfiguration, NSDate, NSObject, SMCMNoMovementMonitor, RTDefaultsManager, RTPlatform, RTTimerManager, SMSessionStore, NSString, RTHealthKitManager, RTLocationManager, SMSessionMetricManager, RTDistanceCalculator;
@protocol OS_dispatch_queue, SMTriggerManagerProtocol;

@interface SMSessionWorkoutMonitor : NSObject <SMTriggerProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) RTHealthKitManager *healthKitManager;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) SMSessionMetricManager *sessionMetricManager;
@property (retain, nonatomic) SMSessionStore *sessionStore;
@property (retain, nonatomic) SMSessionConfiguration *sessionConfiguration;
@property (retain, nonatomic) NSDate *endWorkoutReminderDate;
@property (retain, nonatomic) NSDate *latestWorkoutManualPauseDate;
@property (retain, nonatomic) NSMutableDictionary *timerIdentifierToTimers;
@property (nonatomic) BOOL isWorkoutPaused;
@property (nonatomic) BOOL endWorkoutReminderSettingEnabled;
@property (nonatomic) double endWorkoutReminderTimeoutSettingEnabled;
@property (nonatomic) double endWorkoutReminderTimeoutSettingDisabled;
@property (nonatomic) double workoutManualPauseTimeout;
@property (retain, nonatomic) SMCMNoMovementMonitor *noMovementMonitor;
@property (weak, nonatomic) id<SMTriggerManagerProtocol> sessionMonitorDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_removeObservers;
- (void)_setup;
- (void)_onWorkoutTriggerControlUpdate:(unsigned long long)a0;
- (BOOL)_shouldPromptNoMovementTrigger:(id)a0;
- (void)_addObservers;
- (void)_bootstrap;
- (void)_initializeTimerWithIdentifier:(id)a0 fireAfterDelay:(double)a1;
- (void)_modifyMonitoringWithConfiguration:(id)a0 handler:(id /* block */)a1;
- (void)_onTimerExpiryForTimerIdentifier:(id)a0;
- (void)_removeTimers;
- (BOOL)_shouldPromptEndWorkoutReminderTriggerWithReason:(unsigned long long)a0;
- (void)_startMonitoringWithConfiguration:(id)a0 handler:(id /* block */)a1;
- (void)_stopMonitoringWithHandler:(id /* block */)a0;
- (void)_tearDownTimerWithIdentifier:(id)a0;
- (double)_workoutEndReminderTimeout;
- (id)initWithQueue:(id)a0 defaultsManager:(id)a1 distanceCalculator:(id)a2 locationManager:(id)a3 healthKitManager:(id)a4 platform:(id)a5 sessionMetricManager:(id)a6 sessionStore:(id)a7 timerManager:(id)a8 noMovementMonitor:(id)a9;
- (void)modifyMonitoringWithConfiguration:(id)a0 handler:(id /* block */)a1;
- (void)onHealthKitNotification:(id)a0;
- (void)onNoMovementMonitorNotification:(id)a0;
- (void)onWorkoutTriggerControlUpdate:(unsigned long long)a0;
- (void)setup;
- (void)startMonitoringWithConfiguration:(id)a0 handler:(id /* block */)a1;
- (void)stopMonitoringWithHandler:(id /* block */)a0;

@end
