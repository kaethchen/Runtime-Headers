@class NSURL, _NSHTTPAlternativeServicesStorageSqlite;

@interface _NSHTTPAlternativeServicesStorage : NSObject {
    BOOL _inMemory;
    _NSHTTPAlternativeServicesStorageSqlite *_oldStorage;
}

@property (readonly, nonatomic) NSURL *path;
@property BOOL canSuspendLocked;
@property (readonly) id underlyingStorage;

+ (id)sharedPersistentStore;

- (void).cxx_destruct;
- (id)HTTPServiceEntriesWithFilter:(id)a0;
- (id)entries;
- (id)initInMemoryStore;
- (id)initPersistentStoreWithURL:(id)a0;
- (void)removeHTTPAlternativeServiceEntriesCreatedAfterDate:(id)a0;
- (void)removeHTTPAlternativeServiceEntriesWithHost:(id)a0 port:(long long)a1;
- (void)removeHTTPAlternativeServiceEntriesWithRegistrableDomain:(id)a0;
- (void)storeHTTPServiceEntry:(id)a0;

@end
