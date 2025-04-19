@interface RTMotionActivityManagerNotificationActivityAlarm : RTNotification

@property (readonly, nonatomic) long long trigger;

- (id)description;
- (id)init;
- (id)initWithActivityAlarmTrigger:(long long)a0;

@end
