@class NSDecimalNumber, PKCurrencyAmount;

@interface PKSpendingInsightTrend : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long direction;
@property (readonly, copy, nonatomic) NSDecimalNumber *percentageChange;
@property (readonly, copy, nonatomic) PKCurrencyAmount *change;
@property (readonly, nonatomic) long long category;
@property (readonly, copy, nonatomic) PKCurrencyAmount *totalSpending;
@property (readonly, copy, nonatomic) PKCurrencyAmount *previousTotalSpending;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)formattedPercentage;

@end
