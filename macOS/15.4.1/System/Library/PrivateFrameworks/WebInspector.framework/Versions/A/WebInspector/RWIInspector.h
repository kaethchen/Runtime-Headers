@class NSString, _WKRemoteWebInspectorViewController, WKWebView, RWIDebuggable, RWIManager, RWIInspectorConfiguration;

@interface RWIInspector : NSObject <NSWindowDelegate, _WKRemoteWebInspectorViewControllerDelegate, RWIDebugger, _WKInspectorExtensionHost> {
    _WKRemoteWebInspectorViewController *_remoteInspectorViewController;
    RWIInspectorConfiguration *_configuration;
    BOOL _closing;
}

@property (readonly, nonatomic) WKWebView *webViewForTesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, nonatomic) RWIDebuggable *debuggable;
@property (readonly, nonatomic) RWIManager *manager;
@property (readonly, nonatomic) WKWebView *extensionHostWebView;

- (void).cxx_destruct;
- (void)close;
- (void)show;
- (void)windowWillClose:(id)a0;
- (void)inspectorViewController:(id)a0 sendMessageToBackend:(id)a1;
- (void)inspectorViewControllerInspectorDidClose:(id)a0;
- (void)registerExtensionWithID:(id)a0 extensionBundleIdentifier:(id)a1 displayName:(id)a2 completionHandler:(id /* block */)a3;
- (void)sendMessageToBackend:(id)a0;
- (void)sendMessageToFrontend:(id)a0;
- (void)unregisterExtension:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateWindowTitle;
- (id)diagnosticLoggingDelegate;
- (void)setDiagnosticLoggingDelegate:(id)a0;
- (long long)_debuggableType;
- (id)_backendCommandsURL;
- (void)_closeInternal;
- (void)debuggableDidChange:(id)a0;
- (id)initWithConfiguration:(id)a0 debuggable:(id)a1 manager:(id)a2;
- (void)loadAndShow;

@end
