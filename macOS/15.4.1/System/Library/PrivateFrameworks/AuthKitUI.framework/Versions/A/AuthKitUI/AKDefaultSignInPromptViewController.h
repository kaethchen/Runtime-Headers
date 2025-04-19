@class NSTextField, NSLayoutConstraint, NSImageCell, NSView, AKPaddedTextFieldCell, NSButton, NSProgressIndicator;

@interface AKDefaultSignInPromptViewController : AKSignInPromptViewController {
    long long _selectedButton;
}

@property (nonatomic) BOOL showReauthentication;
@property (retain, nonatomic) NSImageCell *imageView;
@property (retain, nonatomic) NSButton *forgotButtonForReauthentication;
@property (retain, nonatomic) NSButton *helpButton;
@property (retain, nonatomic) AKPaddedTextFieldCell *paddedUsernameCell;
@property (retain, nonatomic) NSTextField *passwordFieldForReauthentication;
@property (retain, nonatomic) NSButton *rememberPasswordCheckbox;
@property (retain, nonatomic) NSView *standardAuthenticationLoginView;
@property (retain, nonatomic) NSView *reauthenticationLoginView;
@property (retain, nonatomic) NSProgressIndicator *progressIndicatorForStandardAuthentication;
@property (retain, nonatomic) NSLayoutConstraint *standardAuthenticationForgotPasswordBottom;
@property (retain, nonatomic) NSLayoutConstraint *titleToMessageConstraint;
@property (retain, nonatomic) NSLayoutConstraint *messageToErrorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *usernameToForgotConstraint;
@property (retain, nonatomic) NSView *standardAuthenticationLoginUsernamePassword;
@property (retain, nonatomic) NSLayoutConstraint *messageToViewConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleToViewConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleToErrorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *errorToViewConstraint;
@property (retain, nonatomic) NSLayoutConstraint *standardAuthenticationLoginViewHeight;
@property (nonatomic) NSView *authenticationView;

- (id)init;
- (void).cxx_destruct;
- (void)setMessage:(id)a0;
- (void)awakeFromNib;
- (void)controlTextDidChange:(id)a0;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (id)_activeForgotButton;
- (id)_activePasswordField;
- (id)_activeProgressIndicator;
- (void)_configureWindow;
- (void)_hideError;
- (BOOL)_isRememberPasswordSelected;
- (void)_setPasswordFieldHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)alternateButtonPressed:(id)a0;
- (void)defaultButtonPressed:(id)a0;
- (void)enablePasswordInputField;
- (void)forgotPasswordPressed:(id)a0;
- (void)helpButtonPressed:(id)a0;
- (id)initWithTitle:(id)a0 andMessage:(id)a1;
- (void)otherButtonPressed:(id)a0;
- (long long)selectedButton;
- (void)setSelectedButton:(long long)a0;
- (void)showError:(id)a0;
- (void)startSpinner;
- (void)stopSpinner;

@end
