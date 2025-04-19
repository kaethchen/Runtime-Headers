@class ABPersistentStoreCoordinatorMap;

@interface ABPersistentStoreCoordinatorUpdater : NSObject {
    ABPersistentStoreCoordinatorMap *_coordinatorMap;
    BOOL _readOnly;
}

@property BOOL isPristine;

- (void).cxx_destruct;
- (void)checkIfMainDatabaseInResultsIsPristine:(id)a0 forCacheKey:(id)a1;
- (id)makeStoreBuilderWithCoordinator:(id)a0;
- (id)scopeAccountUrls:(id)a0 forCacheKey:(id)a1;
- (id)storeUrlsForCoordinator:(id)a0;
- (id)updatePersistentStoresInCacheWithKey:(id)a0 newAccounts:(id)a1;
- (void)updatePersistentStoresWithBuilder:(id)a0 addedUrls:(id)a1 removedUrls:(id)a2 resultBlock:(id /* block */)a3;
- (void)updatePersistentStoresWithBuilder:(id)a0 oldUrls:(id)a1 newUrls:(id)a2 resultBlock:(id /* block */)a3;
- (id)initWithCoordinatorMap:(id)a0 readOnly:(BOOL)a1;
- (void)updatePersistentStoresWithDescriptions:(id)a0;

@end
