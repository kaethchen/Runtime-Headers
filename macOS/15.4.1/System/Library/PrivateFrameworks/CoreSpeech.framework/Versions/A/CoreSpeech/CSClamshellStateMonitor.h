@interface CSClamshellStateMonitor : CSEventMonitor {
    struct IONotificationPort { } *_notificationPort;
    unsigned int _serviceNotification;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_didReceiveClamshellStateChangeNotification:(BOOL)a0;
- (void)_notifyObserver:(id)a0 withClamshellState:(BOOL)a1;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isClamshellClosed;

@end
