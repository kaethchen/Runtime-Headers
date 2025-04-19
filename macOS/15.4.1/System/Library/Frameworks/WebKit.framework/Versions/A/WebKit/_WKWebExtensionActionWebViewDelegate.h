@class NSString;

@interface _WKWebExtensionActionWebViewDelegate : NSObject <WKNavigationDelegatePrivate, WKUIDelegatePrivate> {
    struct WeakPtr<WebKit::WebExtensionAction, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _webExtensionAction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (id)webView:(id)a0 createWebViewWithConfiguration:(id)a1 forNavigationAction:(id)a2 windowFeatures:(id)a3;
- (void)webView:(id)a0 runOpenPanelWithParameters:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (void)webViewDidClose:(id)a0;
- (void)_webView:(id)a0 navigationDidFinishDocumentLoad:(id)a1;
- (id)initWithWebExtensionAction:(void *)a0;

@end
