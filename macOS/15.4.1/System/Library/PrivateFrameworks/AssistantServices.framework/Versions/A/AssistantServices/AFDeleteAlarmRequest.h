@class NSArray;

@interface AFDeleteAlarmRequest : AFSiriRequest

@property (copy, nonatomic) NSArray *alarmIdentifiers;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)createResponse;

@end
