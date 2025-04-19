@class NSTextField, NSView, NSProgressIndicator, NSString, AKAppleIDAuthenticationController, AKRoundLoginContainerView, NSLayoutConstraint, NSButton;

@interface AKInlineSignInViewController : AKBaseSignInViewController <AKAppleIDAuthenticationDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate, AKAppleIDAuthenticationInAppContextAlertDelegate> {
    BOOL _usesDarkMode;
    BOOL _usesCenteringContainerView;
    AKAppleIDAuthenticationController *_authenticationController;
    BOOL _userInteractionEnabled;
    BOOL _isCreateAppleIDAllowed;
}

@property (retain, nonatomic) NSView *signInView;
@property (retain, nonatomic) NSTextField *usernameTextField;
@property (retain, nonatomic) NSTextField *passwordTextField;
@property (retain, nonatomic) NSTextField *errorTextField;
@property (retain, nonatomic) NSButton *signInButton;
@property (retain, nonatomic) NSButton *forgotButton;
@property (retain, nonatomic) NSButton *createAccountButton;
@property (retain, nonatomic) AKRoundLoginContainerView *roundLoginContainerView;
@property (retain, nonatomic) NSLayoutConstraint *roundLoginContainerHeight;
@property (retain, nonatomic) NSProgressIndicator *indeterminateSpinner;
@property (copy, nonatomic) id /* block */ passwordHandler;
@property (nonatomic) BOOL wantsAuthenticationProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)awakeFromNib;
- (void)controlTextDidChange:(id)a0;
- (void)loadView;
- (void)viewDidAppear;
- (id)authenticationController;
- (void)authenticationController:(id)a0 shouldContinueWithAuthenticationResults:(id)a1 error:(id)a2 forContext:(id)a3 completion:(id /* block */)a4;
- (BOOL)_attemptDisplayAlertForError:(id)a0;
- (void)_authenticateWithCredentialRecovery:(BOOL)a0 needsNewAppleID:(BOOL)a1;
- (id)_formatUsernameAsPhoneNumberIfNeeded:(id)a0;
- (BOOL)_isSatisfyingPasswordRequirements;
- (void)_provideDelegateWithAuthResults:(id)a0 error:(id)a1;
- (void)_setPasswordFieldHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)allowUserInteraction:(BOOL)a0;
- (void)context:(id)a0 needsPasswordWithCompletion:(id /* block */)a1;
- (void)createAccountButtonClicked:(id)a0;
- (void)displayAlertForContext:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)forgotButtonClicked:(id)a0;
- (void)refreshButtonsState;
- (void)setUsesDarkMode:(BOOL)a0;
- (void)showIndeterminateSpinner:(BOOL)a0;
- (void)signInButtonClicked:(id)a0;
- (void)updateUIToReflectDarkMode;
- (BOOL)usesDarkMode;

@end
