@class AKAuthWebTabView, NSView, NSString, AKAppleIDAuthenticationiCloudPrefPaneContext;

@interface AKAppleIDAuthenticationPrefPaneLogoContainerViewController : NSViewController <AuthWebViewDelegate>

@property (retain, nonatomic) NSView *containerView;
@property (retain, nonatomic) AKAuthWebTabView *webviewController;
@property (retain, nonatomic) AKAppleIDAuthenticationiCloudPrefPaneContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)closeWebViewAndCleanUp:(id)a0 andError:(id)a1;
- (void)endWebView:(id)a0;
- (id)initWithiCloudPrefPaneContext:(id)a0;
- (void)loadFailed:(id)a0 withError:(id)a1;
- (void)presentServerProvidedUIWithConfiguration:(id)a0 parentWindow:(id)a1 completion:(id /* block */)a2;
- (void)sizeChangedFrom:(struct CGSize { double x0; double x1; })a0 toSize:(struct CGSize { double x0; double x1; })a1 webViewName:(id)a2 callback:(id)a3;
- (void)skipAndContinueSignIn;
- (void)switchToView:(id)a0;

@end
