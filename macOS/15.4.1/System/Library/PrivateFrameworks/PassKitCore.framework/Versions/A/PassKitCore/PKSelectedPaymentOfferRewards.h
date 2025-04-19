@class PKPaymentOfferRewardsRedemptionIntent;

@interface PKSelectedPaymentOfferRewards : PKSelectedPaymentOffer <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKPaymentOfferRewardsRedemptionIntent *rewardsRedemptionIntent;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRewardsRedemptionIntent:(id)a0 criteriaIdentifier:(id)a1 paymentPass:(id)a2 sessionIdentifier:(id)a3;

@end
