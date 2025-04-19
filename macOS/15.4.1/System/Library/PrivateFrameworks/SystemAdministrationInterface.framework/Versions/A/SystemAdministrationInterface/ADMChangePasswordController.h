@class NSPopover, SFPasswordAssistantInspectorController, MMPasswordChangeWebKitViewController, NSObject, NSButton, NSImageView, IndicatorSecureTextField, NSLayoutConstraint, NSImage, NSString, NSWindow, NSSecureTextField, NSView, ADMUser, NSTextField, ODRecord;
@protocol OS_dispatch_queue;

@interface ADMChangePasswordController : NSObject

@property (retain) NSWindow *hostWindow;
@property (retain) ADMUser *user;
@property (retain) ODRecord *odUserRecord;
@property (retain) SFPasswordAssistantInspectorController *passwordAssistant;
@property (retain) MMPasswordChangeWebKitViewController *webKitViewController;
@property (retain) NSPopover *passwordPolicyPopover;
@property (retain) NSButton *changeLocalPassswordAssistantButton;
@property (retain) NSButton *resetPassswordAssistantButton;
@property unsigned long long changePasswordOptions;
@property (copy) id /* block */ changePasswordCompletionBlock;
@property (retain) NSObject<OS_dispatch_queue> *wrkQueue;
@property (retain) NSWindow *changeLocalPassswordSheet;
@property (retain) IndicatorSecureTextField *changeLocalPassswordOld;
@property (retain) IndicatorSecureTextField *changeLocalPassswordNew;
@property (retain) NSSecureTextField *changeLocalPassswordVerify;
@property (retain) NSTextField *changeLocalPassswordHint;
@property (retain) NSTextField *changeLocalPassswordHintCaption;
@property (retain) NSTextField *changeLocalPassswordHintCaption1;
@property (retain) NSView *changeLocalPassswordOldPasswordView;
@property (retain) NSView *changeLocalPassswordUserNameView;
@property (retain) NSTextField *changeLocalPassswordUserNameField;
@property (retain) NSView *changeLocalPassswordHeaderView;
@property (retain) NSLayoutConstraint *changeLocalPassswordTrailingAlignment;
@property (retain) NSLayoutConstraint *changeLocalPassswordTrailing2Alignment;
@property (retain) NSImageView *changeLocalPassswordImageView;
@property (retain) NSButton *changeLocalPassswordButton;
@property (retain) NSButton *cancelChangeLocalPassswordButton;
@property (retain) NSWindow *resetPasswordSheet;
@property (retain) NSView *resetPassswordWarningView;
@property (retain) IndicatorSecureTextField *resetPassswordNew;
@property (retain) NSSecureTextField *resetPassswordVerify;
@property (retain) NSTextField *resetPassswordHint;
@property (retain) NSImage *icon;
@property (retain) NSString *cancelButtonTitle;
@property (copy) id /* block */ allowCancelBlock;

+ (id)MMLoggedInAccount;
+ (id)iCloudIcon;

- (void).cxx_destruct;
- (void)cancel:(id)a0;
- (void)_loadNib;
- (void)controlTextDidBeginEditing:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (void)runChangeLocalPasswordSheetModalForWindow:(id)a0 user:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)_changeLocalPassword:(id)a0 oldPassword:(id)a1 hint:(id)a2 cdpHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)_checkAndWarnAboutHomeOnEncryptedVolume;
- (id)_odRecordForUserNamed:(id)a0;
- (struct __CFBundle { } *)_passKitCoreBundle;
- (void)_runChangeICloudPasswordForWindow:(id)a0 user:(id)a1 completionHandler:(id /* block */)a2;
- (void)_validateNewPassword:(id)a0 andVerifyPassword:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_verifyLocalPassword:(id)a0;
- (BOOL)_verifyPassword:(id)a0;
- (void)changeLocalPassswordSheetOK:(id)a0;
- (void)resetPasswordSheetOK:(id)a0;
- (void)runAppleIDOptInSheetModalForWindow:(id)a0 user:(id)a1 completionHandler:(id /* block */)a2;
- (void)runAppleIDOptOutSheetModalForWindow:(id)a0 user:(id)a1 completionHandler:(id /* block */)a2;
- (void)runChangeLocalPasswordSheetModalForWindow:(id)a0 user:(id)a1 completionHandler:(id /* block */)a2;
- (void)runChangePasswordSheetModalForWindow:(id)a0 user:(id)a1 completionHandler:(id /* block */)a2;
- (void)runResetPasswordSheetModalForWindow:(id)a0 user:(id)a1 completionHandler:(id /* block */)a2;

@end
