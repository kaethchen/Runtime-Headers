@class FRJSAccount, NSArray, NSString, CKAccountStore, CKStoreAccount;

@interface FRJSAppleAccountStore : FRJSObject <CKAccountObserver>

@property (readonly) CKAccountStore *accountStore;
@property (readonly) CKStoreAccount *primaryStoreAccount;
@property (readonly, nonatomic) NSArray *accounts;
@property (readonly, nonatomic) FRJSAccount *primaryAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAccountStore:(id)a0;
- (id)accountForDSID:(id)a0;
- (void)accountStore:(id)a0 primaryAccountChanged:(id)a1;
- (id)getProperty:(id)a0;
- (id)callFunction:(id)a0 withArguments:(id)a1;
- (id)_accountForDSID:(id)a0;
- (id)_getAccounts;
- (id)_getPrimaryAppleAccount;

@end
