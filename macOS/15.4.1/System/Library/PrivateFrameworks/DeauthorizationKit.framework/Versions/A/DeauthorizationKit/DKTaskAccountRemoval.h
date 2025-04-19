@class AOSUISignOutFlowControllerDelegate, NSString, ACAccountStore, NSDictionary, ACAccount, NSWindow, AIDAAccountManager, FMDUIFMMController, NSNumber;
@protocol AIDAServiceOwnerProtocol;

@interface DKTaskAccountRemoval : DKTask <AKAppleIDAuthenticationDelegate, AIDAAccountManagerDelegate>

@property (retain) ACAccountStore *store;
@property (retain) id<AIDAServiceOwnerProtocol> serviceOwnersManager;
@property (retain) AIDAAccountManager *accountManager;
@property (retain) ACAccount *primaryAccount;
@property (retain) AOSUISignOutFlowControllerDelegate *signOutDelegate;
@property (retain) FMDUIFMMController *findMyUIController;
@property (retain) NSString *appleIDUsername;
@property (retain) NSString *appleIDPassword;
@property (retain) NSNumber *uid;
@property (retain) NSString *adminPassword;
@property (retain) NSDictionary *authenticationResults;
@property (retain) NSWindow *hostWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)findMyEnabled;

- (void).cxx_destruct;
- (id)identifier;
- (void)runWithCompletion:(id /* block */)a0;
- (id)initWithHostWindow:(id)a0;
- (id)taskDescription;
- (void)authenticationController:(id)a0 shouldContinueWithAuthenticationResults:(id)a1 error:(id)a2 forContext:(id)a3 completion:(id /* block */)a4;
- (id)accountsForAccountManager:(id)a0;
- (BOOL)needsToRun;
- (BOOL)runWithError:(id *)a0;
- (id)currentFindMyMacAccountUsername;
- (id)_accountForService:(id)a0 matchingAltDSID:(id)a1 DSID:(id)a2;
- (void)_authenticateWithContextAndCompletion:(id /* block */)a0;
- (void)_removeAccountShowingUIWithCompletion:(id /* block */)a0;
- (void)_removeAccounts:(id)a0 completion:(id /* block */)a1;
- (void)_removeAccountsWithCompletion:(id /* block */)a0;
- (void)_removeAccountsWithContextAndCompletion:(id /* block */)a0;
- (void)_signOutPrimaryAppleAccountWithCompletion:(id /* block */)a0;
- (id)allAccountsToRemove;
- (id)currentAppleAccountUsername;
- (void)disableFindMyWithAuthenticationContext:(id)a0 completion:(id /* block */)a1;
- (void)disableFindMyWithAuthenticationResults:(id)a0 authenticationContext:(id)a1 completion:(id /* block */)a2;
- (void)disableFindMyWithAuthenticationResults:(id)a0 completion:(id /* block */)a1;
- (void)disableFindMyWithCompletion:(id /* block */)a0;
- (BOOL)findMyEnabled;
- (id)initWithUsername:(id)a0 password:(id)a1 options:(id)a2;
- (void)removeAppleAccountsWithCompletion:(id /* block */)a0;
- (BOOL)requiresSeparateSignOuts;

@end
