@class iCloudAccountDetailsWebTabView, NSString, NSURLRequest, NSWindow;
@protocol EDPTokenSpyglassDelegate;

@interface EDPTokenSpyglassFlowCoordinator : NSObject <iCloudWebViewDelegate, MBIA2WebKitViewControllerDelegate>

@property (retain, nonatomic) iCloudAccountDetailsWebTabView *iCloudWebView;
@property (retain, nonatomic) NSWindow *parentWindow;
@property (weak, nonatomic) id<EDPTokenSpyglassDelegate> delegate;
@property (retain, nonatomic) NSURLRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })contentSize;
- (id)webView;
- (void)endWebView:(id)a0;
- (void)mbWebkitViewControllerModifyURLRequest:(id)a0;
- (void)skipAndContinueSignIn;
- (id)webViewContainer;
- (void)loadFailed:(id)a0;
- (void)webViewDidFinishLoading:(id)a0;
- (id)initWithWindow:(id)a0 request:(id)a1 delegate:(id)a2;

@end
