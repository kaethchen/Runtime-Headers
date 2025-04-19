@class NSString, WKWebView, ACAccount, ACAccountStore;
@protocol SLWebClient;

@interface SLWebAuthController : NSViewController <WKNavigationDelegate> {
    ACAccount *_account;
    ACAccountStore *_accountStore;
    id /* block */ _presentationBlock;
}

@property (retain) WKWebView *webView;
@property (readonly) id<SLWebClient> _webClient;
@property (readonly) NSString *_extentionIdentifier;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidLoad;
- (void)_callCompletionWithAuthIdentity:(id)a0 error:(id)a1;
- (void)_commonInitializationWithAccount:(id)a0 accountStore:(id)a1 username:(id)a2 accountDescription:(id)a3 youTube:(BOOL)a4 presentationBlock:(id /* block */)a5;
- (void)_getTokensWithCode:(id)a0;
- (void)_performRequest:(id)a0 withHandler:(id /* block */)a1;
- (id)_redirectServerHost;
- (void)_webViewWillLoadURL:(id)a0;
- (id)initWithAccount:(id)a0 accountStore:(id)a1 presentationBlock:(id /* block */)a2;
- (id)initWithAccountDescription:(id)a0 presentationBlock:(id /* block */)a1;
- (id)initialWebRequest;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 didReceiveAuthenticationChallenge:(id)a1 completionHandler:(id /* block */)a2;

@end
