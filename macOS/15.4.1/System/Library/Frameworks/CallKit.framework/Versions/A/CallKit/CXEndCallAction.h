@class NSDate;

@interface CXEndCallAction : CXCallAction

@property (copy, nonatomic) NSDate *dateEnded;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)fulfill;
- (id)customDescription;
- (void)updateAsFulfilledWithDateEnded:(id)a0;
- (void)fulfillWithDateEnded:(id)a0;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
