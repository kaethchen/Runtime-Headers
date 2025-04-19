@class NSMutableArray;

@interface OITSUDeferredInvocationQueue : NSObject {
    NSMutableArray *_invocations;
    id _target;
}

- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)prepareWithInvocationTarget:(id)a0;
- (void)performInvocations;

@end
