@class NSStackView, SFPasswordAssistantInspectorController, NSPopUpButton, ADMLoginPrefs, NSDictionary, NSButton, IndicatorSecureTextField, IndicatorTextField, NSProgressIndicator, NSString, NSLayoutConstraint, NSWindow, NSTextView, NSView, NSTextField, NSPopover;

@interface ADMAddRecordController : NSObject <NSWindowDelegate> {
    NSWindow *mNewUserSheet;
    NSView *mVendedAddUserView;
    NSPopUpButton *mAccountType;
    NSLayoutConstraint *mAccountTypeViewHeightConstraint;
    double mAccountTypeViewHeight;
    NSTextField *mAccountTypeCaption;
    IndicatorTextField *mNewUserFullName;
    NSTextField *mNewUserFullNameCaption;
    NSStackView *mStackView;
    NSButton *mCreateButton;
    NSButton *mCancelButton;
    NSView *mAccountNameView;
    NSTextField *mNewUserNameCaption;
    IndicatorTextField *mNewUserName;
    NSTextField *mNewUserNameSubLabel;
    NSView *mPasswordView;
    NSTextField *mPasswordViewFirstLabel;
    IndicatorSecureTextField *mNewUserPassword;
    IndicatorSecureTextField *mNewUserPasswordVerify;
    NSTextField *mNewUserHint;
    NSProgressIndicator *mNewUserProgressIndicator;
    NSProgressIndicator *mNewUserProgressIndicatorTM;
    NSWindow *mFVTMWarning;
    ADMLoginPrefs *mLoginPrefs;
    NSTextView *mUserTextEditor;
    SFPasswordAssistantInspectorController *mPasswordAssistant;
    NSButton *mNewUserPasswordAssistantButton;
}

@property (retain) NSWindow *hostWindow;
@property (retain) NSPopover *passwordPolicyPopover;
@property (retain) NSDictionary *createAccountOptions;
@property (copy) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)addRecordController;
+ (id)errorDescriptionForProposedUnixName:(id)a0;

- (void).cxx_destruct;
- (void)ok:(id)a0;
- (void)cancel:(id)a0;
- (void)_loadBundle;
- (void)awakeFromNib;
- (void)controlTextDidBeginEditing:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (id)_createIdentity;
- (void)fvtmOk:(id)a0;
- (void)_addAccountNameView;
- (void)_addPasswordView;
- (id)_createGroup;
- (id)_createUserAccount:(BOOL)a0 administrator:(BOOL)a1 options:(id)a2;
- (id)_createUserAccountwithOptions:(id)a0;
- (BOOL)_isStackViewHidden:(id)a0;
- (void)_okActionWithStage:(unsigned char)a0;
- (void)_prepareWithOptions:(id)a0;
- (void)_resetWarningSign;
- (void)_setAccountTypePopupHidden:(BOOL)a0;
- (void)_updatePasswordUI;
- (void)_warnAboutAutoLogin;
- (void)accountTypeDidChange:(id)a0;
- (id)addUserViewWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)agepresetAction:(id)a0;
- (void)fvtmCancel:(id)a0;
- (void)help:(id)a0;
- (void)paswordAssistant:(id)a0;
- (void)runAddUserSheetForWindow:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;

@end
