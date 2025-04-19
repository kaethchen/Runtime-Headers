@class NSArray, NSString;

@interface PPSSQLiteCompoundPredicate : PPSSQLitePropertyPredicate <NSCopying> {
    BOOL _unary;
    BOOL _trueIfNoPredicates;
    NSString *_combineOperator;
}

@property (readonly, copy, nonatomic) NSArray *predicates;

+ (id)predicateMatchingAnyPredicates:(id)a0;
+ (id)predicateMatchingAllPredicates:(id)a0;
+ (id)predicateWithProperty:(id)a0 values:(id)a1 comparisonType:(long long)a2;
+ (id)negatedPredicate:(id)a0;
+ (id)predicateWithProperty:(id)a0 equalToValues:(id)a1;
+ (id)predicateWithProperty:(id)a0 notEqualToValues:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(inout int *)a1;
- (id)sqlForEntity:(id)a0;
- (id)sqlJoinClausesForEntity:(id)a0;

@end
