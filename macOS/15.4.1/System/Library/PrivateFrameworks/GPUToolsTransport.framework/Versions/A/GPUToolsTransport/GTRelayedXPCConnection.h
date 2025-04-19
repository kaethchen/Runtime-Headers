@class NSObject;
@protocol OS_xpc_object, GTXPCConnection;

@interface GTRelayedXPCConnection : NSObject <GTXPCConnection> {
    id<GTXPCConnection> _connection;
    unsigned long long _relayPort;
    int _relayPid;
    BOOL _handleDeviceLocally;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (retain, nonatomic) NSObject<OS_xpc_object> *error;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)cancel;
- (void)sendMessage:(id)a0;
- (BOOL)isTrusted;
- (void)sendMessage:(id)a0 replyHandler:(id /* block */)a1;
- (id)sendMessageWithReplySync:(id)a0 error:(id *)a1;
- (void)_setRoutingPropertiesForMessage:(id)a0;
- (void)activateWithMessageHandler:(id /* block */)a0 andErrorHandler:(id /* block */)a1;
- (void)deregisterDispatcher:(unsigned long long)a0;
- (void)dispatchMessage:(id)a0 replyConnection:(id)a1;
- (id)initWithConnection:(id)a0 relayPort:(unsigned long long)a1 relayPid:(int)a2;
- (unsigned long long)registerDispatcher:(id)a0;
- (void)registerDispatcher:(id)a0 forPort:(unsigned long long)a1;
- (void)sendMessageAndWaitForDelivery:(id)a0;
- (void)setHandleDeviceLocally;
- (void)updateRelayPort:(unsigned long long)a0 pid:(int)a1;

@end
