@class NSURL, WBSSQLiteDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface WBSUserDefinedContentBlockerSQLiteStore : NSObject {
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteDatabase *_database;
}

+ (id)sharedStore;
+ (id)defaultDatabaseURL;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)closeDatabase;
- (id)initWithDatabaseURL:(id)a0;
- (BOOL)_isDatabaseOpen;
- (int)_createFreshDatabaseSchema;
- (int)_setDatabaseSchemaVersion:(int)a0;
- (void)_deleteActions:(id)a0;
- (void)_closeDatabase;
- (void)_deleteActionsForContentBlockerID:(long long)a0;
- (BOOL)_deleteFromAllTables;
- (void)_getActionsForContentBlockerID:(long long)a0 isGlobal:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_getAllContentBlockerActionsWithType:(id)a0 excludeHost:(id)a1 isGlobal:(BOOL)a2 completion:(id /* block */)a3;
- (void)_getAllContentBlockerHostsWithCompletionHandler:(id /* block */)a0;
- (void)_getContentBlockerWithType:(long long)a0 host:(id)a1 completionHandler:(id /* block */)a2;
- (void)_getNumberOfContentBlockersThatContainActionsWithCompletionHandler:(id /* block */)a0;
- (long long)_insertAction:(id)a0 forContentBlockerID:(long long)a1;
- (void)_insertActions:(id)a0 forContentBlockerID:(long long)a1;
- (int)_insertContentBlockerWithType:(long long)a0 host:(id)a1 excludeGlobal:(BOOL)a2;
- (int)_migrateToCurrentSchemaVersionIfNecessary;
- (BOOL)_migrateToSchemaVersion:(int)a0;
- (int)_migrateToSchemaVersion_2;
- (void)_openDatabase;
- (void)_openDatabaseIfNecessary;
- (BOOL)_tryToPerformTransactionInBlock:(id /* block */)a0;
- (void)_updateExtraAttributes:(id)a0 forContentBlockerID:(long long)a1;
- (void)createPerSiteContentBlockerForHost:(id)a0;
- (void)deleteActions:(id)a0;
- (void)deleteActionsForContentBlockerID:(long long)a0;
- (void)getAllContentBlockerActionsWithType:(id)a0 excludeHost:(id)a1 isGlobal:(BOOL)a2 completion:(id /* block */)a3;
- (void)getAllContentBlockerHostsWithCompletionHandler:(id /* block */)a0;
- (void)getGlobalContentBlockerWithCompletionHandler:(id /* block */)a0;
- (void)getNumberOfContentBlockersThatContainActionsWithCompletionHandler:(id /* block */)a0;
- (void)getPerSiteContentBlockerForHost:(id)a0 createIfNeeded:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)insertActions:(id)a0 forContentBlockerID:(long long)a1;
- (void)resetDatabaseWithCompletionHandler:(id /* block */)a0;
- (void)updateContentBlockerActionExtraAttributes:(id)a0;

@end
