@class NSTextField, NSArray, ACUICertificatePanelManager, ACAccount;

@interface ACUIViewController : NSViewController

@property (retain) ACUICertificatePanelManager *certPanelMgr;
@property (retain) NSArray *uiDataclasses;
@property (retain) NSTextField *passwordField;
@property (retain) NSTextField *errorMessageLabel;
@property (nonatomic) BOOL disableAutoReload;
@property (readonly, nonatomic) ACAccount *account;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)nibBundle;
- (id)initWithAccount:(id)a0;
- (void)_setAccount:(id)a0;
- (BOOL)willSaveAccount;
- (void)_reloadAccountIfNeeded:(id)a0;
- (void)accountDidChangeFrom:(id)a0;
- (void)accountWillChangeTo:(id)a0;
- (void)digestSaveError:(id)a0 inWindow:(id)a1;
- (void)digestSaveError:(id)a0 inWindow:(id)a1 isSetup:(BOOL)a2;
- (BOOL)handleInsecureConnectionForAccount:(id)a0 withSaveError:(id)a1 inWindow:(id)a2;
- (void)persistVerifiedAccountWithActions:(id)a0;
- (void)refreshDataclassesUI;
- (void)saveAccount:(id)a0;
- (void)saveAccountFailedWithError:(id)a0;
- (void)saveAccountSucceeded;
- (void)saveAccountWithVerificationOptions:(id)a0 dataclassActions:(id)a1;
- (unsigned long long)stateOverrideForDataclass:(id)a0;
- (BOOL)willPersistVerifiedAccount;

@end
