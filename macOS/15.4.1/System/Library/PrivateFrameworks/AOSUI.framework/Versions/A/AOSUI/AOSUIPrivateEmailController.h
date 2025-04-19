@class NSString;

@interface AOSUIPrivateEmailController : NSObject <iCloudWebViewDelegate>

@property (copy, nonatomic) NSString *appleAccountID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)endWebView:(id)a0;
- (void)resizeModalSheet:(struct CGSize { double x0; double x1; })a0;
- (void)sizeChangedFrom:(struct CGSize { double x0; double x1; })a0 toSize:(struct CGSize { double x0; double x1; })a1 webViewName:(id)a2 callback:(id)a3;
- (void)skipAndContinueSignIn;
- (void)loadFailed:(id)a0;
- (void)showPrivateEmailManage:(id)a0;

@end
