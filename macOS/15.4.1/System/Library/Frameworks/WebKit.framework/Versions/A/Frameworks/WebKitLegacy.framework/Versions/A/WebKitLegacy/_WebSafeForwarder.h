@interface _WebSafeForwarder : NSObject {
    id _target;
    id _defaultTarget;
}

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithTarget:(id)a0 defaultTarget:(id)a1;

@end
