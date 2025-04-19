@interface _WKWebExtensionActionWebView : WKWebView {
    struct WeakPtr<WebKit::WebExtensionAction, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _webExtensionAction;
    struct CGSize { double width; double height; } _previousContentSize;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly, nonatomic) BOOL contentSizeHasStabilized;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)invalidateIntrinsicContentSize;
- (void)_contentSizeDidChange;
- (void)_contentSizeHasStabilized;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 webExtensionAction:(void *)a2;

@end
