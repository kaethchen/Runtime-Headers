@class NSTextField, NSString, NSSecureTextField, NSArray, AirDb, LAContext, NSPopUpButton, NSMutableDictionary, NSButton, SFIconView;
@protocol LARUIAuthenticationDialogDelegate;

@interface LARUIAuthenticationDialog : NSWindowController {
    AirDb *_airDb;
    NSArray *_users;
    NSMutableDictionary *_deviceNodesWithVolumeNames;
}

@property (weak) SFIconView *iconView;
@property (weak) NSPopUpButton *userNamePopup;
@property (weak) NSSecureTextField *userPasswordField;
@property (weak) NSButton *okButton;
@property (weak) NSButton *cancelButton;
@property (weak) NSTextField *authenticationReasonLabel;
@property (weak) NSTextField *subtitleLabel;
@property (retain, nonatomic) LAContext *context;
@property (copy, nonatomic) id /* block */ reply;
@property (weak, nonatomic) id<LARUIAuthenticationDialogDelegate> delegate;
@property (copy, nonatomic) NSString *localizedAuthenticationReason;
@property (nonatomic) BOOL ownersOnly;
@property (nonatomic) BOOL adminsOnly;
@property (nonatomic) BOOL useBootPasswordCredential;
@property (copy, nonatomic) NSString *volumeUuid;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)_setEnabled:(BOOL)a0;
- (void)_setupWindow;
- (void)showWindow:(id)a0;
- (void)windowDidLoad;
- (void)cancelClicked:(id)a0;
- (void)okClicked:(id)a0;
- (id)_displayUserName:(id)a0 userNamesWithDeviceNodes:(id)a1;
- (id)_foo;
- (id)_usersWithError:(id *)a0;
- (id)_volumeNameForDeviceNode:(id)a0;

@end
