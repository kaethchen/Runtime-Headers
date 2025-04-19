@class NSTextField, NSString, NSView, NSProgressIndicator, NSTouchBar, OBPrivacyLinkController, NSImage, AKTouchBarController, NSButton;

@interface AKSignInPromptViewController : NSViewController <NSControlTextEditingDelegate, NSTouchBarProvider> {
    AKTouchBarController *_touchBarController;
    BOOL _createAppleIDAllowed;
}

@property (retain, nonatomic) NSTextField *titleLabel;
@property (retain, nonatomic) NSTextField *bodyLabel;
@property (retain, nonatomic) NSTextField *usernameField;
@property (retain, nonatomic) NSTextField *passwordField;
@property (retain, nonatomic) NSButton *forgotButton;
@property (retain, nonatomic) NSTextField *errorLabel;
@property (retain, nonatomic) NSProgressIndicator *progressIndicator;
@property (retain, nonatomic) NSView *privacyViewContainer;
@property (retain, nonatomic) NSButton *signInButton;
@property (retain, nonatomic) NSButton *cancelButton;
@property (retain, nonatomic) NSButton *createNewAppleIDButton;
@property (retain, nonatomic) OBPrivacyLinkController *privacyController;
@property (retain, nonatomic) NSView *privacyView;
@property (retain, nonatomic) NSImage *displayImage;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *bodyText;
@property (nonatomic) BOOL isUsernameEditable;
@property (nonatomic) BOOL isPasswordEditable;
@property (nonatomic) BOOL alwaysShowUsernameField;
@property (copy, nonatomic) NSString *initialUsername;
@property (copy, nonatomic) NSString *initialPassword;
@property (nonatomic) long long serviceType;
@property (copy, nonatomic) NSString *initialError;
@property (nonatomic) BOOL hideCreateButton;
@property (nonatomic) BOOL hideReasonString;
@property (copy, nonatomic) NSString *helpAnchor;
@property (copy, nonatomic) NSString *helpBook;
@property (nonatomic) BOOL showRememberPasswordCheckbox;
@property (nonatomic) BOOL rememberPassswordCheckedByDefault;
@property (copy, nonatomic) NSString *rememberPasswordCheckboxString;
@property (nonatomic) BOOL preventSignIn;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (copy, nonatomic) NSString *signInButtonText;
@property (copy, nonatomic) NSString *cancelButtonText;
@property (copy, nonatomic) NSString *createButtonText;
@property (copy, nonatomic) id /* block */ signInButtonAction;
@property (copy, nonatomic) id /* block */ cancelButtonAction;
@property (copy, nonatomic) id /* block */ createButtonAction;
@property (copy, nonatomic) id /* block */ forgotButtonAction;
@property (nonatomic) long long selectedButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSTouchBar *touchBar;

- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)_preparePrivacyViewWithContext:(id)a0;
- (void)showPrivacyView;
- (id)_activeForgotButton;
- (id)_activePasswordField;
- (id)_activeProgressIndicator;
- (void)_allowUserInteraction;
- (void)_closeWindow;
- (void)_disableUserInteraction;
- (id)_formatUsernameAsPhoneNumberIfNeeded:(id)a0;
- (void)configureButtonActionsIncludingCreateButton:(BOOL)a0 withLoginCompletion:(id /* block */)a1;
- (void)configureWithContext:(id)a0;
- (void)enablePasswordInputField;
- (void)refreshButtonsState;
- (void)refreshCreateAppleIDButton;
- (void)showError:(id)a0;
- (void)startSpinner;
- (void)stopSpinner;
- (void)validateUserCredentials;

@end
