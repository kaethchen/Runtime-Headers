@class NSString;

@interface WKDOMPasteMenuDelegate : NSObject <NSMenuDelegate> {
    struct WeakPtr<WebKit::WebViewImpl, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _impl;
    unsigned char _category;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)menuDidClose:(id)a0;
- (long long)numberOfItemsInMenu:(id)a0;
- (void)_web_grantDOMPasteAccess;
- (id)initWithWebViewImpl:(void *)a0 pasteAccessCategory:(unsigned char)a1;

@end
