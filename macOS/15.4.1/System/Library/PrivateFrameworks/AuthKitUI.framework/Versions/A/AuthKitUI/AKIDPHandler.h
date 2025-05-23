@class AKServerRequestConfiguration, NSString, AKURLRequestApprover;
@protocol AKIDPHandlerDelegate;

@interface AKIDPHandler : NSObject <WKNavigationDelegate> {
    AKURLRequestApprover *_redirectApprover;
}

@property (copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) AKServerRequestConfiguration *configuration;
@property (weak, nonatomic) id<AKIDPHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 didReceiveAuthenticationChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (id)_sanitizeError:(id)a0;
- (void)_completeFlowWithError:(id)a0;
- (void)_completeWithACSPostRequestFromWebView:(id)a0;
- (id)_safeACSDictionaryFromResult:(id)a0;
- (id)_samlJavaScriptQuery;
- (id)initWithConfiguration:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
