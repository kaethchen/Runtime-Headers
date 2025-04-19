@class NSTextField, NSString, NSView, NSSecureTextField, NSButton;

@interface AKModalSignInViewController : AKBaseSignInViewController <AKAppleIDAuthenticationDelegate, AKAppleIDAuthenticationInAppContextAlertDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate, NSTextFieldDelegate>

@property (retain, nonatomic) NSView *containerView;
@property (weak, nonatomic) NSTextField *titleLabel;
@property (weak, nonatomic) NSTextField *bodyLabel;
@property (weak, nonatomic) NSSecureTextField *passwordField;
@property (weak, nonatomic) NSTextField *errorLabel;
@property (weak, nonatomic) NSButton *signInButton;
@property (weak, nonatomic) NSButton *iForgotButton;
@property (nonatomic) BOOL hideTitle;
@property (retain, nonatomic) NSString *customBodyText;
@property (retain, nonatomic) NSString *customButtonTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)_buttonTitle;
- (void)awakeFromNib;
- (void)controlTextDidChange:(id)a0;
- (void)loadView;
- (id)_bodyText;
- (BOOL)_isUsingPasscodeAuth;
- (void)_setupViews;
- (BOOL)_shouldHidePasswordField;
- (void)_updateSignInButtonEnabled:(BOOL)a0;
- (void)context:(id)a0 needsPasswordWithCompletion:(id /* block */)a1;
- (void)displayAlertForContext:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)forgotPasswordPressed:(id)a0;
- (void)signInButtonPressed:(id)a0;

@end
