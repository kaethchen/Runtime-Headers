@class NSDecimalNumber, PKPaymentRewardsBalance, NSString, PKCurrencyAmount;

@interface PKPaymentOfferRewardsRedemptionIntent : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) PKPaymentRewardsBalance *rewardsBalance;
@property (readonly, copy, nonatomic) PKCurrencyAmount *monetaryValue;
@property (readonly, copy, nonatomic) NSDecimalNumber *value;
@property (readonly, copy, nonatomic) NSString *balanceIdentifier;
@property (readonly, copy, nonatomic) NSString *programName;
@property (readonly, nonatomic) unsigned long long rewardsType;
@property (readonly, nonatomic) BOOL isEmptyValued;
@property (readonly, nonatomic) BOOL hasFullBalanceSelected;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithRewardsBalance:(id)a0 amount:(id)a1 value:(id)a2;

@end
