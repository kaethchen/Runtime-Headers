@class NSString, NSNumber, INCurrencyAmount;

@interface INSendRideFeedbackIntent : INIntent

@property (readonly, copy) NSString *rideIdentifier;
@property (copy) NSNumber *rating;
@property (copy) INCurrencyAmount *tip;

+ (BOOL)supportsSecureCoding;
+ (id)intentDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)initWithRideIdentifier:(id)a0;

@end
