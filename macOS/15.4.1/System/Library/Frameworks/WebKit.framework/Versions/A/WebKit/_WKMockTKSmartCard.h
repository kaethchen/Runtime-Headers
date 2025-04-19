@interface _WKMockTKSmartCard : TKSmartCard {
    struct WeakPtr<WebKit::MockCcidService, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } m_service;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithService:(void *)a0;
- (void)endSession;
- (void)beginSessionWithReply:(id /* block */)a0;
- (void)transmitRequest:(id)a0 reply:(id /* block */)a1;

@end
