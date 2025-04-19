@class NSTextField, NSString, NSSecureTextField, LUISimplePopover, LUIPasswordPolicyDetailsPopover, NSMutableArray, NSLayoutConstraint, NSImageView, NSButton, ODRecord;

@interface LUIPasswordChangeViewController : LUIPopoverViewController <NSTextFieldDelegate> {
    NSImageView *_errorImageView;
    NSMutableArray *_errorImageViewConstraints;
    int _mode;
    LUISimplePopover *_errorPopover;
    LUIPasswordPolicyDetailsPopover *_detailsPopover;
    BOOL _canShowDetailsPopover;
    ODRecord *_userRecord;
    BOOL _observing;
}

@property (retain) NSTextField *titleTextField;
@property (retain) NSTextField *instructionsTextField;
@property (retain) NSTextField *firstPasswordLabel;
@property (retain) NSSecureTextField *firstPasswordTextField;
@property (retain) NSTextField *secondPasswordLabel;
@property (retain) NSSecureTextField *secondPasswordTextField;
@property (retain) NSTextField *verifyLabel;
@property (retain) NSSecureTextField *verifyTextField;
@property (retain) NSTextField *passwordHintLabel;
@property (retain) NSTextField *recommendedLabel;
@property (retain) NSTextField *hintTextField;
@property (retain) NSButton *cancelButton;
@property (retain) NSButton *changePasswordButton;
@property (retain) NSLayoutConstraint *secondPasswordConstraint;
@property long long subMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)setMode:(int)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (void)controlTextDidChange:(id)a0;
- (BOOL)isTransient;
- (int)mode;
- (id)hint;
- (void)_hideError;
- (id)updatedPassword;
- (void)_layoutContentView;
- (void)_showErrorForField:(id)a0;
- (void)_showPasswordPolicyDetailsPopover:(id)a0;
- (void)_updateChangePasswordButton;
- (void)_updatePasswordPolicy;
- (id)firstPassword;
- (void)makeFirstResponder;
- (void)setCancelButtonTarget:(id)a0 andSelector:(SEL)a1;
- (void)setChangePasswordButtonTarget:(id)a0 andSelector:(SEL)a1;
- (void)setUserRecord:(id)a0;
- (void)showFirstPasswordError;
- (void)showNewPasswordError:(id)a0;
- (void)showVerifyPasswordError;
- (id)verifyPassword;

@end
