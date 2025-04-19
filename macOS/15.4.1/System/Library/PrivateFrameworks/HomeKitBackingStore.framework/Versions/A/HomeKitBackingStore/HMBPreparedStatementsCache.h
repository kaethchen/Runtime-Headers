@class NSMutableDictionary, NSMutableArray;

@interface HMBPreparedStatementsCache : NSObject {
    struct hmf_unfair_data_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _lock;
    NSMutableDictionary *_statementsByStatementString;
    NSMutableArray *_lruQueue;
}

@property (readonly) unsigned long long count;

- (id)init;
- (void).cxx_destruct;
- (struct sqlite3_stmt { } *)evictLeastRecentlyUsedStatement;
- (struct sqlite3_stmt { } *)_extractStatementForString:(id)a0;
- (id)evictAllStatements;
- (void)setStatement:(struct sqlite3_stmt { } *)a0 forString:(id)a1;
- (struct sqlite3_stmt { } *)statementForString:(id)a0;

@end
