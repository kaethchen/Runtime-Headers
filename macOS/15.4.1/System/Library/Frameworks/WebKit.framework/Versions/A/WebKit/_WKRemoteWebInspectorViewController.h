@class _WKInspectorConfiguration, NSString, WKWebView, NSWindow;
@protocol _WKRemoteWebInspectorViewControllerDelegate;

@interface _WKRemoteWebInspectorViewController : NSObject <_WKInspectorExtensionHost, _WKInspectorIBActions> {
    struct RefPtr<WebKit::RemoteWebInspectorUIProxy, WTF::RawPtrTraits<WebKit::RemoteWebInspectorUIProxy>, WTF::DefaultRefDerefTraits<WebKit::RemoteWebInspectorUIProxy>> { struct RemoteWebInspectorUIProxy *m_ptr; } m_remoteInspectorProxy;
    struct unique_ptr<WebKit::_WKRemoteWebInspectorUIProxyClient, std::default_delete<WebKit::_WKRemoteWebInspectorUIProxyClient>> { struct __compressed_pair<WebKit::_WKRemoteWebInspectorUIProxyClient *, std::default_delete<WebKit::_WKRemoteWebInspectorUIProxyClient>> { struct _WKRemoteWebInspectorUIProxyClient *__value_; } __ptr_; } m_remoteInspectorClient;
}

@property (weak, nonatomic) id<_WKRemoteWebInspectorViewControllerDelegate> delegate;
@property (readonly, retain, nonatomic) NSWindow *window;
@property (readonly, retain, nonatomic) WKWebView *webView;
@property (readonly, copy, nonatomic) _WKInspectorConfiguration *configuration;
@property (readonly, nonatomic) WKWebView *extensionHostWebView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0;
- (void)show;
- (void)showConsole;
- (void)_setDiagnosticLoggingDelegate:(id)a0;
- (void)closeFromFrontend;
- (void)loadForDebuggable:(id)a0 backendCommandsURL:(id)a1;
- (void)navigateExtensionTabWithIdentifier:(id)a0 toURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)registerExtensionWithID:(id)a0 extensionBundleIdentifier:(id)a1 displayName:(id)a2 completionHandler:(id /* block */)a3;
- (void)sendMessageToBackend:(id)a0;
- (void)sendMessageToFrontend:(id)a0;
- (void)showExtensionTabWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)showResources;
- (void)unregisterExtension:(id)a0 completionHandler:(id /* block */)a1;

@end
