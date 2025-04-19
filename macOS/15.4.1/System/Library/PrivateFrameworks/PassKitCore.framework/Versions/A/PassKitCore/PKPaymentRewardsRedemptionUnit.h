@class NSDecimalNumber, PKCurrencyAmount;

@interface PKPaymentRewardsRedemptionUnit : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSDecimalNumber *value;
@property (copy, nonatomic) PKCurrencyAmount *monetaryValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithType:(unsigned long long)a0 monetaryValue:(id)a1 value:(id)a2;

@end
