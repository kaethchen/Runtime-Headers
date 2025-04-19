@class NSString, NSArray;

@interface HDSQLiteRawPredicate : HDSQLitePredicate <NSCopying> {
    NSString *_sql;
    NSArray *_properties;
    NSArray *_values;
}

+ (id)predicateWithSQL:(id)a0 overProperties:(id)a1 values:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)a0;
- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(inout int *)a1;
- (BOOL)isCompatibleWithPredicate:(id)a0;

@end
