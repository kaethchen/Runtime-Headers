@class NSArray;

@interface PKPayLaterFinancingPlanScheduleSummary : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *installments;
@property (copy, nonatomic) NSArray *payments;
@property (nonatomic) unsigned long long scheduleSummaryReason;

+ (id)totalAmountForInstallments:(id)a0 fallbackAmount:(id)a1;
+ (id)totalDueForInstallments:(id)a0 fallbackAmount:(id)a1;
+ (id)totalPaidForInstallments:(id)a0 fallbackAmount:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)paymentsOfType:(unsigned long long)a0;
- (long long)countOfInstallmentsAffectedByPaymentIdentifier:(id)a0;
- (id)currencyAmountOfPaymentIdentifierAffectingOtherInstallments:(id)a0 relativeInstallmentIdentifier:(id)a1 installmentsAreInOrder:(BOOL *)a2 countOfInstallments:(long long *)a3;
- (id)firstInstallmentIdentifierAffectedByPaymentIdentifier:(id)a0;
- (BOOL)hasPaymentsOrInstallmentsAfterInstallmentDueDate:(id)a0;
- (long long)installmentNumberForInstallmentIdentifier:(id)a0;
- (id)installmentsAffectedByPaymentIdentifier:(id)a0;
- (BOOL)isEqualToPayLaterScheduleSummary:(id)a0;
- (id)lastPayment;
- (id)nextDueInstallment;
- (BOOL)paymentIdentifierDidPayoffFinancingPlan:(id)a0;
- (id)paymentsAfterInstallmentDueDate:(id)a0;
- (id)paymentsWithIdentifier:(id)a0;
- (id)relevantInstallmentsFromDueDateStart:(id)a0 dueDateEnd:(id)a1 statues:(id)a2;
- (id)relevantInstallmentsFromPayoffDateStart:(id)a0 payoffDateEnd:(id)a1 statues:(id)a2;

@end
