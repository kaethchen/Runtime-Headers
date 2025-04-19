@interface RTMotionActivityManagerNotificationMotionSettledStateChange : RTNotification

@property (readonly, nonatomic) unsigned long long settledState;

- (id)description;
- (id)init;
- (id)initWithSettledState:(unsigned long long)a0;

@end
