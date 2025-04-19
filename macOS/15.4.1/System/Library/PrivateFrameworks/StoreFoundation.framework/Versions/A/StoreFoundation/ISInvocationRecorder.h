@interface ISInvocationRecorder : NSObject {
    id _target;
}

- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (id)adjustedTargetForSelector:(SEL)a0;
- (void)invokeInvocation:(id)a0;

@end
