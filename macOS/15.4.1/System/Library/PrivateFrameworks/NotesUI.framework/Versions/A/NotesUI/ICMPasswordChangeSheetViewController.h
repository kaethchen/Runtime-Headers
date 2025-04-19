@class NSTextField, NSView, NSSecureTextField, ICMClickableTextView, ICAccountPassphraseManager, NSScrollView, ICMAlertSheetTouchBarController, NSTextView, NSString, NSLayoutConstraint, NSButton;

@interface ICMPasswordChangeSheetViewController : NSViewController <ICMClickableTextViewDelegate>

@property (retain, nonatomic) ICAccountPassphraseManager *passphraseManager;
@property (weak, nonatomic) NSTextField *titleLabel;
@property (weak, nonatomic) NSTextField *oldPasswordLabel;
@property (weak, nonatomic) NSTextField *passwordLabel;
@property (weak, nonatomic) NSTextField *verifyLabel;
@property (weak, nonatomic) NSTextField *hintLabel;
@property (weak, nonatomic) NSTextField *passwordAndVerifyDoNotMatchLabel;
@property (weak, nonatomic) NSTextField *passwordHintWarningLabel;
@property ICMClickableTextView *disclaimerTextView;
@property (weak, nonatomic) NSView *oldPasswordContainer;
@property NSTextView *oldPasswordIncorrectTextView;
@property (weak, nonatomic) NSLayoutConstraint *oldPasswordIncorrectTextViewHeightConstraint;
@property (weak, nonatomic) NSLayoutConstraint *disclaimerHeightConstraint;
@property (weak, nonatomic) NSSecureTextField *oldPasswordTextField;
@property (weak, nonatomic) NSSecureTextField *passwordTextField;
@property (weak, nonatomic) NSSecureTextField *verifyTextField;
@property (weak, nonatomic) NSTextField *hintTextField;
@property (weak, nonatomic) NSButton *confirmButton;
@property (weak, nonatomic) NSButton *resetNotesButton;
@property (weak, nonatomic) NSButton *cancelButton;
@property (nonatomic) BOOL isSetupForChangePassword;
@property (nonatomic) BOOL didAuthenticateWithBiometrics;
@property (readonly, nonatomic) BOOL isSetupForInitialPassword;
@property (readonly, nonatomic) BOOL passwordAndVerifyTextFieldsMatch;
@property (nonatomic) BOOL didAttemptToSubmitWithoutHint;
@property (weak, nonatomic) NSLayoutConstraint *firstFieldHeightLayoutConstraint;
@property (nonatomic) long long incorrectPasswordAttempts;
@property (weak, nonatomic) NSScrollView *oldPasswordIncorrectTextViewScrollView;
@property (retain, nonatomic) ICMAlertSheetTouchBarController *touchBarController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancelButtonPressed:(id)a0;
- (id)touchBar;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (BOOL)validateInput;
- (void)setupAccessibility;
- (void)resetTextFields;
- (void)calcAndResizeHintTextView;
- (void)clickableTextViewDidClick:(id)a0;
- (void)closeSheetWithResponse:(long long)a0;
- (void)confirmButtonPressed:(id)a0;
- (id)disclaimerWarningStringAndHasMultiplePasswordCapableAccounts:(BOOL)a0;
- (void)resetNotesPressed:(id)a0;
- (void)setOldPasswordIncorrectString:(id)a0 withColor:(id)a1;
- (void)setUpDisclaimerTextView;
- (void)setUpForAddingPasswordWithAccount:(id)a0;
- (void)setUpForChangePasswordWithAccount:(id)a0 didAuthenticateWithBiometrics:(BOOL)a1;

@end
