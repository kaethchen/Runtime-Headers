@interface HDSQLitePredicate : NSObject <NSCopying>

+ (id)falsePredicate;
+ (id)truePredicate;
+ (id)booleanPredicateWithValue:(BOOL)a0;
+ (id)compoundPredicateWithPredicate:(id)a0 otherPredicate:(id)a1;
+ (id)compoundPredicateWithPredicate:(id)a0 otherPredicate:(id)a1 otherPredicate:(id)a2;
+ (id)disjunctionWithPredicate:(id)a0 otherPredicate:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)SQLForEntityClass:(Class)a0;
- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(int *)a1;
- (BOOL)isCompatibleWithPredicate:(id)a0;

@end
