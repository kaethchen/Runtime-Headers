@interface CSCoreSpeechDaemonStateMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_didReceiveDaemonStateChanged:(unsigned long long)a0;
- (void)_notifyObserver:(id)a0 withDaemonState:(unsigned long long)a1;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)notifyDaemonStateChanged:(unsigned long long)a0;

@end
