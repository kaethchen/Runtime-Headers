@class NSString;
@protocol WKURLSchemeHandler, WKScriptMessageHandlerWithReply, WKNavigationDelegate, AMSUIWebSafariWebDelegate;

@interface AMSUIWebSafariWebView : WKWebView <WKURLSchemeHandler, WKScriptMessageHandlerWithReply, WKUIDelegate>

@property (weak) NSString *logKey;
@property (weak) id<WKNavigationDelegate, WKScriptMessageHandlerWithReply, WKURLSchemeHandler, AMSUIWebSafariWebDelegate> safariDelegate;
@property (weak) NSString *scheme;
@property double topInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_createContentControllerWithScheme:(id)a0 data:(id)a1 messageHandler:(id)a2;

- (void).cxx_destruct;
- (void)webView:(id)a0 runOpenPanelWithParameters:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1 replyHandler:(id /* block */)a2;
- (void)webView:(id)a0 startURLSchemeTask:(id)a1;
- (void)webView:(id)a0 stopURLSchemeTask:(id)a1;
- (id)initWithAppearance:(id)a0 scheme:(id)a1 data:(id)a2 delegate:(id)a3;

@end
