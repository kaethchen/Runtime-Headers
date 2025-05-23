@class NSURL, WBSSQLiteDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface WBSBlockedHighlightsBannerSQLiteStore : NSObject {
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteDatabase *_database;
}

@property (class, readonly, nonatomic) NSURL *defaultDatabaseURL;

- (void).cxx_destruct;
- (void)closeDatabase;
- (id)initWithDatabaseURL:(id)a0;
- (void)_closeDatabaseOnDatabaseQueue;
- (void)_configureDatabase;
- (void)_createDatabaseSchemaIfNeeded;
- (void)_openDatabase;
- (void)_openDatabaseIfNeeded;
- (long long)_schemaVersion;
- (void)clearAllBannedHighlightsWithCompletionHandler:(id /* block */)a0;
- (void)clearBlockedBannerHighlightsAfterDate:(id)a0 beforeDate:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)fetchAllBlockedHighlightsWithCompletionHandler:(id /* block */)a0;
- (void)removeBlockedBannerhighlightWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)storeBlockedHighlightWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)verifyIfHighlightIsBlockedWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
