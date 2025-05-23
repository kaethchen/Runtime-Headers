@class NSDate;

@interface CXChannelTransmitStartAction : CXChannelAction

@property (retain, nonatomic) NSDate *startDate;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)fulfill;
- (id)customDescription;
- (void)updateAsFulfilledWithStartDate:(id)a0;
- (void)fulfillWithStartDate:(id)a0;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
