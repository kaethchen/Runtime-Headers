@class NSString, _WKInspector;

@interface WKWebInspectorUIProxyObjCAdapter : NSObject <WKInspectorViewControllerDelegate, NSWindowDelegate> {
    struct WeakPtr<WebKit::WebInspectorUIProxy, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _inspectorProxy;
}

@property (readonly) struct OpaqueWKInspector { } *inspectorRef;
@property (readonly) _WKInspector *inspector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })window:(id)a0 willPositionSheet:(id)a1 usingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)windowDidEnterFullScreen:(id)a0;
- (void)windowDidExitFullScreen:(id)a0;
- (void)windowDidMove:(id)a0;
- (void)windowDidResize:(id)a0;
- (void)windowWillClose:(id)a0;
- (struct RefPtr<WebKit::WebInspectorUIProxy, WTF::RawPtrTraits<WebKit::WebInspectorUIProxy>, WTF::DefaultRefDerefTraits<WebKit::WebInspectorUIProxy>> { struct WebInspectorUIProxy *x0; })_protectedInspector;
- (id)initWithWebInspectorUIProxy:(void *)a0;
- (void)inspectedViewFrameDidChange:(id)a0;
- (void)inspectorViewController:(id)a0 openURLExternally:(id)a1;
- (void)inspectorViewController:(id)a0 willMoveToWindow:(id)a1;
- (void)inspectorViewControllerDidBecomeActive:(id)a0;
- (void)inspectorViewControllerDidMoveToWindow:(id)a0;
- (void)inspectorViewControllerInspectorDidCrash:(id)a0;
- (BOOL)inspectorViewControllerInspectorIsUnderTest:(id)a0;

@end
