@interface CSSiriEnabledMonitor : CSEventMonitor {
    BOOL _isSiriSettingEnabled;
}

+ (id)sharedInstance;

- (id)init;
- (BOOL)isEnabled;
- (void)_stopMonitoring;
- (void)_notifyObserver:(id)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_didReceiveSiriSettingChanged:(BOOL)a0;
- (BOOL)fetchIsEnabled;

@end
