@class NSArray, NSString, ACAccountStore, ACAccount, NSCache;
@protocol CKDAccountStoreDelegate;

@interface CKDAccountStore : NSObject <NSCacheDelegate> {
    NSCache *_cache;
}

@property (class, readonly, nonatomic) CKDAccountStore *sharedAccountStore;

@property (weak) id<CKDAccountStoreDelegate> delegate;
@property unsigned long long countLimit;
@property (readonly, copy) NSArray *cachedAccounts;
@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (readonly, copy, nonatomic) ACAccount *primaryAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void)invalidateCache;
- (id)accountWithIdentifier:(id)a0;
- (id)initWithAccountStore:(id)a0;
- (id)_primaryAccount;
- (id)_accountForKey:(id)a0 matchBlock:(id /* block */)a1 createBlock:(id /* block */)a2;
- (id)accountWithAltDSID:(id)a0;
- (id)primaryAccountWithPersonaIdentifier:(id)a0;

@end
