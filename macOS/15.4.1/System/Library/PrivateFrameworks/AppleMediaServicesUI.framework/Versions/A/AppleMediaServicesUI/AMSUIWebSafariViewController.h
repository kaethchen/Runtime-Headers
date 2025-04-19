@class AMSUIWebSafariPageModel, AMSUIWebAppearance, NSURL, AMSUICommonBarButtonItem, NSString, NSViewController, AMSUIWebClientContext, AMSUIWebSafariWebView;

@interface AMSUIWebSafariViewController : AMSUICommonViewController <WKNavigationDelegate, AMSUIWebSafariWebDelegate, AMSUIWebPagePresenter>

@property (retain) AMSUIWebAppearance *appearance;
@property (readonly) AMSUIWebClientContext *context;
@property BOOL didHandleDismiss;
@property (retain) NSViewController *placeholderPage;
@property (readonly) AMSUIWebSafariPageModel *model;
@property long long pageState;
@property BOOL performingNavigation;
@property (readonly) AMSUICommonBarButtonItem *toolbarLeft;
@property (readonly) AMSUICommonBarButtonItem *toolbarRight;
@property (readonly) AMSUIWebSafariWebView *webView;
@property (copy) id /* block */ actionHandler;
@property (readonly) NSURL *originalURL;
@property BOOL shouldDismissOnCallback;
@property BOOL shouldSetPresentationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)_updateButtons;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)_cancel:(id)a0;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didCommitNavigation:(id)a1;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)_share:(id)a0;
- (void)_dismiss;
- (void)webView:(id)a0 stopURLSchemeTask:(id)a1;
- (void)_refresh:(id)a0;
- (void)_back:(id)a0;
- (BOOL)_callActionHandlerWithURL:(id)a0 error:(id)a1;
- (void)_finishedLoadingWithSuccess:(BOOL)a0;
- (void)_forward:(id)a0;
- (void)_handleDismiss;
- (void)_pop;
- (void)_presentActivityViewControllerWithActivityItems:(id)a0;
- (void)_presentPlaceholderModel:(id)a0;
- (void)_setupPageForWebView;
- (void)_setupSafariNavBarWithSpinner:(BOOL)a0;
- (void)_startErrorTimer;
- (void)_startLoadingWebView;
- (void)_transitionToErrorViewWithError:(id)a0;
- (void)_transitionToLoading;
- (void)_transitionToWebView;
- (void)loadActionURL:(id)a0 data:(id)a1 callbackScheme:(id)a2 actionHandler:(id /* block */)a3;
- (void)receiveCallbackURL:(id)a0;
- (void)safariView:(id)a0 didReceiveAction:(id)a1 body:(id)a2 replyHandler:(id /* block */)a3;
- (void)safariView:(id)a0 didRedirectToSchemeWithURL:(id)a1;
- (void)willPresentPageModel:(id)a0 appearance:(id)a1;

@end
