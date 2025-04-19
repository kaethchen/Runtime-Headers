@class NSArray;

@interface COMTAlarmReadResult : COMTResult

@property (readonly, copy, nonatomic) NSArray *alarms;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAlarms:(id)a0 actionIdentifier:(id)a1;

@end
