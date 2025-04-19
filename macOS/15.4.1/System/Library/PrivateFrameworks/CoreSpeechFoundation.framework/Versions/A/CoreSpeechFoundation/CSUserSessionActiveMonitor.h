@interface CSUserSessionActiveMonitor : CSEventMonitor

+ (id)sharedInstance;

- (unsigned long long)type;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isUserActive;
- (void)handleConsoleEnabled:(id)a0;

@end
