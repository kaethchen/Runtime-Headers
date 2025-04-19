@class MTAlarm;

@interface COAlarmRequest : COMeshRequest

@property (readonly, copy, nonatomic) MTAlarm *alarm;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAlarm:(id)a0;

@end
