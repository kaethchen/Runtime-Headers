@class NSBox, NSString, WKWebView, NSProgressIndicator;
@protocol SLWebClient, ACUIWebLoginDelegate;

@interface ACUIWebLoginViewController : ACUIViewController <WKUIDelegate, WKNavigationDelegate> {
    id<SLWebClient> _webClient;
}

@property (retain) WKWebView *webView;
@property (retain) NSBox *webViewContainer;
@property (retain) NSProgressIndicator *spinner;
@property (weak) id<ACUIWebLoginDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsAccount:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)viewDidLoad;
- (void)_getTokensWithCode:(id)a0;
- (void)_performRequest:(id)a0 withHandler:(id /* block */)a1;
- (id)_redirectServerHost;
- (id)initialWebRequest;
- (id)webClient;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 didReceiveAuthenticationChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)_evaluateDocumentTitleForWKWebView:(id)a0 retryCount:(unsigned long long)a1;
- (void)_fetchUserInfoWithToken:(id)a0;
- (void)_removeWebViewAndShowSpinner;
- (void)_webLoginFailureWithError:(id)a0;
- (void)_webLoginSucceeded;
- (void)_webViewDidReceiveTitle:(id)a0;
- (void)_webViewwillLoadURL:(id)a0;
- (void)helpButton:(id)a0;

@end
