@class _WKWebExtensionActionWebView;

@interface _WKWebExtensionActionPopover : NSPopover {
    struct WeakPtr<WebKit::WebExtensionAction, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _webExtensionAction;
    _WKWebExtensionActionWebView *_popupWebView;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)popoverDidClose:(id)a0;
- (void)popoverWillClose:(id)a0;
- (void)_otherPopoverWillShow:(id)a0;
- (id)initWithWebExtensionAction:(void *)a0;

@end
