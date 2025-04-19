@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface ACAccountStoreCache : NSObject {
    BOOL _allAccountTypeCached;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accountTypeCacheLock;
    NSMutableDictionary *_accountTypeCache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accountNotifyCachesLock;
    NSMutableDictionary *_accountNotifyCaches;
    NSObject<OS_dispatch_source> *_memoryNotificationSource;
}

+ (id)sharedCache;

- (id)init;
- (void).cxx_destruct;
- (void)_clearAllCaches;
- (void)_lock_cacheAccountType:(id)a0;
- (void)cacheAccountType:(id)a0;
- (void)cacheAccounts:(id)a0 forSuffix:(id)a1;
- (void)cacheAllAccountTypes:(id)a0;
- (id)cachedAccountTypeWithIdentifier:(id)a0;
- (id)cachedAccountsForSuffix:(id)a0;
- (id)cachedAllAccountTypes;
- (unsigned long long)generationForCacheSuffix:(id)a0;
- (void)setupMemoryNotifications;

@end
