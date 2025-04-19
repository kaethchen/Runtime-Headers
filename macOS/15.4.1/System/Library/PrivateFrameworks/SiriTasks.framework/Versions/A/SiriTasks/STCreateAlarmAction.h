@class STAlarm;

@interface STCreateAlarmAction : STAlarmAction {
    STAlarm *_alarm;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)alarm;
- (id)_initWithAlarm:(id)a0;

@end
