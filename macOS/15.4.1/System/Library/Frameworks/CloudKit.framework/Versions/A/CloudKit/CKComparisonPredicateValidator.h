@protocol CKObjectValidating;

@interface CKComparisonPredicateValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) id<CKObjectValidating> modifierValidator;
@property (retain, nonatomic) id<CKObjectValidating> leftExpressionValidator;
@property (retain, nonatomic) id<CKObjectValidating> operatorValidator;
@property (retain, nonatomic) id<CKObjectValidating> optionsValidator;
@property (retain, nonatomic) id<CKObjectValidating> rightExpressionValidator;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (BOOL)validate:(id)a0 error:(id *)a1;

@end
