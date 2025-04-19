@class ULDarwinNotificationHelper;

@interface ULBatteryModeMonitor : ULEventMonitor

@property (retain, nonatomic) ULDarwinNotificationHelper *notificationHelper;
@property (nonatomic) BOOL unlimitedPower;
@property (nonatomic) BOOL lowPowerMode;

- (id)init;
- (void).cxx_destruct;
- (void)startMonitoring:(id)a0;
- (id)initWithNotificationHelper:(id)a0;
- (void)stopMonitoring:(id)a0;
- (void)_startMonitoringForLowPowerMode;
- (BOOL)_checkLowPowerMode;
- (BOOL)_checkUnlimitedPower;
- (void)_handleIOPSNotifyAdapterChangeNotification;
- (void)_handleNSProcessInfoPowerStateDidChangeNotification:(id)a0;
- (void)_startMonitoringForUnlimitedPower;
- (void)_stopMonitoringForLowPowerMode;
- (void)_stopMonitoringForUnlimitedPower;
- (id)latestEventAfterAddingObserverForEventName:(id)a0;

@end
