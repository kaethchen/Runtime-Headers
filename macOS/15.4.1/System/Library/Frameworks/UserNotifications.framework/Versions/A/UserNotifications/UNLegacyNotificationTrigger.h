@class NSTimeZone, NSCalendar, NSDate;

@interface UNLegacyNotificationTrigger : UNNotificationTrigger

@property (copy) NSDate *date;
@property (copy) NSTimeZone *timeZone;
@property (copy) NSCalendar *repeatCalendar;
@property int remainingRepeatCount;
@property int totalRepeatCount;
@property unsigned long long repeatInterval;

+ (BOOL)supportsSecureCoding;
+ (id)triggerWithDate:(id)a0 timeZone:(id)a1 remainingRepeatCount:(int)a2 totalRepeatCount:(int)a3 repeatInterval:(unsigned long long)a4 repeatCalendar:(id)a5;
+ (id)triggerWithDate:(id)a0 timeZone:(id)a1 repeatInterval:(unsigned long long)a2 repeatCalendar:(id)a3;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithDate:(id)a0 timeZone:(id)a1 remainingRepeatCount:(int)a2 totalRepeatCount:(int)a3 repeatInterval:(unsigned long long)a4 repeatCalendar:(id)a5;
- (id)_nextTriggerDateAfterDate:(id)a0 withRequestedDate:(id)a1 defaultTimeZone:(id)a2;
- (double)_retroactiveTriggerHysteresis;
- (id)nextTriggerDateAfterDate:(id)a0 withRequestedDate:(id)a1;
- (BOOL)willTriggerAfterDate:(id)a0 withRequestedDate:(id)a1;

@end
