@interface RTHealthKitManagerWorkoutEndReminderAlertDismissedNotification : RTNotification

@property (nonatomic) unsigned long long reason;

- (id)description;
- (id)initWithAlertDimissedReason:(unsigned long long)a0;

@end
