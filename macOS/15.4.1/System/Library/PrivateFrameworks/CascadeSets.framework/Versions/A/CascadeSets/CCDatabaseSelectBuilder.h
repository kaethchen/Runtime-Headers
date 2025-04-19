@class CCSQLCommandJoin, NSArray, NSNumber, CCSQLCommandOrder;

@interface CCDatabaseSelectBuilder : CCDatabaseCommandBuilder {
    CCSQLCommandJoin *_join;
    CCSQLCommandOrder *_order;
    NSArray *_columns;
    BOOL _count;
    NSNumber *_limit;
    NSNumber *_offset;
}

- (void).cxx_destruct;
- (void)setLimit:(id)a0;
- (void)setOffset:(id)a0;
- (void)setCount:(BOOL)a0;
- (id)build;
- (void)setColumns:(id)a0;
- (id)initWithTableName:(id)a0;
- (void)setColumns:(id)a0 withTablePrefixes:(id)a1;
- (void)setCommandCriterion:(id)a0;
- (void)setCommandOrder:(id)a0;
- (void)setJoinWithType:(long long)a0 tables:(id)a1;

@end
