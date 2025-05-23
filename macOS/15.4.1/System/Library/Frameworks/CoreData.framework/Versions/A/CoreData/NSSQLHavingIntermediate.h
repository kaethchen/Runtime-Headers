@class NSSQLWhereIntermediate;

@interface NSSQLHavingIntermediate : NSSQLIntermediate {
    NSSQLWhereIntermediate *_whereClause;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;
- (id)initWithPredicate:(id)a0 inScope:(id)a1 inContext:(id)a2;
- (BOOL)isHavingScoped;

@end
