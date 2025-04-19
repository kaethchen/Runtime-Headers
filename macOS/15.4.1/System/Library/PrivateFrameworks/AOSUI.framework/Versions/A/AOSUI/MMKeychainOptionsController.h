@class NSTextField, NSString, MMPhoneNumberFormatter, NSTouchBar, iCloudTouchBarController, NSPopUpButton, NSWindow, NSButton, NSImageView, NSBox;

@interface MMKeychainOptionsController : NSViewController <MMCSCSetupControllerDelegate, NSTouchBarProvider> {
    NSTextField *_statusString;
    NSButton *_detailsButton;
    NSBox *_pendingApprovalDivider;
    NSTextField *_iCloudSecurityCodeLabel;
    NSButton *_iCloudSecurityCodeButton;
    NSTextField *_allowKeyChainRecoveryInfoLabel;
    NSButton *_cancelButton;
    NSButton *_OKButton;
    NSButton *_allowKeyChainRecovery;
    NSPopUpButton *_countryCodePopupMenu;
    NSTextField *_phoneNumberTF;
    NSTextField *_phoneNumberLabel;
    NSTextField *_phoneNumberInfoLabel;
    NSImageView *_keychainImageView;
    NSImageView *_cautionImageView;
    id /* block */ _completionHandler;
}

@property (retain) NSString *accountID;
@property BOOL didModifySecurityCode;
@property NSWindow *parentWindow;
@property (copy) NSString *smsCountryCode;
@property (copy) NSString *smsCountryPrefix;
@property (copy) NSString *smsTarget;
@property (copy) NSString *passPhrase;
@property BOOL usingComplexPassphrase;
@property BOOL isSecurePassphrase;
@property BOOL initialState;
@property (copy) NSString *initialSMSCountryCode;
@property (copy) NSString *initialSMSTarget;
@property (retain) MMPhoneNumberFormatter *smsTargetFormatter;
@property BOOL usingNumericPassphrase;
@property int numericPassphraseLength;
@property (retain) iCloudTouchBarController *touchBarController;
@property id delegate;
@property (readonly) NSWindow *sheet;
@property (copy) NSString *fullName;
@property (copy) NSString *emailAddress;
@property (copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSTouchBar *touchBar;

- (void).cxx_destruct;
- (void)cancel:(id)a0;
- (void)done:(id)a0;
- (id)initWithAccountID:(id)a0;
- (void)detailsPressed:(id)a0;
- (id)_countryCodeFromPopupMenu;
- (id)_countryPrefixFromPopupMenu;
- (void)_finishSavingAccountDetails;
- (id)_getKeychainBackupDictionary;
- (id)_getKeychainBackupStatus;
- (void)_handleSetupKeychainSyncError;
- (BOOL)_isBackupEnabled;
- (BOOL)_isDeviceInCircle;
- (BOOL)_isHighSecurityEnabled;
- (void)_selectCountryCodeInPopUpMenu:(id)a0;
- (BOOL)_shouldSave;
- (id)_targetFromPhoneNumberTF;
- (void)allowKeyChainRecoveryPressed:(id)a0;
- (void)changeSecurityCodePressed:(id)a0;
- (void)mmCSCSetupControllerDidCancel:(id)a0;
- (void)mmCSCSetupControllerDidEnd:(id)a0;
- (void)mmCSCSetupControllerDidOptOut:(id)a0;
- (void)popUpMenuItemSelected:(id)a0;
- (void)setAllowKeychainRecovery:(BOOL)a0;
- (void)setSMSTargetEnabled:(BOOL)a0 clearTarget:(BOOL)a1;
- (void)showInWindow:(id)a0 deviceInCircle:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateApprovalUI;

@end
