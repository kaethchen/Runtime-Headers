@class NSDate;

@interface CXChannelTransmitStopAction : CXChannelAction

@property (retain, nonatomic) NSDate *stopDate;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)fulfill;
- (id)customDescription;
- (void)fulfillWithStopDate:(id)a0;
- (void)updateAsFulfilledWithStopDate:(id)a0;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
