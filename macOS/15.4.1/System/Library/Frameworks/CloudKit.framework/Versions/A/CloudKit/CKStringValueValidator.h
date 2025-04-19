@class NSString;

@interface CKStringValueValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) NSString *value;

- (void).cxx_destruct;
- (id)initWithValue:(id)a0;
- (id)CKPropertiesDescription;
- (BOOL)validate:(id)a0 error:(id *)a1;

@end
