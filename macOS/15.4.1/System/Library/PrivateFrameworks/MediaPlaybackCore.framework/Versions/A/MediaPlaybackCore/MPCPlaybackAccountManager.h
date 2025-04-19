@class NSError, NSArray, MPCPlaybackAccount, NSString, _MPCProtoDelegateInfoTokenE, NSDictionary, NSHashTable, NSObject;
@protocol OS_dispatch_group;

@interface MPCPlaybackAccountManager : NSObject <ICEnvironmentMonitorObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDictionary *_accounts;
    BOOL _needsRefreshDueToTimeout;
    BOOL _needsRefreshDueToMissingBag;
    NSObject<OS_dispatch_group> *_initialAccountGroup;
    NSHashTable *_observers;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _observersLock;
}

@property (class, readonly, nonatomic) MPCPlaybackAccountManager *sharedManagerIfExists;
@property (class, readonly, nonatomic) MPCPlaybackAccountManager *sharedManager;

@property (readonly, copy, nonatomic) NSArray *accounts;
@property (readonly, nonatomic) BOOL hasLoadedInitialAccounts;
@property (readonly, nonatomic) MPCPlaybackAccount *activeAccount;
@property (readonly, nonatomic) MPCPlaybackAccount *anyDelegationHostingAccount;
@property (readonly, nonatomic) MPCPlaybackAccount *fallbackAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_init;
- (void)start;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (id)accountForDSID:(id)a0;
- (void)_updateAccounts;
- (void)_buildAccountFromDelegatedIdentity:(id)a0 completion:(id /* block */)a1;
- (void)_buildAccountFromLocalIdentity:(id)a0 completion:(id /* block */)a1;
- (void)_enumerateIdentitiesWithCompletion:(id /* block */)a0;
- (void)_homeUserSettingsChangeNotification:(id)a0;
- (void)_setNeedsRefreshDueToMissingBag:(BOOL)a0;
- (void)_subscriptionStatusChangedNotification:(id)a0;
- (void)_updateAccountsWithAttemptCount:(long long)a0;
- (void)_userIdentityStoreChangedNotification:(id)a0;
- (id)accountForHashedDSID:(id)a0;
- (id)accountForUserIdentity:(id)a0;
- (id)getDelegateTokenBWithTokenA:(id)a0 forDSID:(unsigned long long)a1 error:(id *)a2;
- (void)performAfterLoadingAccounts:(id /* block */)a0;
- (void)updateCredentialsWithDelegateTokenE:(_MPCProtoDelegateInfoTokenE *)a0 forDSID:(unsigned long long)a1 completion:(void (^)(MPCPlaybackAccount *, NSError *))a2;
- (void)waitForAccountsWithCompletion:(id /* block */)a0;

@end
