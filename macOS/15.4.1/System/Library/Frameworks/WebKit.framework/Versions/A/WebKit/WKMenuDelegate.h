@class NSString;

@interface WKMenuDelegate : NSObject <NSMenuDelegate> {
    struct WeakPtr<WebKit::WebContextMenuProxyMac, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _menuProxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)menuDidClose:(id)a0;
- (void)menuWillOpen:(id)a0;
- (id)initWithMenuProxy:(void *)a0;

@end
