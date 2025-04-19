@class ACAccountStore, NSMutableArray;

@interface AAAccountManager : NSObject {
    ACAccountStore *_accountStore;
    NSMutableArray *_accounts;
    NSMutableArray *_originalAccounts;
    id _accountStoreDidChangeObserver;
}

@property (class, readonly) AAAccountManager *sharedManager;

- (void)dealloc;
- (void).cxx_destruct;
- (id)accountWithIdentifier:(id)a0;
- (id)accounts;
- (void)reloadAccounts;
- (void)addAccount:(id)a0;
- (void)removeAccount:(id)a0;
- (id)primaryAccount;
- (void)updateAccount:(id)a0;
- (id)_accountStore;
- (void)saveAllAccounts;
- (void)_beginObservingAccountStoreDidChangeNotification;
- (void)_stopObservingAccountStoreDidChangeNotification;
- (id)accountWithPersonID:(id)a0;
- (id)accountWithUsername:(id)a0;
- (id)accountsEnabledForDataclass:(id)a0;

@end
