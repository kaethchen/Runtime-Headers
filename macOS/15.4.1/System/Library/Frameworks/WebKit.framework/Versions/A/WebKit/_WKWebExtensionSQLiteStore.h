@class _WKWebExtensionSQLiteDatabase, NSString, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface _WKWebExtensionSQLiteStore : NSObject {
    NSString *_uniqueIdentifier;
    NSURL *_directory;
    _WKWebExtensionSQLiteDatabase *_database;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    BOOL _useInMemoryDatabase;
}

@property (readonly, nonatomic) BOOL useInMemoryDatabase;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (void)_vacuum;
- (BOOL)_isDatabaseOpen;
- (id)_deleteDatabase;
- (int)_createFreshDatabaseSchema;
- (int)_currentDatabaseSchemaVersion;
- (int)_databaseSchemaVersion;
- (id)_databaseURL;
- (id)_deleteDatabaseFileAtURL:(id)a0 reopenDatabase:(BOOL)a1;
- (id)_deleteDatabaseIfEmpty;
- (id)_handleSchemaVersioningWithDeleteDatabaseFileOnError:(BOOL)a0;
- (BOOL)_isDatabaseEmpty;
- (int)_migrateToCurrentSchemaVersionIfNeeded;
- (id)_openDatabase:(id)a0 withAccessType:(long long)a1 deleteDatabaseFileOnError:(BOOL)a2;
- (BOOL)_openDatabaseIfNecessaryReturningErrorMessage:(id *)a0;
- (BOOL)_openDatabaseIfNecessaryReturningErrorMessage:(id *)a0 createIfNecessary:(BOOL)a1;
- (int)_resetDatabaseSchema;
- (id)_savepointNameFromUUID:(id)a0;
- (int)_setDatabaseSchemaVersion:(int)a0;
- (void)commitSavepoint:(id)a0 completionHandler:(id /* block */)a1;
- (void)createSavepointWithCompletionHandler:(id /* block */)a0;
- (void)deleteDatabaseWithCompletionHandler:(id /* block */)a0;
- (id)initWithUniqueIdentifier:(id)a0 directory:(id)a1 usesInMemoryDatabase:(BOOL)a2;
- (void)rollbackToSavepoint:(id)a0 completionHandler:(id /* block */)a1;

@end
