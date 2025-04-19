@interface CSFirstUnlockMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _firstUnlocked;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (BOOL)isFirstUnlocked;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)_checkFirstUnlocked;
- (void)_didReceiveFirstUnlock:(BOOL)a0;
- (void)_didReceiveFirstUnlockInQueue:(BOOL)a0;
- (void)_firstUnlockNotified;
- (void)_notifyObserver:(id)a0 withUnlocked:(BOOL)a1;

@end
