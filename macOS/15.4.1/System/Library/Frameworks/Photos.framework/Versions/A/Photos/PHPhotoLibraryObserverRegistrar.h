@class PHChangeHandlingDebugger, PHUniqueObjectIDCache, NSHashTable, PLPhotoLibraryBundle;

@interface PHPhotoLibraryObserverRegistrar : NSObject {
    PLPhotoLibraryBundle *_photoLibraryBundle;
    PHChangeHandlingDebugger *_changeHandlingDebugger;
    PHUniqueObjectIDCache *_uniqueObjectIDCache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_isChangeHandlingAuthorized;
    BOOL _lock_isChangeHandlingActive;
    BOOL _lock_postsPersistentHistoryChangedNotifications;
    BOOL _lock_clearsOIDCacheAfterFetchResultDealloc;
    NSHashTable *_lock_fetchResults;
    NSHashTable *_lock_internalChangeObservers;
    NSHashTable *_lock_externalChangeObservers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pendingLock;
    BOOL _pendingLock_isChangeProcessingPending;
    double _pendingLock_lastChangeProcessingStarted;
}

@property BOOL postsPersistentHistoryChangedNotifications;
@property BOOL clearsOIDCacheAfterFetchResultDealloc;
@property (readonly) unsigned long long countOfRegisteredFetchResults;

+ (BOOL)_isInternalObserver:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)_lock_clearOIDCache;
- (BOOL)_lock_hasChangeObservers;
- (void)_lock_pauseChangeHandlingIfNeeded;
- (void)_lock_resumeChangeHandlingIfNeeded;
- (void)addObservers:(id)a0 authorizationStatus:(long long)a1;
- (void)clearIsChangeProcessingPending;
- (void)getObserversWithBlock:(id /* block */)a0;
- (id)initWithLibraryBundle:(id)a0 changeHandlingDebugger:(id)a1 uniqueObjectIDCache:(id)a2;
- (void)publishChangesToObserversOnQueue:(id)a0 withDebugEvent:(id)a1 block:(id /* block */)a2;
- (void)registerFetchResult:(id)a0;
- (void)throttlePendingChangesTimerFiredWithBlock:(id /* block */)a0;
- (void)throttlePendingChangesWithDebugEvent:(id)a0 block:(id /* block */)a1;
- (void)unregisterFetchResult:(id)a0;

@end
