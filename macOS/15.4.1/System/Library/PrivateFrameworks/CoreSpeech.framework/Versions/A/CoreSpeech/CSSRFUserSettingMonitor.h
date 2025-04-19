@interface CSSRFUserSettingMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)_stopMonitoring;
- (void)_didReceiveSRFUserSettingChanged:(id)a0;
- (void)_notifyObserver:(id)a0 withSRFUserSetting:(long long)a1;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isSiriRestrictedOnLockScreen;

@end
