@class CNPersistentStoreCoordinatorFactory, NSArray, CNPersistentStoreCoordinatorUpdater, NSURL, CNQueue, CNCache;

@interface CNPersistentStoreCoordinatorCache : NSObject

@property (class, readonly) CNPersistentStoreCoordinatorCache *sharedInstance;
@property (class, readonly) NSURL *cacheKeyForAllSources;

@property (readonly, nonatomic) CNCache *cache;
@property (readonly, nonatomic) CNQueue *cacheQueue;
@property (readonly, nonatomic) CNPersistentStoreCoordinatorFactory *coordinatorFactory;
@property (readonly, nonatomic) CNPersistentStoreCoordinatorUpdater *coordinatorUpdater;
@property (readonly) NSArray *allCacheKeys;

+ (id)log;
+ (id)_cacheKeyForAccountCollection:(id)a0;
+ (void)logCreatedCoordinator:(id)a0;
+ (id)pscKeyForStoreDescription:(id)a0;

- (void).cxx_destruct;
- (id)_cacheEntryForKey:(id)a0;
- (id)_cacheEntryForKey:(id)a0 createIfNeeded:(BOOL)a1;
- (id)_pscResultFromCacheEntry:(id)a0 withStoreDescriptionKey:(id)a1;
- (void)_updateCacheEntry:(id)a0 forKey:(id)a1 withResult:(id)a2 accountCollection:(id)a3 storeDescriptionKey:(id)a4;
- (void)accountsDidChange:(id)a0 forCacheEntryWithKey:(id)a1;
- (BOOL)addAllPersistentStoresAndReturnIsMainDatabasePristine;
- (id)coordinatorForSourcesWithAccountCollection:(id)a0;
- (id)coordinatorWithCacheKey:(id)a0 storeDescription:(id)a1;
- (id)coordinatorWithCacheKey:(id)a0 storeDescription:(id)a1 createIfNeeded:(BOOL)a2;
- (id)initReadOnly:(BOOL)a0;
- (void)repairPersistenceStackIfNecessary;

@end
