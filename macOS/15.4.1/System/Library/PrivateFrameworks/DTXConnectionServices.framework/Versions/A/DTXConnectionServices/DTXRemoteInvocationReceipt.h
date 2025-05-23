@interface DTXRemoteInvocationReceipt : NSObject {
    id _returnValue;
    id /* block */ _completionHandler;
    id /* block */ _waiterChain;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _guard;
    unsigned char _valueState : 2;
    unsigned char _completionState : 2;
    unsigned int _reserved : 28;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleCompletion:(id /* block */)a0;
- (void)_checkedAssign:(id /* block */)a0;
- (void)invokeCompletionWithReturnValue:(id)a0 error:(id)a1;
- (void)waitForFulfillment;

@end
