@class AIDAServiceOwnersManager;

@interface AOSUIAccountConversionSignOutController : NSObject

@property (retain, nonatomic) AIDAServiceOwnersManager *serviceOwnersManager;

- (void).cxx_destruct;
- (id)accountsForAccountManager:(id)a0;
- (void)signOutAccountsAndRemoveAppleAccount:(BOOL)a0 window:(id)a1 completion:(id /* block */)a2;
- (void)_signOutAccountsWithAccount:(id)a0 shouldRemoveAppleAccount:(BOOL)a1 window:(id)a2 aidaAccountManager:(id)a3 completion:(id /* block */)a4;

@end
