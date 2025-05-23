@interface WebMainThreadInvoker : NSProxy {
    id target;
    struct RetainPtr<id> { void *m_ptr; } exception;
}

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithTarget:(id)a0;
- (void)handleException:(id)a0;

@end
