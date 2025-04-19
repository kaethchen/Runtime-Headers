@interface WKProcessPoolWeakObserver : NSObject {
    struct WeakPtr<WebKit::WebProcessPool, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } m_weakPtr;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithWeakPtr:(void *)a0;

@end
