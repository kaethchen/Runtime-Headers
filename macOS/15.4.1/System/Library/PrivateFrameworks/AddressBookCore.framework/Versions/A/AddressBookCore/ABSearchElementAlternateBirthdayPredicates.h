@interface ABSearchElementAlternateBirthdayPredicates : NSObject

+ (id)equalPredicateWithValueClauses:(id)a0;
+ (id)aggregatePredicateWithValueClauses:(id)a0 comparison:(long long)a1;
+ (id)componentValuePredicatesForComponents:(id)a0 comparison:(long long)a1;
+ (id)isNotNilPredicate;
+ (id)notEqualPredicateWithValueClauses:(id)a0;
+ (id)predicateForComparisonToNil:(long long)a0;
+ (id)predicateForKey:(id)a0 integerValue:(long long)a1 comparison:(long long)a2;
+ (id)predicateForKey:(id)a0 value:(id)a1 comparison:(long long)a2;
+ (id)predicateForValue:(id)a0 comparison:(long long)a1;
+ (id)reducedOrPredicateWithClauses:(id)a0;

@end
