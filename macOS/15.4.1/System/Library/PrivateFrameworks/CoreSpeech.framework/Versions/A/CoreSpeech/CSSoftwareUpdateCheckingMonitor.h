@interface CSSoftwareUpdateCheckingMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _isSoftwareUpdateCheckingRunning;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (BOOL)isSoftwareUpdateCheckingRunning;
- (BOOL)_checkSoftwareUpdateCheckingState;
- (void)_didReceiveSoftwareUpdateCheckingStateChanged:(BOOL)a0;
- (void)_didReceiveSoftwareUpdateCheckingStateChangedInQueue:(BOOL)a0;
- (void)_notifyObserver:(id)a0 withSoftwareUpdateCheckingRunning:(BOOL)a1;
- (unsigned char)_softwareUpdateCheckingState;
- (void)_startMonitoringWithQueue:(id)a0;

@end
