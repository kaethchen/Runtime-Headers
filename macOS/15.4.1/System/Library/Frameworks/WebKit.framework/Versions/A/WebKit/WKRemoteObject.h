@interface WKRemoteObject : NSObject {
    struct RetainPtr<_WKRemoteObjectRegistry> { void *m_ptr; } _objectRegistry;
    struct RetainPtr<_WKRemoteObjectInterface> { void *m_ptr; } _interface;
}

- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_initWithObjectRegistry:(id)a0 interface:(id)a1;

@end
