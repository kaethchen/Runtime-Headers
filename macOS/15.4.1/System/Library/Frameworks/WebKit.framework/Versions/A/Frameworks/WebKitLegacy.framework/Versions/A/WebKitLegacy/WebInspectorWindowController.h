@class NSString;

@interface WebInspectorWindowController : NSWindowController <NSWindowDelegate, WebPolicyDelegate, WebUIDelegate> {
    struct RetainPtr<WebView> { void *m_ptr; } _inspectedWebView;
    struct RetainPtr<WebView> { void *m_ptr; } _frontendWebView;
    struct NakedPtr<WebInspectorFrontendClient> { struct WebInspectorFrontendClient *m_ptr; } _frontendClient;
    void *_inspectorClient;
    BOOL _attachedToInspectedWebView;
    BOOL _shouldAttach;
    BOOL _visible;
    BOOL _destroyingInspectorView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)close;
- (id).cxx_construct;
- (void)detach;
- (id)window;
- (void)showWindow:(id)a0;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })window:(id)a0 willPositionSheet:(id)a1 usingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)windowDidEnterFullScreen:(id)a0;
- (void)windowDidExitFullScreen:(id)a0;
- (BOOL)windowShouldClose:(id)a0;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 request:(id)a2 frame:(id)a3 decisionListener:(id)a4;
- (BOOL)attached;
- (void)attach;
- (id)webView:(id)a0 contextMenuItemsForElement:(id)a1 defaultMenuItems:(id)a2;
- (void)webView:(id)a0 runOpenPanelForFileButtonWithResultListener:(id)a1 allowMultipleFiles:(BOOL)a2;
- (struct NakedPtr<WebInspectorClient> { struct WebInspectorClient *x0; })inspectorClient;
- (id)frontendWebView;
- (void)attachWindow:(id)a0;
- (void)destroyInspectorView;
- (id)initWithInspectedWebView:(id)a0 isUnderTest:(BOOL)a1;
- (id)inspectorPagePath;
- (id)inspectorTestPagePath;
- (void)setAttachedWindowHeight:(unsigned int)a0;
- (void)setDockingUnavailable:(BOOL)a0;
- (void)setFrontendClient:(struct NakedPtr<WebInspectorFrontendClient> { struct WebInspectorFrontendClient *x0; })a0;
- (void)setInspectorClient:(struct NakedPtr<WebInspectorClient> { struct WebInspectorClient *x0; })a0;
- (void)showErrorConsole:(id)a0;
- (void)showWebInspector:(id)a0;
- (void)toggleDebuggingJavaScript:(id)a0;
- (void)toggleProfilingJavaScript:(id)a0;
- (void)webView:(id)a0 frame:(id)a1 exceededDatabaseQuotaForSecurityOrigin:(id)a2 database:(id)a3;

@end
