@class HDSQLitePredicate;

@interface HDWorkoutActivityPredicate : HDSQLitePredicate {
    HDSQLitePredicate *_subPredicate;
}

+ (id)predicateForSubPredicate:(id)a0;

- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)a0;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(inout int *)a1;

@end
