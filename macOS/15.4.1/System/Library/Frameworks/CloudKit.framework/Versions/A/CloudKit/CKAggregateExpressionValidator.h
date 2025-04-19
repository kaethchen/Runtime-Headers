@class NSArray;

@interface CKAggregateExpressionValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) NSArray *subExpressionValidators;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (BOOL)validate:(id)a0 error:(id *)a1;
- (id)initWithValidators:(id)a0;

@end
