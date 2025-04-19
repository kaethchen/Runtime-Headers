@class NSDictionary, PKSpendingInsightTrend;

@interface PKSpendingInsightTrendCollection : NSObject <NSSecureCoding> {
    NSDictionary *_categoryInsights;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKSpendingInsightTrend *overallSpendingTrend;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)hasCategoryInsights;
- (id)spendingTrendForMerchantCategory:(long long)a0;

@end
