@class NSString;

@interface COAlarmDismissRequest : COMeshRequest

@property (readonly, copy, nonatomic) NSString *identifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAlarmIdentifier:(id)a0;

@end
