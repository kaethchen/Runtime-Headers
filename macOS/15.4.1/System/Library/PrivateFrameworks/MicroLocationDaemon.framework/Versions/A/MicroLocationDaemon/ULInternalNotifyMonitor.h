@class ULDarwinNotificationHelper;

@interface ULInternalNotifyMonitor : ULEventMonitor

@property (retain, nonatomic) ULDarwinNotificationHelper *notificationHelper;

- (id)init;
- (void).cxx_destruct;
- (void)startMonitoring:(id)a0;
- (id)initWithNotificationHelper:(id)a0;
- (void)stopMonitoring:(id)a0;
- (void)_handleNotificationForEventName:(id)a0;
- (id)_identifierFromEventName:(id)a0;
- (void)_startMonitoringForEventName:(id)a0 identifier:(id)a1;
- (void)_stopMonitoringForEventName:(id)a0 identifier:(id)a1;

@end
