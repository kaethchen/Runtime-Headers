@class NSWindow, NSMutableDictionary;

@interface MMAccountMgr : NSObject {
    NSMutableDictionary *_accounts;
    NSWindow *_parentWindow;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accountContextLock;
}

@property (retain) NSWindow *parentWindow;

+ (id)sharedMgr;
+ (id)_loginDictionaryWithAuthResults:(id)a0;
+ (void)showSignInError:(id)a0 usingWindow:(id)a1 forAccountID:(id)a2 andPassword:(id)a3 authenticationResults:(id)a4;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)parentWindow;
- (void)setParentWindow:(id)a0;
- (void)authenticateAccount:(id)a0 withPassword:(id)a1 withAuthResults:(id)a2 delegatePlist:(id)a3;
- (void)signOutAccount:(id)a0;
- (void)accountDataChanged:(id)a0;
- (id)accountWithID:(id)a0 createIfMissing:(BOOL)a1;
- (id)accountWithID:(id)a0 createIfMissing:(BOOL)a1 fetchAccountImage:(BOOL)a2;
- (void)authenticateAccount:(id)a0 withPassword:(id)a1 delegatePlist:(id)a2;
- (BOOL)completeSignin:(id)a0 withPassword:(id)a1 delegatePlist:(id)a2;
- (BOOL)completeSignin:(id)a0 withPassword:(id)a1 withAuthContext:(id)a2 delegatePlist:(id)a3 mobileMePlist:(id)a4;
- (void)deactivateAccount:(id)a0;
- (void)deactivateCompleted:(id)a0;
- (void)deactivateFailed:(id)a0;
- (void)deregisterNotifications;
- (void)didSelect;
- (void)didUnselect;
- (void)finishedSetup:(id)a0;
- (void)refreshCompleted:(id)a0;
- (void)serviceDataChanged:(id)a0;
- (void)serviceEnableChanged:(id)a0;
- (void)serviceStatusChanged:(id)a0;
- (void)signInAccount:(id)a0 withPassword:(id)a1 context:(id)a2;
- (void)signInCompleted:(id)a0;
- (void)signInFailed:(id)a0;
- (void)signInFailedCompletion;
- (void)signOutAccount:(id)a0 withOptions:(id)a1;
- (void)tosDeniedFailed:(id)a0;
- (void)verifyCompleted:(id)a0;
- (void)verifyFailed:(id)a0;
- (void)willSelect;
- (void)willUnselect;

@end
