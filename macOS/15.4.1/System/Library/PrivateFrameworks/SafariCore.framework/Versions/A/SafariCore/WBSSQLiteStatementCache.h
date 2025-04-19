@class WBSSQLiteDatabase, NSMutableDictionary;

@interface WBSSQLiteStatementCache : NSObject {
    WBSSQLiteDatabase *_database;
    NSMutableDictionary *_statements;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithDatabase:(id)a0;
- (id)statementForQuery:(id)a0 error:(id *)a1;
- (id)_createStatementForQuery:(id)a0 error:(id *)a1;
- (id)cachedStatementForQuery:(id)a0;
- (void)setCachedStatement:(id)a0 forQuery:(id)a1;

@end
