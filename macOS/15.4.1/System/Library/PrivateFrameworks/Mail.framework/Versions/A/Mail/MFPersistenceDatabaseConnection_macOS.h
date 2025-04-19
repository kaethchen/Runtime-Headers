@class NSArray;

@interface MFPersistenceDatabaseConnection_macOS : EDPersistenceDatabaseConnection {
    NSArray *_searchContext;
    BOOL _databaseIsRemote;
}

@property (nonatomic) double busyStartTime;
@property (nonatomic) BOOL needsUnreadCountUpdate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)vacuum;
- (unsigned int)_cacheSize;
- (BOOL)attachProtectedDatabaseWithName:(id)a0;
- (int)configureSQLConnection;
- (void)detachProtectedDatabase;
- (void)handleSQLResult:(int)a0 message:(id)a1;
- (id)initWithBasePath:(id)a0 databaseName:(id)a1 isWriter:(BOOL)a2 delegate:(id)a3;
- (BOOL)performWithOptions:(unsigned long long)a0 transactionError:(id *)a1 block:(id /* block */)a2;
- (BOOL)protectedDatabaseAttached;
- (void)_handleDatabaseException:(id)a0;
- (unsigned int)_pageSize;
- (BOOL)_pathIsRemote:(id)a0;

@end
