@class NSString;

@interface NSSQLRTreeIndex : NSSQLIndex {
    NSString *_tableName;
}

- (void)dealloc;
- (id)bulkUpdateStatementsForStore:(id)a0;
- (id)dropStatementsForStore:(id)a0;
- (id)generateStatementsForStore:(id)a0;
- (id)initForIndexDescription:(id)a0 sqlEntity:(id)a1;

@end
