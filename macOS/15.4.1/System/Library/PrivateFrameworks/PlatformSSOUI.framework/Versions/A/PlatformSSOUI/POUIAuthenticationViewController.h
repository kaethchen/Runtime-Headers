@class NSTextField, POConfigurationManager, POAgentAuthenticationProcess, NSProgressIndicator, NSAlert, NSSecureTextField, NSButton;
@protocol POUIAuthenticationViewControllerDelegate;

@interface POUIAuthenticationViewController : NSViewController

@property (weak) NSTextField *messageLabel;
@property (weak) NSTextField *userNameTextField;
@property (weak) NSSecureTextField *passwordTextField;
@property (weak) NSButton *loginCancelButton;
@property (weak) NSButton *loginButton;
@property (weak) NSProgressIndicator *loginProgressIndicator;
@property (retain) POConfigurationManager *configurationManager;
@property BOOL cancelled;
@property (retain) POAgentAuthenticationProcess *process;
@property (weak) id<POUIAuthenticationViewControllerDelegate> delegate;
@property BOOL syncPassword;
@property (retain) NSAlert *alert;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)cancelClicked:(id)a0;
- (void)handleSignInProgressIsRunning:(BOOL)a0;
- (void)loginClicked:(id)a0;
- (id)showLoginForUserName:(id)a0;

@end
