@class NSMutableArray, NSMapTable, NSError, ICSQLiteConnectionOptions, NSNumber;
@protocol ICSQLiteConnectionDelegate;

@interface ICSQLiteConnection : NSObject {
    NSMutableArray *_afterTransactionBlocks;
    struct sqlite3 { } *_database;
    BOOL _didResetForCorruption;
    NSMapTable *_preparedStatements;
    long long _transactionDepth;
    BOOL _transactionWantsRollback;
}

@property (readonly, copy, nonatomic) NSError *currentError;
@property (readonly, copy, nonatomic) ICSQLiteConnectionOptions *options;
@property (weak, nonatomic) id<ICSQLiteConnectionDelegate> delegate;
@property (readonly, nonatomic) long long lastChangeCount;
@property (readonly, copy, nonatomic) NSNumber *userVersion;

- (void).cxx_destruct;
- (BOOL)close;
- (BOOL)open;
- (id)initWithOptions:(id)a0;
- (BOOL)setUserVersion:(id)a0;
- (BOOL)_close;
- (void)performTransaction:(id /* block */)a0;
- (BOOL)executeStatement:(id)a0 error:(id *)a1;
- (id)_verifiedStatementForSQL:(id)a0 error:(id *)a1;
- (BOOL)executePreparedStatement:(id)a0 error:(id *)a1;
- (BOOL)_executeStatement:(id)a0 error:(id *)a1;
- (void)_finalizeAllStatements;
- (void)_flushAfterTransactionBlocks;
- (id)_prepareStatement:(id)a0 error:(id *)a1;
- (id)_statementForPreparedStatement:(id)a0 error:(id *)a1;
- (id)_verifiedStatementForPreparedStatement:(id)a0 error:(id *)a1;
- (void)dispatchAfterTransaction:(id /* block */)a0;
- (void)executePreparedQuery:(id)a0 withResults:(id /* block */)a1;
- (BOOL)executePreparedStatement:(id)a0 error:(id *)a1 bindings:(id /* block */)a2;
- (void)executeQuery:(id)a0 withResults:(id /* block */)a1;
- (BOOL)executeStatement:(id)a0 error:(id *)a1 bindings:(id /* block */)a2;
- (id)prepareStatement:(id)a0 error:(id *)a1;
- (BOOL)_open;
- (BOOL)_performResetAfterCorruptionError;
- (BOOL)resetAfterCorruptionError;
- (BOOL)resetAfterIOError;
- (BOOL)truncate;

@end
