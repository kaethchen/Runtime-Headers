@class EFSQLSchema, NSString, EMForceBlankCellsController, EDPersistenceDatabaseConnectionPool, EDProtectedDatabasePersistence, NSObject, EFSQLPropertyMapper;
@protocol OS_os_log, EFSQLQueryLogging, EFProtectedFile;

@interface EDPersistenceDatabase : NSObject <EDPersistenceDatabaseConnectionPoolDelegate, EFLoggable, EDPersistenceDatabaseConnectionDelegate> {
    id<EFProtectedFile> _protectedDatabaseFile;
    EDPersistenceDatabaseConnectionPool *_connectionPool;
    EMForceBlankCellsController *_blankCellsController;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EDProtectedDatabasePersistence *protectedDatabasePersistence;
@property (readonly, nonatomic) NSString *basePath;
@property (readonly, nonatomic) NSString *databaseName;
@property (readonly, nonatomic) NSString *fullPath;
@property (readonly, nonatomic) BOOL databaseIsCorrupt;
@property (readonly, nonatomic) BOOL enforceDataProtection;
@property BOOL setupIsComplete;
@property (readonly, nonatomic) BOOL isNestedDatabaseCall;
@property (readonly, nonatomic) BOOL writersAreWaiting;
@property (readonly, nonatomic) EFSQLSchema *schema;
@property (readonly, nonatomic) EFSQLSchema *protectedSchema;
@property (readonly, nonatomic) EFSQLPropertyMapper *propertyMapper;
@property (readonly, nonatomic) BOOL protectedDatabaseIsAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *protectedDatabasePath;
@property (readonly, nonatomic) id<EFSQLQueryLogging> queryLogger;

- (id)init;
- (void).cxx_destruct;
- (id)valueForProperty:(id)a0;
- (void)setValue:(id)a0 forProperty:(id)a1;
- (void)checkInConnection:(id)a0;
- (void)closeAllConnections;
- (BOOL)__performReadWithCaller:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)__performWriteWithCaller:(id)a0 usingBlock:(id /* block */)a1;
- (id)checkOutConnectionIsWriter:(BOOL)a0;
- (void)handleExceptionDuringDatabaseBlock:(id)a0;
- (id)initWithBasePath:(id)a0 databaseName:(id)a1 minimumCachedReaderConnections:(unsigned long long)a2 schema:(id)a3 protectedSchema:(id)a4 propertyMapper:(id)a5 protectedDatabasePersistence:(id)a6;
- (id)openConnectionIsWriter:(BOOL)a0;
- (void)performBlockAfterTransaction:(id /* block */)a0;
- (BOOL)performDatabaseSetupUsingTransaction:(BOOL)a0 block:(id /* block */)a1;
- (void)performDatabaseWorkInBlockWithHighPriority:(id /* block */)a0;
- (BOOL)performWithOptions:(unsigned long long)a0 caller:(id)a1 block:(id /* block */)a2;
- (void)reconcileJournalWithCompletionBlock:(id /* block */)a0;
- (id)requestProtectedDatabaseBackgroundProcessingForDuration:(double)a0 error:(id *)a1;
- (void)scheduleRecurringActivity;
- (void)test_tearDown;
- (id)urlFileProtectionTypeForDatabaseType:(long long)a0;
- (id)urlForDatabasePath:(id)a0 type:(long long)a1;
- (id)urlForDatabasePath:(id)a0 type:(long long)a1 fileProtection:(id)a2;

@end
