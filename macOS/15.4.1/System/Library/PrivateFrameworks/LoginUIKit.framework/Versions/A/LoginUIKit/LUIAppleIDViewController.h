@class NSTextField, NSString, NSProgressIndicator, NSSecureTextField, NSButton;

@interface LUIAppleIDViewController : LUIPopoverViewController <NSTextFieldDelegate>

@property (retain) NSTextField *titleTextField;
@property (retain) NSTextField *infoTextField;
@property (retain) NSTextField *appleIDLabel;
@property (retain) NSTextField *appleIDTextField;
@property (retain) NSTextField *passwordLabel;
@property (retain) NSSecureTextField *passwordSecureTextField;
@property (retain) NSButton *cancelButton;
@property (retain) NSButton *resetPasswordButton;
@property (retain) NSProgressIndicator *progressIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)awakeFromNib;
- (void)controlTextDidChange:(id)a0;
- (BOOL)isTransient;
- (id)appleID;
- (void)prepareForDisplay;
- (id)appleIDPassword;
- (void)selectAppropriateFirstResponder;
- (void)_layoutContentView;
- (void)_updateResetPasswordButton;
- (void)setCancelButtonTarget:(id)a0 andSelector:(SEL)a1;
- (void)setResetPasswordButtonTarget:(id)a0 andSelector:(SEL)a1;
- (void)startProgressIndicator;
- (void)stopProgressIndicator;

@end
