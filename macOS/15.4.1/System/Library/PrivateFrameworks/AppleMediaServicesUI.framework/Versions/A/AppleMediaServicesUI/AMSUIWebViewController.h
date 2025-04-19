@class NSTextField, NSString, NSURL, AMSUIWebContainerViewController, AMSUIWebAppearance, NSDictionary, AMSBagKeySet, AMSUIWebClientContext, NSViewController, AMSUIWebPageViewController, ACAccount, AMSProcessInfo;
@protocol AMSBagProtocol, AMSUIWebDelegate;

@interface AMSUIWebViewController : AMSUICommonViewController <AMSUIWebActionRunnerDelegate, AMSUIWebPageViewControllerDelegate, AMSUIWebProtocolDelegate, AMSURLProtocolDelegate, NSURLSessionDelegate, AMSUIWebPresentationDelegate, AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) NSTextField *automationView;
@property (readonly) AMSUIWebClientContext *context;
@property (retain) NSViewController *childViewController;
@property long long currentLoadState;
@property BOOL hasAppeared;
@property BOOL hasStarted;
@property (retain) NSURL *lastLoadedURL;
@property (readonly) AMSUIWebContainerViewController *rootContainer;
@property (readonly) AMSUIWebPageViewController *webPage;
@property (retain) ACAccount *account;
@property (retain) AMSUIWebAppearance *appearance;
@property (retain) id<AMSBagProtocol> bag;
@property (retain) AMSProcessInfo *clientInfo;
@property (retain) NSDictionary *clientOptions;
@property (weak) id<AMSUIWebDelegate> delegate;
@property BOOL loadUsingWebKit;
@property BOOL reducedMemoryMode;
@property (retain) NSDictionary *metricsOverlay;
@property (retain) NSDictionary *clientData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (id)verifyTrustedURL:(id)a0 bag:(id)a1;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (id)loadRequest:(id)a0;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleDialogRequest:(id)a2 completion:(id /* block */)a3;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleEngagementRequest:(id)a2 completion:(id /* block */)a3;
- (void)_dismiss;
- (id)initWithBag:(id)a0;
- (id)presentingWindow;
- (void)_handleDidEncodeNetworkRequest:(id)a0;
- (id)_parseWebPropertiesFromRequest:(id)a0;
- (void)action:(id)a0 didEncodeNetworkRequest:(id)a1;
- (id)initWithBag:(id)a0 account:(id)a1 clientInfo:(id)a2;
- (id)_applyMappingsToURL:(id)a0;
- (id)_buildRequestWithRequest:(id)a0 bagValue:(id)a1;
- (id)_handleAuthenticateCloudRequest:(id)a0 pauseTimeouts:(BOOL)a1;
- (id)_handleAuthenticateRequest:(id)a0 pauseTimeouts:(BOOL)a1;
- (id)_handleDialogRequest:(id)a0 pauseTimeouts:(BOOL)a1;
- (id)_handleEngagementRequest:(id)a0 pauseTimeouts:(BOOL)a1;
- (id)_lazyPromiseForBagSnapshot;
- (id)_lazyPromiseForLoadingRequest:(id)a0 bagValue:(id)a1;
- (id)_lazyPromiseForLoadingSession;
- (id)_lazyPromiseForPageLoad;
- (id)_loadMescalSessionForRequestWithURL:(id)a0;
- (id)_loadRequest:(id)a0 bagValue:(id)a1;
- (id)_rootNavigationController;
- (id)_shouldReplaceCurrentAccountAfterSuccessfulAuth;
- (void)_showErrorViewWithError:(id)a0 request:(id)a1 bagValue:(id)a2;
- (id)_stringForLoadState:(long long)a0;
- (id)action:(id)a0 didResolveWithResult:(id)a1 error:(id)a2;
- (id)action:(id)a0 handleActionObject:(id)a1;
- (id)action:(id)a0 pauseTimeouts:(BOOL)a1 handleAuthenticateCloudRequest:(id)a2;
- (id)action:(id)a0 pauseTimeouts:(BOOL)a1 handleAuthenticateRequest:(id)a2;
- (id)action:(id)a0 pauseTimeouts:(BOOL)a1 handleDialogRequest:(id)a2;
- (void)actionDidFinishPurchaseWithResult:(id)a0 error:(id)a1;
- (BOOL)canBeShownFromSuspendedState;
- (void)didDismissController:(id)a0;
- (id)loadBagValue:(id)a0;
- (id)loadURL:(id)a0;
- (void)protocolHandler:(id)a0 didEncodeNetworkRequest:(id)a1;
- (id)runJSRequest:(id)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)webPageViewController:(id)a0 didEncodeNetworkRequest:(id)a1;

@end
