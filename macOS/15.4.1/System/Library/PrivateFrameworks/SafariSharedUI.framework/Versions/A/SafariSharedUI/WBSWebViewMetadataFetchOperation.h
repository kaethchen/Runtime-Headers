@class WKWebViewConfiguration, WKWebView, NSString;
@protocol WBSWebViewMetadataFetchOperationDelegate;

@interface WBSWebViewMetadataFetchOperation : WBSSiteMetadataFetchOperation <WKNavigationDelegate>

@property (weak, nonatomic) id<WBSWebViewMetadataFetchOperationDelegate> delegate;
@property (readonly, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) WKWebViewConfiguration *webViewConfiguration;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } webViewSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void)_webViewWebProcessDidCrash:(id)a0;
- (void)didFinishNavigation;
- (void)_setUpWebViewAndStartOffscreenFetching;
- (void)clearWebView;
- (void)didCreateWebView;
- (void)didFailFetchWithError:(id)a0;
- (void)startOffscreenFetching;
- (void)willClearWebView;

@end
