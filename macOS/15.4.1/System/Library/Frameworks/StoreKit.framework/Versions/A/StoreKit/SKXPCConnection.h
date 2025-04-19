@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface SKXPCConnection : NSObject {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* block */ _disconnectBlock;
    id /* block */ _messageBlock;
}

@property (copy) id /* block */ disconnectBlock;
@property (copy) id /* block */ messageBlock;

- (id)init;
- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)a0;
- (id)initWithServiceName:(id)a0;
- (void)sendMessage:(id)a0;
- (id)_initSKXPCConnection;
- (void)_reloadEventHandler;
- (id)createXPCEndpoint;
- (void)sendMessage:(id)a0 withReply:(id /* block */)a1;
- (void)sendSynchronousMessage:(id)a0 withReply:(id /* block */)a1;

@end
