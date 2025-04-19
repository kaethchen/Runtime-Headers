@interface PLTimeReferenceSystem : PLTimeReferenceDynamic

- (void)dealloc;
- (id)currentTime;
- (void)dayChangedNotificationReceived:(id)a0;
- (void)registerForClockSetNotification;
- (void)registerForDayChangedNotification;
- (void)registerForTimeChangedNotification;
- (void)registerForTimeZoneChangedNotification;
- (void)timeChangedToMidnightLocalTime;
- (void)timeZoneChangedNotificationReceived:(id)a0;

@end
