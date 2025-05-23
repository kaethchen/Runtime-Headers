@class NSString;

@interface STAlarm : STSiriModelObject <NSCopying>

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) long long daysOfWeek;
@property (nonatomic) long long hourOfDay;
@property (nonatomic) long long minuteOfHour;
@property (copy, nonatomic) NSString *label;
@property (nonatomic, getter=isSleepAlarm) BOOL sleepAlarm;
@property (nonatomic, getter=isOverrideAlarm) BOOL overrideAlarm;
@property (nonatomic) long long bedtimeHour;
@property (nonatomic) long long bedtimeMinute;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
