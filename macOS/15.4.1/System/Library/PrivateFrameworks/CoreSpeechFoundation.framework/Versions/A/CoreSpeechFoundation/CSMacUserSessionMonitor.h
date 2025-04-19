@interface CSMacUserSessionMonitor : CSEventMonitor

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_handleSessionActive:(id)a0;
- (void)_handleSessionResign:(id)a0;
- (void)_notifySessionActive:(BOOL)a0;
- (void)_registerUserSessionNotification;
- (void)_unregisterUserSessionNotification;

@end
