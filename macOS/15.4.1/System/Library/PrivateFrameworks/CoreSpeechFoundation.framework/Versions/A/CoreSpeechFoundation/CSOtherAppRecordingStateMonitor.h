@interface CSOtherAppRecordingStateMonitor : CSEventMonitor

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_startObservingSystemControllerLifecycle;
- (void)_systemControllerDied:(id)a0;
- (BOOL)isOtherNonEligibleAppRecording;
- (BOOL)_isEntitledWithDecodedAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)_startObservingOtherAppRecordingState;
- (void)handleOtherAppRecordingStateChange:(id)a0;

@end
