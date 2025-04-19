@class NSArray, NSString, NSURL, NSObject, WBSSQLiteDatabase;
@protocol OS_dispatch_queue;

@interface WBSContentBlockerStatisticsSQLiteStore : NSObject <WBSContentBlockerStatisticsStore> {
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteDatabase *_database;
}

@property (class, readonly, nonatomic) WBSContentBlockerStatisticsSQLiteStore *standardStore;
@property (class, readonly, nonatomic) NSArray *allStores;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_databaseURLForProfileWithIdentifier:(id)a0;
+ (id)_defaultDatabaseURL;
+ (BOOL)storeExistsForProfileWithIdentifier:(id)a0;
+ (id)storeForProfileWithIdentifier:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)closeDatabase;
- (id)initWithDatabaseURL:(id)a0;
- (void)_deleteDatabase;
- (void)blockedThirdPartiesAfter:(id)a0 before:(id)a1 onFirstParty:(id)a2 completionHandler:(id /* block */)a3;
- (void)recordThirdPartyResourceBlocked:(id)a0 onFirstParty:(id)a1 completionHandler:(id /* block */)a2;
- (void)_clearStatisticsAfter:(id)a0 before:(id)a1;
- (void)_clearStatisticsForDomain:(id)a0;
- (void)_closeDatabaseOnDatabaseQueue;
- (BOOL)_createDatabaseSchemaIfNeeded;
- (void)_deleteUnusedDomains;
- (long long)_idForFirstPartyWithHighLevelDomain:(id)a0;
- (long long)_idForThirdPartyWithHighLevelDomain:(id)a0;
- (BOOL)_openDatabaseIfNeeded;
- (BOOL)_openDatabaseIfNeededFallingBackToInMemory:(BOOL)a0;
- (long long)_schemaVersion;
- (BOOL)_tryOpenDatabase:(id *)a0;
- (void)blockedThirdPartiesAfter:(id)a0 before:(id)a1 completionHandler:(id /* block */)a2;
- (void)clearAllStatisticsWithCompletionHandler:(id /* block */)a0;
- (void)clearStatisticsAfter:(id)a0 before:(id)a1;
- (void)clearStatisticsForDomains:(id)a0;

@end
