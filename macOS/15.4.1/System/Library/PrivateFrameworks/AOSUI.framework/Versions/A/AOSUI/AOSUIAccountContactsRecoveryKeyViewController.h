@class NSTextField, NSString, AOSUIAccountRecoveryContext, NSButton, iCloudAccountDetailsWebTabView;
@protocol AOSUIAccountContactsRecoveryKeyViewControllerDelegate;

@interface AOSUIAccountContactsRecoveryKeyViewController : AOSUISpyglassBaseViewController <iCloudWebViewDelegate>

@property (weak) NSTextField *titleTextField;
@property (weak) NSTextField *statusTextField;
@property (weak) NSTextField *detailTextField;
@property (weak) NSButton *editButton;
@property (readonly, weak, nonatomic) id<AOSUIAccountContactsRecoveryKeyViewControllerDelegate> delegate;
@property (retain) AOSUIAccountRecoveryContext *context;
@property (retain) iCloudAccountDetailsWebTabView *webView;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *recoveryKeyStatus;
@property (copy, nonatomic) NSString *detailText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)_appleAccount;
- (void)endWebView:(id)a0;
- (void)resizeModalSheet:(struct CGSize { double x0; double x1; })a0;
- (void)sizeChangedFrom:(struct CGSize { double x0; double x1; })a0 toSize:(struct CGSize { double x0; double x1; })a1 webViewName:(id)a2 callback:(id)a3;
- (void)skipAndContinueSignIn;
- (void)editButtonPressed:(id)a0;
- (void)loadFailed:(id)a0;
- (void)_setupRecoveryKeyFields;
- (id)initWithAccountManager:(id)a0 context:(id)a1 delegate:(id)a2;
- (void)openManageRecoveryKeySheet;

@end
