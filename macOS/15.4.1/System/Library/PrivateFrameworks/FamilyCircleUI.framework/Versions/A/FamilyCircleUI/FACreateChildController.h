@class iCloudAccountDetailsWebTabView, NSString, NSImage, ACAccount, NSWindow;

@interface FACreateChildController : NSObject <iCloudWebViewDelegate>

@property (retain, nonatomic) ACAccount *appleAccount;
@property (retain, nonatomic) iCloudAccountDetailsWebTabView *repairView;
@property (retain, nonatomic) NSWindow *hostWindow;
@property (retain, nonatomic) NSImage *displayImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)endWebView:(id)a0;
- (void)sizeChangedFrom:(struct CGSize { double x0; double x1; })a0 toSize:(struct CGSize { double x0; double x1; })a1 webViewName:(id)a2 callback:(id)a3;
- (id)_createChildAuthContext;
- (void)_dismissPresentedViewControllerWithCompletion:(id /* block */)a0;
- (id)_repairAuthContextWithAuthResults:(id)a0;
- (id)_repairParametersFromAuthResults:(id)a0;
- (void)_setupPresentedViewController;
- (void)createChildAccountWithCompletion:(id /* block */)a0;
- (id)initWithAppleAccount:(id)a0;
- (void)loadFailed:(id)a0;
- (void)repairChildAccountWithAuthenticationResults:(id)a0 completion:(id /* block */)a1;

@end
