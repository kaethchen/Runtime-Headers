@class NSArray, PKAccountServicePayLaterFinancingPlanQueryInstallments, PKCurrencyAmount;

@interface PKAccountServicePayLaterFinancingPlanQueryResponse : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKCurrencyAmount *dueNext30Days;
@property (retain, nonatomic) PKCurrencyAmount *totalPendingAmount;
@property (nonatomic) long long financingPlanCount;
@property (retain, nonatomic) PKAccountServicePayLaterFinancingPlanQueryInstallments *upcomingInstallments;
@property (copy, nonatomic) NSArray *completedFinancingPlans;
@property (copy, nonatomic) NSArray *activeFinancingPlans;
@property (copy, nonatomic) NSArray *relevantFinancingPlans;

+ (id)_financingPlanIdentifierFromList:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)_isEqualToFinancingPlanQueryResponse:(id)a0;

@end
