@class NSLock, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface CKClientDispatch : NSObject {
    NSObject<OS_xpc_object> *serviceXPCConnection;
    NSLock *serviceConnectionLock;
    NSObject<OS_xpc_object> *agentXPCConnection;
    NSLock *agentConnectionLock;
    NSObject<OS_dispatch_queue> *mQueue;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cancelCallback:(id)a0;
- (id)_sendMessage:(id)a0 callbackQueue:(id)a1 callbackBlock:(id /* block */)a2;
- (void)_sendMessage:(id)a0 replyQueue:(id)a1 replyBlock:(id /* block */)a2;
- (id)_syncInvokeSelector:(id)a0 ofClass:(id)a1 withObject:(id)a2;
- (void)invokeSelector:(id)a0 ofClass:(id)a1;
- (void)invokeSelector:(id)a0 ofClass:(id)a1 replyQueue:(id)a2 replyBlock:(id /* block */)a3;
- (void)invokeSelector:(id)a0 ofClass:(id)a1 withObject:(id)a2;
- (id)invokeSelector:(id)a0 ofClass:(id)a1 withObject:(id)a2 callbackQueue:(id)a3 callbackBlock:(id /* block */)a4;
- (void)invokeSelector:(id)a0 ofClass:(id)a1 withObject:(id)a2 replyQueue:(id)a3 replyBlock:(id /* block */)a4;

@end
