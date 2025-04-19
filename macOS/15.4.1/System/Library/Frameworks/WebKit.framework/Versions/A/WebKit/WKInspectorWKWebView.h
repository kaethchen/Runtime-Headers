@protocol WKInspectorWKWebViewDelegate;

@interface WKInspectorWKWebView : WKWebView {
    struct WeakObjCPtr<id<WKInspectorWKWebViewDelegate>> { id m_weakReference; } _inspectorWKWebViewDelegate;
}

@property (weak, nonatomic) id<WKInspectorWKWebViewDelegate> inspectorWKWebViewDelegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (long long)tag;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_opaqueRectForWindowMoveWhenInTitlebar;
- (BOOL)becomeFirstResponder;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)a0;
- (void)reload:(id)a0;
- (void)reloadFromOrigin:(id)a0;
- (void)_handleWindowDidBecomeKey:(id)a0;

@end
