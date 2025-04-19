@class NSString;

@interface SiteMetadataFetcherNavigationDelegate : NSObject <WKNavigationDelegate> {
    void *_siteMetadataFetcher;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 preferences:(id)a2 decisionHandler:(id /* block */)a3;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didReceiveAuthenticationChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_canAuthenticateAgainstProtectionSpace:(id)a0;
- (void)_webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2 userInfo:(id)a3;
- (void)_webView:(id)a0 webContentProcessDidTerminateWithReason:(long long)a1;
- (void)disconnectFromClient;
- (id)initWithSiteMetadataFetcher:(void *)a0;

@end
