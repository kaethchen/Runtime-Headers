@interface CKCompoundTypePredicateValidator : CKPredicateValidatorInstance

@property (nonatomic) unsigned long long type;

- (id)initWithType:(unsigned long long)a0;
- (id)CKPropertiesDescription;
- (BOOL)validate:(id)a0 error:(id *)a1;

@end
