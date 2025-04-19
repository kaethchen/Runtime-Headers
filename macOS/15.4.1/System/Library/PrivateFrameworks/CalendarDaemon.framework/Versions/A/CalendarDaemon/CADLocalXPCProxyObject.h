@class CADLocalXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface CADLocalXPCProxyObject : NSObject {
    id _wrappedObject;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _errorHandler;
    BOOL _synchronous;
    CADLocalXPCConnection *_connection;
}

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)_fixupArgumentsForInvocation:(id)a0;
- (void)_forwardInvocationAsynchronously:(id)a0;
- (void)_forwardInvocationSynchronously:(id)a0;
- (id)_replacementArgumentValueForURLWrapper:(id)a0;
- (id)_updatedArgumentValueForArgumentValue:(id)a0;
- (id)initWithWrappedObject:(id)a0 queue:(id)a1 errorHandler:(id /* block */)a2 synchronous:(BOOL)a3 connection:(id)a4;

@end
