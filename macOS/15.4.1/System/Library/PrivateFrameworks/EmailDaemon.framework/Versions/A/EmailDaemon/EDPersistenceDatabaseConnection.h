@class EFSQLConnection, NSString, EDPersistenceDatabaseJournal, NSObject;
@protocol OS_os_log, EDPersistenceDatabaseConnectionDelegate;

@interface EDPersistenceDatabaseConnection : NSObject <EFLoggable> {
    BOOL _isWriter;
    NSString *_protectedDatabaseName;
    NSString *_journalDatabaseName;
    EDPersistenceDatabaseJournal *_journal;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, weak, nonatomic) id<EDPersistenceDatabaseConnectionDelegate> delegate;
@property (readonly, nonatomic) EFSQLConnection *sqlConnection;
@property (readonly, nonatomic) NSString *basePath;
@property (readonly, nonatomic) NSString *fullPath;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL protectedDatabaseAttached;
@property (readonly, nonatomic) BOOL journalDatabaseAttached;
@property (copy, nonatomic) NSString *transactionLabel;
@property (nonatomic) BOOL hadIOError;
@property (readonly, nonatomic) struct sqlite3 { } *sqlDB;
@property (readonly, nonatomic) BOOL isWriter;
@property (readonly, nonatomic) long long lastInsertedDatabaseID;
@property (readonly, nonatomic) long long transactionGeneration;
@property (readonly, nonatomic) unsigned long long rowsChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)open;
- (BOOL)tableExists:(id)a0;
- (id)SQLQueryLogger;
- (BOOL)attachJournalDatabase:(id)a0 withName:(id)a1;
- (BOOL)attachJournalDatabase:(id)a0 withName:(id)a1 error:(id *)a2;
- (BOOL)attachProtectedDatabaseWithName:(id)a0;
- (BOOL)attachProtectedDatabaseWithName:(id)a0 error:(id *)a1;
- (BOOL)attachProtectedDatabaseWithName:(id)a0 url:(id)a1 error:(id *)a2;
- (BOOL)checkForConnectionErrorWithMessage:(id)a0;
- (void)clearLastInsertedDatabaseID;
- (BOOL)columnExists:(id)a0 inTable:(id)a1 database:(id)a2 type:(unsigned long long *)a3;
- (BOOL)columnExists:(id)a0 inTable:(id)a1 type:(unsigned long long *)a2;
- (int)configureSQLConnection;
- (unsigned long long)countForSelectStatement:(id)a0;
- (id)databaseIDsForSelectStatement:(id)a0;
- (BOOL)databaseIsAttached:(id)a0;
- (BOOL)detachJournalDatabase;
- (void)detachProtectedDatabase;
- (BOOL)executeDeleteStatement:(id)a0 error:(id *)a1;
- (BOOL)executeDeleteStatement:(id)a0 rowsChanged:(unsigned long long *)a1;
- (BOOL)executeInsertStatement:(id)a0 error:(id *)a1;
- (BOOL)executeInsertStatement:(id)a0 rowsChanged:(unsigned long long *)a1;
- (BOOL)executeSelectStatement:(id)a0 withBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)executeStatementString:(id)a0 errorMessage:(id)a1;
- (BOOL)executeUpdateStatement:(id)a0 error:(id *)a1;
- (BOOL)executeUpdateStatement:(id)a0 rowsChanged:(unsigned long long *)a1;
- (BOOL)executeUpsertStatement:(id)a0 error:(id *)a1;
- (BOOL)executeUpsertStatement:(id)a0 rowsChanged:(unsigned long long *)a1;
- (void)handleError:(id)a0 message:(id)a1;
- (void)handleSQLResult:(int)a0 message:(id)a1;
- (id)initForInMemoryDatabaseIsWriter:(BOOL)a0 delegate:(id)a1;
- (id)initWithBasePath:(id)a0 databaseName:(id)a1 isWriter:(BOOL)a2 delegate:(id)a3;
- (id)initWithSQLDB:(struct sqlite3 { } *)a0 isWriter:(BOOL)a1 delegate:(id)a2;
- (void)performBlockAfterTransaction:(id /* block */)a0;
- (BOOL)performWithOptions:(unsigned long long)a0 transactionError:(id *)a1 block:(id /* block */)a2;
- (id)preparedStatementForQueryString:(id)a0;
- (void)setIsWriter:(BOOL)a0;
- (BOOL)tableExists:(id)a0 inDatabase:(id)a1;
- (long long)transactionTypeForWriting;

@end
