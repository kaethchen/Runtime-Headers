@class HDSQLiteStatementCache, NSString, NSURL, NSError, NSNumber, NSMutableArray;
@protocol HDSQLiteDatabaseDelegate;

@interface HDSQLiteDatabase : NSObject {
    struct sqlite3 { } *_db;
    BOOL _isInTransaction;
    BOOL _requiresRollback;
    long long _transactionType;
    _Atomic BOOL _transactionInterruptRequested;
    BOOL _isHandlingTransactionBeforeCommit;
    BOOL _isHandlingTransactionEnd;
    NSMutableArray *_beforeCommitBlocks;
    NSMutableArray *_onCommitBlocks;
    NSMutableArray *_onRollbackBlocks;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _interruptionLock;
}

@property (weak, nonatomic) id<HDSQLiteDatabaseDelegate> delegate;
@property (nonatomic) long long cacheScope;
@property (readonly, nonatomic) HDSQLiteStatementCache *statementCache;
@property BOOL transactionInterruptRequested;
@property (nonatomic) BOOL encounteredOutOfSpace;
@property (readonly, copy, nonatomic) NSError *corruptionError;
@property (nonatomic) BOOL permitWritesInReadTransaction;
@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic, getter=isOpen) BOOL open;
@property (nonatomic, getter=isWriter) BOOL writer;
@property (copy, nonatomic) NSString *fileProtectionType;
@property (nonatomic) BOOL checkpointRequired;
@property (readonly, copy, nonatomic) NSNumber *lastInsertRowID;

+ (id)memoryDatabaseFromURL:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (int)openWithError:(id *)a0;
- (id)initWithDatabaseURL:(id)a0;
- (BOOL)executeSQL:(id)a0 error:(id *)a1 bindingHandler:(id /* block */)a2 enumerationHandler:(id /* block */)a3;
- (BOOL)executeUncachedSQL:(id)a0 error:(id *)a1;
- (BOOL)performTransactionWithType:(long long)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (BOOL)columnIsNullable:(id)a0 inTable:(id)a1 error:(id *)a2;
- (int)getChangesCount;
- (void)requireRollback;
- (void)accessDatabaseUsingBlock:(id /* block */)a0;
- (void)beforeCommit:(id /* block */)a0;
- (id)dumpSchemaWithError:(id *)a0;
- (BOOL)enableIncrementalAutovacuumForDatabaseWithName:(id)a0 error:(id *)a1;
- (BOOL)executeCachedStatementForKey:(const char *)a0 error:(id *)a1 SQLGenerator:(id /* block */)a2 bindingHandler:(id /* block */)a3 enumerationHandler:(id /* block */)a4;
- (BOOL)executeSQLStatements:(id)a0 error:(id *)a1;
- (BOOL)executeUncachedSQL:(id)a0 error:(id *)a1 bindingHandler:(id /* block */)a2 enumerationHandler:(id /* block */)a3;
- (BOOL)foreignKeyExistsFromTable:(id)a0 column:(id)a1 toTable:(id)a2 column:(id)a3 error:(id *)a4;
- (BOOL)incrementalVacuumDatabaseIfNeeded:(id)a0 error:(id *)a1;
- (void)onCommit:(id /* block */)a0 orRollback:(id /* block */)a1;
- (int)openForReadingWithError:(id *)a0;
- (BOOL)performIntegrityCheckOnDatabase:(id)a0 error:(id *)a1 integrityErrorHandler:(id /* block */)a2;
- (BOOL)setUserVersion:(long long)a0 withDatabaseName:(id)a1 error:(id *)a2;
- (BOOL)table:(id)a0 hasColumnWithName:(id)a1 error:(id *)a2;
- (id)typeOfColumn:(id)a0 inTable:(id)a1 error:(id *)a2;
- (long long)userVersionWithDatabaseName:(id)a0 error:(id *)a1;
- (long long)validateForeignKeysForTable:(id)a0 databaseName:(id)a1 error:(id *)a2;
- (BOOL)_executeStatementWithError:(id *)a0 statementProvider:(id /* block */)a1 bindingHandler:(id /* block */)a2 enumerationHandler:(id /* block */)a3;
- (id)getLastErrorWithStatement:(struct sqlite3_stmt { } *)a0 context:(id)a1;
- (id)initMemoryDatabase;
- (void)unitTest_setCorruptionError:(id)a0;

@end
