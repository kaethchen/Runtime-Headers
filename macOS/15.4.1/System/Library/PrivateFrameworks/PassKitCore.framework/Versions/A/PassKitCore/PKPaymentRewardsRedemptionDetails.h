@class PKPaymentRewardsRedemptionUnit, PKPaymentRewardsRedemptionTransactionDetails;

@interface PKPaymentRewardsRedemptionDetails : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) PKPaymentRewardsRedemptionUnit *intended;
@property (copy, nonatomic) PKPaymentRewardsRedemptionUnit *redeemed;
@property (copy, nonatomic) PKPaymentRewardsRedemptionTransactionDetails *originalTransaction;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithIntended:(id)a0 redeemed:(id)a1 originalTransactionDetails:(id)a2;

@end
