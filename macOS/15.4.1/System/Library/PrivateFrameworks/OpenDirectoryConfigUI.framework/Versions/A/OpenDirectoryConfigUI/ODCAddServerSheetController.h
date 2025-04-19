@class NSStackView, ODCViewControllerBase, ODCAction, XSDisablingTextField, NSButton, SFAuthorizationView, NSProgressIndicator, NSString, ODCGetODServerInfoAction, NSTimer, ODCServerComboBox, NSWindow, NSPanel, NSData, NSTextField;

@interface ODCAddServerSheetController : NSObject <NSTextFieldDelegate> {
    NSPanel *_sheet;
    ODCServerComboBox *_odServerNameCombo;
    NSStackView *_odAuthStackView;
    NSTextField *_odclientIDTextField;
    NSTextField *_odUserNameTextField;
    NSTextField *_odPassTextField;
    NSTextField *_odMessageTextField;
    NSTextField *_odServerTypeInstructionsLabel;
    NSStackView *_adAuthStackView;
    NSTextField *_adClientIDTextField;
    NSTextField *_adAdminNameTextField;
    NSTextField *_adAdminPassTextField;
    NSTextField *_adMessageTextField;
    XSDisablingTextField *_adRequiredLabel;
    NSProgressIndicator *_spinner;
    NSTextField *_progressLabel;
    NSButton *_okButton;
    NSButton *_cancelButton;
    NSButton *_overwriteButton;
    NSButton *_openDirectoryUtilityButton;
    SFAuthorizationView *_authView;
    NSWindow *_docWindow;
    BOOL _allowADBinding;
    ODCViewControllerBase *_parentViewController;
    NSTimer *_addressChangedTimer;
    BOOL _joinAfterInfoReceived;
    BOOL _authBindingAllowed;
    BOOL _authBindingRequired;
}

@property (copy) NSString *serverNameForMostRecentInfo;
@property (copy) NSString *mostRecentInfoActiveDirectoryDomainName;
@property (copy) NSString *userForForcedJoin;
@property BOOL isForcedJoin;
@property BOOL showODInstructionsLabel;
@property (retain) NSData *certificateData;
@property BOOL trustCACert;
@property (retain) NSString *addressOfServerAskedAboutCATrust;
@property (retain) NSString *addressOfServerWarnedAboutNoSSL;
@property ODCAction *action;
@property ODCGetODServerInfoAction *getInfoAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)alertDidEnd:(id)a0 returnCode:(long long)a1 withCompletionHandler:(id /* block */)a2;

- (void)dealloc;
- (void)finalize;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (void)comboBoxSelectionDidChange:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (void)setControlsEnabled:(BOOL)a0;
- (void)actionDidFinish:(id)a0;
- (void)buttonHit:(id)a0;
- (BOOL)allRequiredFieldsFilled;
- (void)closeSheetAndPrepareForRelease;
- (id)dhcpLDAPServerName;
- (void)didFinishGettingServerInfo:(id)a0;
- (void)getInfoForEnteredServer:(BOOL)a0;
- (void)getInfoForEnteredServerTimer:(id)a0;
- (void)handleOtherActionError:(id)a0;
- (id)initWithMainWindow:(id)a0 authView:(id)a1 allowADBinding:(BOOL)a2 parentController:(id)a3;
- (id)odClientCompID;
- (void)setComputerIDIfEmpty:(id)a0;
- (void)showErrorAlertAndReleaseSelf:(id)a0;
- (void)threadedSuggestComputerID:(id)a0;

@end
