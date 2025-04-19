@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface ACDAccountCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachesLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _expirersLock;
    NSObject<OS_dispatch_source> *_memoryNotificationSource;
}

@property unsigned int cacheValidityDuration;
@property (retain) NSMutableDictionary *cachedAccountsByID;
@property (retain) NSMutableDictionary *cachedAccountIDsByType;
@property (retain) NSMutableDictionary *cachedAccountTypesByID;
@property (retain) NSMutableDictionary *expirersByID;
@property (retain) NSMutableDictionary *generationWritersByKey;

- (void).cxx_destruct;
- (void)clearCache;
- (void)cacheAccountType:(id)a0;
- (void)setupMemoryNotifications;
- (void)_caches_lock_cacheAccounts:(id)a0 forType:(id)a1 justActive:(BOOL)a2;
- (void)_clearCacheIncludingRemote:(BOOL)a0;
- (id)_expirerIdentifierForAccountTypeID:(id)a0;
- (void)_expirerScheduleForAccountIdentifier:(id)a0;
- (id)_keyForType:(id)a0 justActive:(BOOL)a1;
- (void)_lock_cacheAccount:(id)a0;
- (void)_lock_cacheAccountCopy:(id)a0;
- (void)_lock_cacheGenerationForAccounts:(id)a0 cacheSuffix:(id)a1;
- (void)_lock_cacheParent:(id)a0;
- (id)_lock_nonCopyOfAccountWithIdentifier:(id)a0;
- (void)_lock_removeAccountsForType:(id)a0;
- (void)_lock_resetAllAccountTypeIdentifiers;
- (void)_lock_resetCacheGenerationsForChildren:(id)a0 recurseDepth:(unsigned long long)a1 store:(id)a2;
- (void)_lock_resetGenerationForType:(id)a0;
- (id)_lock_writerForKey:(id)a0;
- (void)_resetParentAccountForCachedAccountIfNeeded:(id)a0;
- (void)cacheAccount:(id)a0;
- (void)cacheAccounts:(id)a0 forType:(id)a1 justActive:(BOOL)a2;
- (void)cacheGenerationForAccounts:(id)a0 cacheSuffix:(id)a1;
- (id)cachedAccountForIdentifier:(id)a0;
- (id)cachedAccountTypeForID:(id)a0;
- (id)cachedAccountsOfType:(id)a0 justActive:(BOOL)a1;
- (id)cachedAccountsOfType:(id)a0 justActive:(BOOL)a1 fetchBlock:(id /* block */)a2;
- (id)initWithValidityDuration:(unsigned int)a0;
- (void)removeAccount:(id)a0 store:(id)a1;
- (void)removeAccountType:(id)a0;

@end
