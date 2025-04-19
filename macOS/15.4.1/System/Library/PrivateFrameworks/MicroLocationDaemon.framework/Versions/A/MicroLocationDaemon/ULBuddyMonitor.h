@class ULDarwinNotificationHelper;

@interface ULBuddyMonitor : ULEventMonitor

@property (retain, nonatomic) ULDarwinNotificationHelper *notificationHelper;
@property (nonatomic) BOOL buddyComplete;

- (id)init;
- (void).cxx_destruct;
- (void)startMonitoring:(id)a0;
- (id)initWithNotificationHelper:(id)a0;
- (void)stopMonitoring:(id)a0;
- (BOOL)_checkBuddyComplete;
- (void)_handleBuddyCompleteNotification;
- (id)latestEventAfterAddingObserverForEventName:(id)a0;

@end
