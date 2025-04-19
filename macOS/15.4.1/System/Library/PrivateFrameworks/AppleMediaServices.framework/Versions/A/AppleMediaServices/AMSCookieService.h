@class NSCache, NSString;

@interface AMSCookieService : NSObject <NSCacheDelegate, AMSCookieServiceInterface>

@property (class, readonly) AMSCookieService *sharedService;

@property (readonly) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } inMemoryStorageLock;
@property (readonly) NSCache *inMemoryStorage;
@property BOOL isObservingNotifications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_currentUserIsSystemSetupUser;
+ (BOOL)_isEntitledForDirectCookieAccess;

- (id)init;
- (void).cxx_destruct;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void)_cacheCookieProperties:(id)a0 forAccount:(id)a1;
- (id)_cachedCookiePropertiesForAccount:(id)a0;
- (void)_registerForCookieChangeNotifications;
- (void)_unregisterFromCookieChangeNotifications;
- (BOOL)_useInMemoryCacheForAccount:(id)a0;
- (void)clearCookiePropertyCache;
- (void)clearCookiePropertyCacheForAccount:(id)a0;
- (void)clearDanglingCookieDatabasesWithCompletion:(id /* block */)a0;
- (void)getCookieDatabasePathForAccount:(id)a0 withCompletion:(id /* block */)a1;
- (id)getCookiePropertiesForAccount:(id)a0 cookieDatabaseOnly:(BOOL)a1 error:(id *)a2;
- (void)getCookiePropertiesForAccount:(id)a0 cookieDatabaseOnly:(BOOL)a1 withCompletion:(id /* block */)a2;
- (id)getCookiePropertiesForAccount:(id)a0 error:(id *)a1;
- (void)getCookiePropertiesForAccount:(id)a0 withCompletion:(id /* block */)a1;
- (void)updateCookiesWithCookiePropertiesToAdd:(id)a0 cookiePropertiesToRemove:(id)a1 forAccount:(id)a2 withCompletion:(id /* block */)a3;

@end
