@interface UNTimeIntervalNotificationTrigger : UNNotificationTrigger

@property (readonly) double timeInterval;

+ (BOOL)supportsSecureCoding;
+ (id)triggerWithTimeInterval:(double)a0 repeats:(BOOL)a1;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)nextTriggerDate;
- (id)_initWithTimeInterval:(double)a0 repeats:(BOOL)a1;
- (id)nextTriggerDateAfterDate:(id)a0 withRequestedDate:(id)a1;

@end
