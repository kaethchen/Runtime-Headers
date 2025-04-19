@class NSObject, OS_xpc_remote_connection, NSMutableArray;
@protocol OS_dispatch_queue;

@interface KDLRemoteXPCConnection : NSObject {
    OS_xpc_remote_connection *_listener;
    NSMutableArray *_connections;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _handler;
}

- (id)init;
- (void).cxx_destruct;
- (unsigned int)sendMessage:(id)a0;
- (unsigned int)connect;
- (unsigned int)sendMessage:(id)a0 reply:(id *)a1;
- (unsigned int)handleConnectionEvent:(id)a0 event:(id)a1;
- (unsigned int)handleNewXPCConnection:(id)a0;
- (unsigned int)listenWithHandler:(id /* block */)a0;

@end
