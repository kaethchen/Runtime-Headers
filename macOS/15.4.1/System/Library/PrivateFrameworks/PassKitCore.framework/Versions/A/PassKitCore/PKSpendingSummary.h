@class PKPaymentTransactionGroup, NSArray, NSDictionary, NSString, PKCurrencyAmount, NSDate, PKSpendingInsightTrendCollection;

@interface PKSpendingSummary : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long summaryType;
@property (nonatomic) BOOL isFamilySummary;
@property (nonatomic) unsigned long long summaryUnit;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) PKCurrencyAmount *totalSpending;
@property (copy, nonatomic) NSArray *orderedSpendingCategories;
@property (copy, nonatomic) NSArray *orderedSpendingPerMerchants;
@property (retain, nonatomic) PKSpendingInsightTrendCollection *insights;
@property (retain, nonatomic) PKCurrencyAmount *previousTotalSpending;
@property (retain, nonatomic) PKCurrencyAmount *previousMaxAmount;
@property (retain, nonatomic) PKPaymentTransactionGroup *rewards;
@property (retain, nonatomic) PKPaymentTransactionGroup *interest;
@property (retain, nonatomic) PKPaymentTransactionGroup *payments;
@property (retain, nonatomic) PKPaymentTransactionGroup *refunds;
@property (retain, nonatomic) PKPaymentTransactionGroup *adjustments;
@property (copy, nonatomic) NSDictionary *spendingsPerAltDSID;
@property (copy, nonatomic) NSString *altDSID;
@property (retain, nonatomic) NSArray *spendingsPerCalendarUnit;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isCurrentPeriod;

@end
