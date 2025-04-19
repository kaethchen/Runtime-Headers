@interface PLAutoBindingBlackholeProxy : NSProxy {
    id _targetObject;
}

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithTargetObject:(id)a0;

@end
