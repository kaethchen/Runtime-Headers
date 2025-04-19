@class NSTextField, NSView, NSProgressIndicator, NSString, AKPaddedTextFieldCell, OBPrivacyLinkController, NSLayoutConstraint, NSButton, NSBox;

@interface AKAppleIDAuthenticationiCloudPrefPaneViewController : NSViewController <AKAppleIDAuthenticationInAppContextPasswordDelegate, NSControlTextEditingDelegate>

@property (nonatomic) NSButton *helpButton;
@property (nonatomic) NSTextField *titleLabel;
@property (nonatomic) NSTextField *bodyLabel;
@property (retain, nonatomic) NSProgressIndicator *progressIndicator;
@property (copy, nonatomic) id /* block */ passwordHandler;
@property (retain, nonatomic) OBPrivacyLinkController *privacyController;
@property (retain, nonatomic) NSBox *usernamePasswordSeparator;
@property (retain, nonatomic) NSButton *loginButton;
@property (retain, nonatomic) NSButton *forgotButton;
@property (retain, nonatomic) NSButton *createButton;
@property (retain, nonatomic) NSTextField *usernameField;
@property (retain, nonatomic) AKPaddedTextFieldCell *paddedUserNameCell;
@property (retain, nonatomic) NSTextField *passwordField;
@property (retain, nonatomic) NSView *privacyView;
@property (retain, nonatomic) NSTextField *usernameTitle;
@property (retain, nonatomic) NSTextField *passwordTitle;
@property (retain, nonatomic) NSLayoutConstraint *loginViewHeight;
@property (nonatomic, setter=setCreateEnabled:) BOOL isCreateEnabled;
@property (nonatomic, setter=setUsernameEditable:) BOOL isUsernameEditable;
@property (retain, nonatomic) NSString *initialUsername;
@property (nonatomic) long long selectedButton;
@property (retain, nonatomic) NSString *privacyBundleIdentifier;
@property (copy, nonatomic) id /* block */ loginButtonAction;
@property (copy, nonatomic) id /* block */ forgotButtonAction;
@property (copy, nonatomic) id /* block */ createButtonAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)controlTextDidChange:(id)a0;
- (void)_overrideIndividualControlState;
- (void)_addPrivacyView:(id)a0;
- (void)_disableUserInteraction;
- (id)_formatUsernameAsPhoneNumberIfNeeded:(id)a0;
- (void)_startSpinner;
- (void)_stopSpinner;
- (void)allowUserInteraction;
- (void)context:(id)a0 needsPasswordWithCompletion:(id /* block */)a1;
- (void)createAccountPressed:(id)a0;
- (void)defaultButtonPressed:(id)a0;
- (void)disableUserInteractionAndStartSpinner;
- (void)forgotPasswordPressed:(id)a0;
- (void)helpButtonPressed:(id)a0;
- (void)setPasswordFieldHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)showError:(id)a0;

@end
