@class NSImageView, AKLargeSignInTextFieldBackgroundView, NSView, NSVisualEffectView, NSStackView;

@interface AKLargeSignInPromptViewController : AKSignInPromptViewController

@property (retain, nonatomic) NSStackView *contentStackView;
@property (retain, nonatomic) NSImageView *iconImageView;
@property (retain, nonatomic) NSView *authPromptContainer;
@property (retain, nonatomic) AKLargeSignInTextFieldBackgroundView *passwordFieldBackgroundView;
@property (retain, nonatomic) NSView *separatorView;
@property (retain, nonatomic) NSView *bottomBar;
@property (retain, nonatomic) NSVisualEffectView *bottomBarVisualEffectView;

- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)cancelButtonPressed:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (id)_attributedLinkString:(id)a0;
- (void)_configureBodyLabel;
- (void)_configureBottomBar;
- (void)_configureErrorField;
- (void)_configureIForgotButton;
- (void)_configureIcon;
- (void)_configurePasswordField;
- (void)_configurePrivacyView;
- (void)_configureTitleLabel;
- (void)_configureUsernameField;
- (void)_configureWindow;
- (void)_hideError;
- (void)createButtonPressed:(id)a0;
- (void)enablePasswordInputField;
- (void)forgotPasswordPressed:(id)a0;
- (void)signInButtonPressed:(id)a0;

@end
