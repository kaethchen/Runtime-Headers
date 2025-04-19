@class NSMutableDictionary, MCMUserIdentityCache, NSString, NSUUID, NSObject, MCMContainerClassPath;
@protocol OS_dispatch_queue;

@interface MCMContainerClassCache : NSObject <MCMContainerCacheUpdatable, MCMContainerClassCache> {
    id /* block */ _lock_concurrentWriteThroughHandler;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _resyncRequiredLock;
    BOOL _lock_resyncRequired;
}

@property (readonly, nonatomic) NSMutableDictionary *lock_cache;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *fsScanQueue;
@property (nonatomic) BOOL writeThroughEnabled;
@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic) Class cacheEntryClass;
@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSUUID *targetDiskScanUUID;
@property (retain, nonatomic) NSUUID *lastCompletedDiskScanUUID;
@property (readonly, nonatomic) MCMContainerClassPath *containerClassPath;
@property (copy, nonatomic) id /* block */ concurrentWriteThroughHandler;

- (void).cxx_destruct;
- (void)_concurrent_processURL:(id)a0 handler:(id /* block */)a1;
- (void)_processCorruptEntries:(id)a0 handler:(id /* block */)a1;
- (BOOL)_checkExistanceOfCacheEntry:(id)a0 libraryRepair:(id)a1;
- (id)_concurrent_generateCacheEntryWithURL:(id)a0 identifier:(id)a1 containerPath:(id)a2 schemaVersion:(id)a3 uuid:(id)a4 metadata:(id)a5;
- (void)_concurrent_processCorruptEntry:(id)a0 handler:(id /* block */)a1;
- (id)_concurrent_slowGenerateCacheEntryWithFileHandle:(id)a0 URL:(id)a1 identifier:(id)a2 uuid:(id)a3 schemaVersion:(id)a4 containerPath:(id)a5;
- (void)_handleUnrecoverableCorruptContainerPath:(id)a0;
- (BOOL)_identifier:(id)a0 isEqualToOtherIdentifier:(id)a1 caseSensitive:(BOOL)a2;
- (BOOL)_isEntryA:(id)a0 olderThanEntryB:(id)a1;
- (void)_lightweightAnnotateEntry:(id)a0;
- (id)_lock_rootEntryByResortingFromRootEntry:(id)a0 insertEntry:(id)a1;
- (id)_lock_rootEntryFromRootEntry:(id)a0 afterRemovingEntryForContainerPath:(id)a1;
- (void)_processURLs:(id)a0 handler:(id /* block */)a1;
- (BOOL)_queue_consumeResyncRequired;
- (void)_queue_syncWithDisk;
- (id)_setEntry:(id)a0 forIdentifier:(id)a1 containerPath:(id)a2 writeThrough:(BOOL)a3 replace:(BOOL)a4;
- (void)asyncStartSynchronization;
- (id)cacheEntryForIdentifier:(id)a0;
- (BOOL)enumerateCacheEntriesWithEnumerator:(id /* block */)a0;
- (void)forceWriteThrough;
- (id)initWithContainerClassPath:(id)a0 cacheEntryClass:(Class)a1 targetQueue:(id)a2 userIdentityCache:(id)a3;
- (void)resyncRequired;
- (id)setCacheEntry:(id)a0 forIdentifier:(id)a1;
- (id)setCacheEntry:(id)a0 forIdentifier:(id)a1 writeThrough:(BOOL)a2;
- (void)waitForSynchronizationToComplete;

@end
