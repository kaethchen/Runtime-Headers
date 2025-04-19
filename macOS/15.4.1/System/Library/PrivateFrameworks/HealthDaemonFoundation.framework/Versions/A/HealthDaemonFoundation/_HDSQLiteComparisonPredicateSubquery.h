@class HDSQLiteQueryDescriptor, NSArray;

@interface _HDSQLiteComparisonPredicateSubquery : HDSQLiteComparisonPredicate

@property (readonly, copy, nonatomic) HDSQLiteQueryDescriptor *subqueryDescriptor;
@property (readonly, copy, nonatomic) NSArray *subqueryProperties;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)a0;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(int *)a1;
- (id)initWithProperty:(id)a0 comparisonType:(long long)a1 subqueryDescriptor:(id)a2 subqueryProperties:(id)a3;

@end
