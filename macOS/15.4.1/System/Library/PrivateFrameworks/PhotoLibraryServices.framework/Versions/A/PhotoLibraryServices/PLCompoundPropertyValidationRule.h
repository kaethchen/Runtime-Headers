@class NSArray;

@interface PLCompoundPropertyValidationRule : PLPropertyValidationRule

@property (nonatomic) long long compoundType;
@property (retain, nonatomic) NSArray *rules;

+ (id)andCompoundPropertyValidationRuleWithRules:(id)a0;
+ (id)orCompoundPropertyValidationRuleWithRules:(id)a0;

- (void).cxx_destruct;
- (id)predicate;
- (id)keyPaths;
- (id)currentValuesOfObject:(id)a0;
- (id)initWithType:(long long)a0 rules:(id)a1;

@end
