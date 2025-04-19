@class NSString, APDeviceLockedTask, APUnfairLock;

@interface APDatabaseManager : NSObject

@property (nonatomic) struct sqlite3 { } *database;
@property (retain, nonatomic) APUnfairLock *lock;
@property (retain, nonatomic) APDeviceLockedTask *deviceLockedTask;
@property (retain, nonatomic) NSString *dbName;
@property (nonatomic) long long currentVersion;
@property (nonatomic) int openConnectionResult;
@property (nonatomic) BOOL classCDataAvaliable;

+ (id)mainDatabase;

- (id)init;
- (void).cxx_destruct;
- (void)optimize;
- (BOOL)_setUserVersion:(long long)a0;
- (BOOL)executeQuery:(id)a0 withParameters:(id)a1;
- (BOOL)openDatabaseConnectionWithName:(id)a0;
- (BOOL)_bindParameters:(id)a0 toStatement:(struct sqlite3_stmt { } *)a1;
- (id)_executePragmaSelectQuery:(id)a0;
- (BOOL)_executeQueryFromString:(id)a0;
- (BOOL)_handleEventTablesDynamicMigrationWithQuery:(id)a0 version:(int)a1;
- (BOOL)_isConnectionOpen;
- (BOOL)_isConnectionValidWithErrorDescription:(id)a0;
- (void)_openDBConnectionCanRepeat:(BOOL)a0 databasePath:(id)a1;
- (struct sqlite3_stmt { } *)_prepareStatementForQuery:(id)a0;
- (int)_runTransactionStatement:(int)a0;
- (BOOL)_updateVersionForPath:(id)a0;
- (id)_userVersion;
- (void)closeDatabaseConnection;
- (long long)executeInsertQuery:(id)a0 withParameters:(id)a1;
- (BOOL)executeQueryFromString:(id)a0;
- (id)executeSelectNumberQuery:(id)a0 withParameters:(id)a1;
- (id)executeSelectQuery:(id)a0 forTable:(id)a1 withParameters:(id)a2;
- (id)executeSelectQuery:(id)a0 forTable:(id)a1 withParameters:(id)a2 groupedByColumn:(id)a3;
- (id)executeSelectStringsQuery:(id)a0 withParameters:(id)a1;
- (BOOL)executeTransactionQueryWithType:(int)a0;
- (BOOL)executeTransactionQueryWithType:(int)a0 result:(int *)a1 transactionBody:(id /* block */)a2;
- (id)getCursorForQuery:(id)a0 parameters:(id)a1;
- (id)getTableForClass:(Class)a0;
- (void)incrementalVacuumIfNeeded;
- (BOOL)openConnectionIfFileExistsToDatabaseWithName:(id)a0;
- (BOOL)setUpDatabaseWithPath:(id)a0;
- (BOOL)setUpMainDatabase;

@end
