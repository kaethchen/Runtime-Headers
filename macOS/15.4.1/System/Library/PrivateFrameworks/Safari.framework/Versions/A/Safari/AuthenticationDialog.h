@class NSTextField, AuthenticationSheetRequest, NSLayoutConstraint, AuthenticationPanel, NSButton;

@interface AuthenticationDialog : NSObject {
    AuthenticationPanel *_panel;
    NSLayoutConstraint *_smallLabelToSeparateRealmLabelVerticalSpacingConstraint;
    NSLayoutConstraint *_logInButtonToRememberThisPasswordCheckboxVerticalSpacingConstraint;
    NSTextField *_mainLabel;
    NSTextField *_passwordTextField;
    NSTextField *_smallLabel;
    NSTextField *_usernameTextField;
    NSButton *_rememberPasswordCheckbox;
    AuthenticationSheetRequest *_sheetRequest;
    BOOL _useStopModalWithCodeToEndAuthenticationDialog;
}

- (void).cxx_destruct;
- (void)cancel:(id)a0;
- (BOOL)loadNib;
- (void)logIn:(id)a0;
- (void)_endAuthenticationDialogWithReturnCode:(long long)a0;
- (void)_handleAuthenticationDialogReturnCode:(long long)a0;
- (void)_hideRememberThisPasswordCheckboxIfNecessary;
- (id)initWithSheetRequest:(id)a0;
- (void)runAsSheetOnWindow:(id)a0;

@end
