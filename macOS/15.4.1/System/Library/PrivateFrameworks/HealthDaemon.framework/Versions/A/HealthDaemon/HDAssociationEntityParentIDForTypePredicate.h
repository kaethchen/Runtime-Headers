@interface HDAssociationEntityParentIDForTypePredicate : HDSQLitePredicate {
    long long _parentID;
    long long _type;
}

+ (id)predicateWithParentID:(long long)a0 type:(unsigned long long)a1;

- (id)SQLForEntityClass:(Class)a0;
- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(int *)a1;

@end
