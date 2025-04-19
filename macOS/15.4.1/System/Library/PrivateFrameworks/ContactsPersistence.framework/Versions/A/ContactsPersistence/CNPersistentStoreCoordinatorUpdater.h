@class CNPersistentStoreCoordinatorCache;
@protocol NSLocking, CNScheduler;

@interface CNPersistentStoreCoordinatorUpdater : NSObject {
    CNPersistentStoreCoordinatorCache *_coordinatorCache;
    BOOL _readOnly;
}

@property (readonly, nonatomic) id<CNScheduler> updaterScheduler;
@property BOOL isPristine;
@property (retain) id<NSLocking> fileLock;

- (void).cxx_destruct;
- (void)checkIfMainDatabaseInResultsIsPristine:(id)a0 forCacheKey:(id)a1;
- (id)initWithCoordinatorCache:(id)a0 readOnly:(BOOL)a1;
- (id)makeStoreBuilderWithCoordinator:(id)a0;
- (id)scopeAccountUrls:(id)a0 forCacheKey:(id)a1;
- (id)storeUrlsForCoordinator:(id)a0;
- (void)updateCacheEntriesWithKeys:(id)a0 accountURLs:(id)a1;
- (void)updatePersistentStoresForAccountsWithURLs:(id)a0;
- (void)updatePersistentStoresForAccountsWithURLs:(id)a0 cacheKey:(id)a1;
- (id)updatePersistentStoresInCacheWithKey:(id)a0 newAccounts:(id)a1;
- (void)updatePersistentStoresWithBuilder:(id)a0 addedUrls:(id)a1 removedUrls:(id)a2 resultBlock:(id /* block */)a3;
- (void)updatePersistentStoresWithBuilder:(id)a0 oldUrls:(id)a1 newUrls:(id)a2 resultBlock:(id /* block */)a3;
- (void)whileHoldingDistributedFileLock:(id /* block */)a0;

@end
