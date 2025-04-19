@class NSString, NSHashTable;
@protocol FBSApplicationDataStoreRepositoryClient;

@interface FBSApplicationDataStoreMonitor : NSObject <FBSApplicationDataStoreRepositoryClientObserver> {
    id<FBSApplicationDataStoreRepositoryClient> _client;
    BOOL _clientNeedsCheckin;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_lock_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)remove:(id)a0;
- (id)initWithClient:(id)a0;
- (void)add:(id)a0;
- (BOOL)_hasObserver:(id)a0;
- (void)applicationDataStoreRepositoryClient:(id)a0 application:(id)a1 changedObject:(id)a2 forKey:(id)a3;
- (void)applicationDataStoreRepositoryClient:(id)a0 storeInvalidatedForApplication:(id)a1;

@end
