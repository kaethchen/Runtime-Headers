@class NSArray;

@interface STDeleteAlarmAction : STAlarmAction {
    NSArray *_alarmIds;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)alarmIds;
- (id)_initWithAlarmIds:(id)a0;

@end
