@class STAlarm;

@interface AFCreateAlarmRequest : AFSiriRequest

@property (retain, nonatomic) STAlarm *alarm;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)createResponse;

@end
