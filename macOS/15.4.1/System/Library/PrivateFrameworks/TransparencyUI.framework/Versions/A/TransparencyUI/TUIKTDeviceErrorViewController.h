@class NSTextField, TUIAppleAccountManager, NSArray, NSString, iCloudAccountDetailsWebTabView, AIDAAccountManager, NSButton, NSBox;
@protocol TUIKTDeviceErrorViewControllerProtocol;

@interface TUIKTDeviceErrorViewController : NSViewController <iCloudWebViewDelegate>

@property (retain, nonatomic) AIDAAccountManager *accountManager;
@property (retain, nonatomic) NSArray *devicesWithErrors;
@property (retain, nonatomic) iCloudAccountDetailsWebTabView *webView;
@property (retain, nonatomic) NSBox *mainBox;
@property (retain, nonatomic) NSTextField *errorTitleField;
@property (retain, nonatomic) NSTextField *errorDetailField;
@property (retain, nonatomic) NSButton *removeDevicesButton;
@property (retain, nonatomic) TUIAppleAccountManager *appleAccountManager;
@property (weak, nonatomic) id<TUIKTDeviceErrorViewControllerProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (id)_appleAccount;
- (void)endWebView:(id)a0;
- (void)resizeModalSheet:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldHideCancelButton;
- (void)sizeChangedFrom:(struct CGSize { double x0; double x1; })a0 toSize:(struct CGSize { double x0; double x1; })a1 webViewName:(id)a2 callback:(id)a3;
- (void)skipAndContinueSignIn;
- (void)loadFailed:(id)a0;
- (id)_createDeviceSubview:(id)a0 deviceArrayIndex:(long long)a1;
- (BOOL)_isMoreDevicesWithError;
- (id)attributedStringForSystemImageNamed:(id)a0;
- (id)initWithAccountManager:(id)a0 devicesWithErrors:(id)a1;
- (void)removeDevicesClicked:(id)a0;
- (void)viewDetailsPressed:(id)a0;

@end
