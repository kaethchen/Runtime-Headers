@class NSString, NSDecimalNumber;

@interface PKCreditAccountUserActivity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountUserAltDSID;
@property (retain, nonatomic) NSDecimalNumber *purchases;
@property (retain, nonatomic) NSDecimalNumber *adjustedPurchases;
@property (retain, nonatomic) NSDecimalNumber *pendingPurchases;
@property (retain, nonatomic) NSDecimalNumber *rewardsBalance;
@property (retain, nonatomic) NSDecimalNumber *rewardsEarned;
@property (retain, nonatomic) NSDecimalNumber *rewardsRedeemed;
@property (readonly, nonatomic) NSDecimalNumber *totalSpending;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)remainingMonthlySpendWithLimit:(id)a0;
- (BOOL)isEqualToCreditAccountUserActivity:(id)a0;

@end
