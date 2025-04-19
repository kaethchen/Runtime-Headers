@class NSArray, NSDictionary;

@interface PKAccountServicePayLaterFinancingPlanQueryInstallments : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *installments;
@property (readonly, copy, nonatomic) NSDictionary *installmentIdentifierToFinancingPlan;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)_installmentIdentifierToFinancingPlanDictionaryRepresentation;
- (id)_installmentIdentifiers;
- (BOOL)_isEqualToPayLaterFinancingPlanQueryInstallments:(id)a0;
- (id)initWithInstallment:(id)a0 installmentIdentifierToFinancingPlan:(id)a1;

@end
