@class CKDemoAccount, NSArray, CKStoreClient, ISStoreAccount, CKStoreAccount;

@interface CKAccountStore : NSObject

@property (readonly) CKStoreClient *storeClient;
@property (readonly) NSArray *knownAccounts;
@property (readonly) CKStoreAccount *primaryStoreAccount;
@property (readonly) BOOL primaryAccountIsPresentAndSignedIn;
@property (readonly) BOOL isDemoModeEnabled;
@property (readonly) CKDemoAccount *demoAccount;
@property (readonly) NSArray *accounts;
@property (readonly) ISStoreAccount *primaryAccount;

+ (id)accountStoreForStoreClient:(id)a0;
+ (id)sharedAccountStore;

- (void).cxx_destruct;
- (void)addAccount:(id)a0;
- (id)accountWithAppleID:(id)a0;
- (id)initWithStoreClient:(id)a0;
- (id)accountForDSID:(id)a0;
- (void)signOut;
- (id)_initWithStoreClient:(id)a0;
- (id)addAccountObserver:(id)a0;
- (id)addPrimaryAccountObserverWithBlock:(id /* block */)a0;
- (id)eligibilityForService:(long long)a0;
- (void)getEligibilityForService:(long long)a0 completionBlock:(id /* block */)a1;
- (void)getPasswordSettingsWithCompletionBlock:(id /* block */)a0;
- (void)getTouchIDStateForAccount:(id)a0 completionBlock:(id /* block */)a1;
- (void)removeAccountObserver:(id)a0;
- (void)removePrimaryAccountObserver:(id)a0;
- (void)setTouchIDStateForAccount:(id)a0 state:(long long)a1 completionBlock:(id /* block */)a2;
- (void)signIn;
- (void)signInWithSuggestedAppleID:(id)a0 allowChangeOfAppleID:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)signOutWithCompletionHandler:(id /* block */)a0;
- (id)storeAccountForAppleID:(id)a0;
- (id)storeAccountForDSID:(id)a0;
- (void)updatePasswordSettings:(id)a0 completionBlock:(id /* block */)a1;
- (void)viewAccount;

@end
