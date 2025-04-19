@class NSString, NSView, NSArray, NSColor;
@protocol LAUIAuthenticationSheetViewDelegate, _LAUIAuthenticationDialog;

@interface LAUIAuthenticationSheetModernView : NSViewController <LAUIAuthenticationSheetView, _LAUIAuthenticationDialogDelegate> {
    id<_LAUIAuthenticationDialog> _form;
    NSString *_usePasswordLabel;
    NSString *_unlockLabel;
    BOOL _showingPasswordForm;
    BOOL _hasRemovedUsernameField;
}

@property (readonly, nonatomic) NSView *view;
@property (weak, nonatomic) id<LAUIAuthenticationSheetViewDelegate> delegate;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSColor *textColor;
@property (retain, nonatomic) NSString *prompt;
@property (retain, nonatomic) NSColor *promptColor;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSArray *usernames;
@property (retain, nonatomic) NSString *passwordLabelText;
@property (retain, nonatomic) NSString *passwordHint;
@property (retain, nonatomic) NSString *usePasswordButtonTitle;
@property (retain, nonatomic) NSString *unlockButtonTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)loadView;
- (BOOL)shouldUseAlternatePasswordStyle;
- (void)_performNegativeButtonAction:(id)a0;
- (void)_performUnlockButtonAction:(id)a0;
- (void)_performUsePasswordButtonAction:(id)a0;
- (void)authDialog:(id)a0 passwordDidChange:(id)a1;
- (void)authDialog:(id)a0 usernameDidEndEditing:(id)a1;
- (void)focusUsername;
- (void)focusUsernameItemWithTitle:(id)a0;
- (void)hidePrompt;
- (void)removeUsername;
- (void)setCancelButtonEnabled:(BOOL)a0;
- (void)setIcon:(id)a0 badge:(id)a1;
- (void)setUsernameEnabled:(BOOL)a0;
- (BOOL)shouldUseLabelAsPasswordPlaceholderString;
- (void)showBiometricForm;
- (void)showPasswordFormAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)showUsername;
- (void)useCustomPasswordFieldView:(id)a0;
- (void)usernameShouldRefuseFirstResponder:(BOOL)a0;

@end
