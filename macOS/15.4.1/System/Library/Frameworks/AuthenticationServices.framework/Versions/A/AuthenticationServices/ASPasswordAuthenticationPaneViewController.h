@class NSTextField, NSString, ASCAuthorizationPresentationContext, ASCredentialRequestButtonContinue, NSLayoutConstraint;
@protocol ASPasswordAuthenticationPaneViewControllerDelegate;

@interface ASPasswordAuthenticationPaneViewController : ASCredentialRequestPaneViewController {
    ASCAuthorizationPresentationContext *_presentationContext;
    double _keyboardHeight;
    unsigned long long _persona;
    NSString *_firstPINForNewPINEntry;
    NSTextField *_titleLabel;
    NSTextField *_subtitleLabel;
    NSTextField *_usernameField;
    NSTextField *_secureTextField;
    ASCredentialRequestButtonContinue *_signInButton;
    NSLayoutConstraint *_paneHeaderStackViewBottomKeyboardConstraint;
}

@property (weak, nonatomic) id<ASPasswordAuthenticationPaneViewControllerDelegate> authenticationDelegate;

- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)_createViews;
- (void)_setConstraints;
- (id)_secureTextFieldPlaceholderText;
- (id)_titleLabelFont;
- (id)_titleLabelText;
- (double)_containerViewHorizontalMargin;
- (id)_manualPasswordEntryTitleLabelText;
- (double)_secureTextFieldInsetMargin;
- (id)_securityKeyTitleLabelText;
- (void)_setUpAndAddIconImage;
- (void)_setUpSubtitleLabel;
- (double)_signInButtonInsetMargin;
- (void)_signInButtonTapped;
- (id)_subtitleLabelFont;
- (id)_titleLabelTextColor;
- (double)_topViewMargin;
- (id)initWithPersona:(unsigned long long)a0 presentationContext:(id)a1;

@end
