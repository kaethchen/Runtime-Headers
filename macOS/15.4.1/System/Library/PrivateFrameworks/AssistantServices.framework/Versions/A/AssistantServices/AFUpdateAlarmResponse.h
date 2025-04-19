@class NSArray;

@interface AFUpdateAlarmResponse : AFSiriResponse

@property (copy, nonatomic) NSArray *alarmIdentifiers;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setAlarmIdentifier:(id)a0;

@end
