@class NSString;

@interface WKRemoteWebInspectorUIProxyObjCAdapter : NSObject <NSWindowDelegate, WKInspectorViewControllerDelegate> {
    struct WeakPtr<WebKit::RemoteWebInspectorUIProxy, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _inspectorProxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })window:(id)a0 willPositionSheet:(id)a1 usingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)initWithRemoteWebInspectorUIProxy:(void *)a0;
- (void)inspectorViewControllerInspectorDidCrash:(id)a0;
- (BOOL)inspectorViewControllerInspectorIsUnderTest:(id)a0;
- (void)inspectorWKWebViewDidBecomeActive:(id)a0;
- (struct RefPtr<WebKit::RemoteWebInspectorUIProxy, WTF::RawPtrTraits<WebKit::RemoteWebInspectorUIProxy>, WTF::DefaultRefDerefTraits<WebKit::RemoteWebInspectorUIProxy>> { struct RemoteWebInspectorUIProxy *x0; })protectedInspectorProxy;

@end
