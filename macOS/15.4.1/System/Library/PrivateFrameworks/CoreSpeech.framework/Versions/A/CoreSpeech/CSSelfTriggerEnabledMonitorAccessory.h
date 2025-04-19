@interface CSSelfTriggerEnabledMonitorAccessory : CSEventMonitor

@property (nonatomic) BOOL enabled;

+ (id)sharedInstance;

- (id)init;
- (BOOL)isEnabled;
- (void)_stopMonitoring;
- (void)setEnable:(BOOL)a0;
- (void)_didReceiveSelfTriggerChanged:(BOOL)a0;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;
- (void)_startMonitoringWithQueue:(id)a0;

@end
