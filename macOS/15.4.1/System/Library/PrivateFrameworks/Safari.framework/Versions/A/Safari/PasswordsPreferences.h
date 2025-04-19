@class NSView, InlineAuthorizationViewController, SecureWindowLockPolicyEnforcer, PMSafariAccountsViewController, NSViewController, NSLayoutConstraint, NSWindow, NSMutableArray;
@protocol PreferencesViewController;

@interface PasswordsPreferences : PreferencesModule <InlineAuthorizationViewControllerDelegate, SecureWindow> {
    NSLayoutConstraint *_accountsViewControllerWidthConstraint;
    NSLayoutConstraint *_accountsViewControllerHeightConstraint;
    NSMutableArray *_blocksToPerformAfterAuthentication;
}

@property (class, readonly, nonatomic) BOOL canOpenGeneratedPasswords;

@property (weak) NSView *containerView;
@property (readonly, weak, nonatomic) NSViewController<PreferencesViewController> *viewController;
@property (readonly, nonatomic) PMSafariAccountsViewController *accountsViewController;
@property (readonly, nonatomic) InlineAuthorizationViewController *authorizationViewController;
@property (readonly, nonatomic) SecureWindowLockPolicyEnforcer *lockPolicyEnforcer;
@property (readonly, nonatomic) NSWindow *window;
@property (readonly, nonatomic) NSWindow *windowToSecure;
@property (readonly, nonatomic) BOOL windowToSecureIsMainWindow;

+ (id)sharedInstance;
+ (void)registerDefaults;

- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })minSize;
- (void)willBeDisplayed;
- (void)awakeFromNib;
- (id)imageForPreferenceNamed:(id)a0;
- (void)initializeFromDefaults;
- (void)moduleWillBeRemoved;
- (id)preferencesNibName;
- (void)setMinSize:(struct CGSize { double x0; double x1; })a0;
- (void)_installAccountsViewController;
- (void)_installViewController:(id)a0 postModuleBeingDisplayed:(BOOL)a1;
- (void)_performBlockAfterAuthentication:(id /* block */)a0;
- (void)_refreshAuthorizationViewController;
- (void)_removeAccountsViewController;
- (void)controllerAuthorizationDidSucceed:(id)a0;
- (void)lockFromPolicyEnforcer:(id)a0;
- (void)openGeneratedPasswords;
- (void)openWithOTPAuthURL:(id)a0 onPageWithURL:(id)a1;
- (void)openWithPasswordManagerURL:(id)a0;
- (id)safariHelpAnchor;
- (BOOL)snapshotsOfPreferencesWindowArePermitted;

@end
