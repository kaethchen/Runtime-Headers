@class NSString, WKWebView;
@protocol WKInspectorViewControllerDelegate;

@interface WKInspectorViewController : NSObject <WKUIDelegate, WKNavigationDelegate, WKInspectorWKWebViewDelegate> {
    struct WeakPtr<WebKit::WebPageProxy, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _inspectedPage;
    struct RetainPtr<WKInspectorWKWebView> { void *m_ptr; } _webView;
    struct WeakObjCPtr<id<WKInspectorViewControllerDelegate>> { id m_weakReference; } _delegate;
    struct RetainPtr<_WKInspectorConfiguration> { void *m_ptr; } _configuration;
}

@property (readonly, nonatomic) WKWebView *webView;
@property (weak, nonatomic) id<WKInspectorViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)URLForInspectorResource:(id)a0;
+ (BOOL)viewIsInspectorWebView:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void)webView:(id)a0 runOpenPanelWithParameters:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (id)_webView:(id)a0 contextMenu:(id)a1 forElement:(id)a2;
- (void)_webView:(id)a0 decideDatabaseQuotaForSecurityOrigin:(id)a1 currentQuota:(unsigned long long)a2 currentOriginUsage:(unsigned long long)a3 currentDatabaseUsage:(unsigned long long)a4 expectedUsage:(unsigned long long)a5 decisionHandler:(id /* block */)a6;
- (void)_webView:(id)a0 getWindowFrameWithCompletionHandler:(id /* block */)a1;
- (void)_webView:(id)a0 setWindowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithConfiguration:(id)a0 inspectedPage:(struct NakedPtr<WebKit::WebPageProxy> { struct WebPageProxy *x0; })a1;
- (void)inspectorWKWebView:(id)a0 willMoveToWindow:(id)a1;
- (void)inspectorWKWebViewDidBecomeActive:(id)a0;
- (void)inspectorWKWebViewDidMoveToWindow:(id)a0;
- (void)inspectorWKWebViewReload:(id)a0;
- (void)inspectorWKWebViewReloadFromOrigin:(id)a0;
- (id)webViewConfiguration;

@end
