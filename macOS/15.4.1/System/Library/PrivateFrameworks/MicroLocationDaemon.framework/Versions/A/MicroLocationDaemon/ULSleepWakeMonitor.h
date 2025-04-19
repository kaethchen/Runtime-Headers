@class CUSleepWakeMonitor;

@interface ULSleepWakeMonitor : ULEventMonitor

@property (retain, nonatomic) CUSleepWakeMonitor *sleepWakeMonitor;

+ (id)_eventFromCUSleepWakeState:(int)a0;

- (void).cxx_destruct;
- (void)startMonitoring:(id)a0;
- (void)stopMonitoring:(id)a0;
- (id)latestEventAfterAddingObserverForEventName:(id)a0;

@end
