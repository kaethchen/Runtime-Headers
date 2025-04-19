@class NSMutableDictionary, NSMutableSet, ACUICredentialPromptViewController, NSObject;
@protocol OS_dispatch_queue;

@interface CalUIPasswordPanelController : NSObject

@property (retain) NSMutableSet *authenticatingAccountUIDs;
@property (retain) NSMutableDictionary *datesPasswordPanelWasShown;
@property (retain) NSObject<OS_dispatch_queue> *checkAuthenticatingAccountUIDsSerialQueue;
@property (retain) ACUICredentialPromptViewController *credentialPromptViewController;
@property (retain) NSObject<OS_dispatch_queue> *showCredentialPromptSerialQueue;

+ (id)sharedController;

- (id)init;
- (void).cxx_destruct;
- (id)_mainWindow;
- (BOOL)_recentlyShowedPasswordPanelForAccount:(id)a0;
- (void)showPasswordPanelForAccountID:(id)a0;
- (void)showPasswordPanelForAccountID:(id)a0 userInitiated:(BOOL)a1;
- (void)showPasswordPanelForSource:(id)a0;
- (void)showPasswordPanelForSource:(id)a0 userInitiated:(BOOL)a1;
- (void)showPasswordPanelsForUnauthenticatedAccounts;

@end
