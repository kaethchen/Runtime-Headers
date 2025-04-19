@interface WebPolicyDecisionListenerPrivate : NSObject {
    struct RetainPtr<id> { void *m_ptr; } target;
    SEL action;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithTarget:(id)a0 action:(SEL)a1;

@end
