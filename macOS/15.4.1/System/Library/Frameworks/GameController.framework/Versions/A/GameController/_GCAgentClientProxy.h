@class NSArray, _GCControllerManagerServer, GCRemoteUserDefaultsProxy;
@protocol _GCIPCIncomingConnection;

@interface _GCAgentClientProxy : NSObject <GCUserDefaultsXPCProxyServiceRemoteServerInterface, _GCAgentServerInterface> {
    _GCControllerManagerServer *_server;
    _Atomic BOOL _invalid;
    id<_GCIPCIncomingConnection> _connection;
    id _connectionInvalidationRegistration;
    id _connectionInterruptedRegistration;
    GCRemoteUserDefaultsProxy *_userDefaultsProxy;
}

@property (readonly, weak, nonatomic) GCRemoteUserDefaultsProxy *userDefaultsProxy;
@property (copy) NSArray *invalidationHandlers;

+ (id)clientProxyWithConnection:(id)a0 server:(id)a1 userDefaultsProxy:(id)a2;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)redactedDescription;
- (void)_invalidate;
- (void)pingWithReply:(id /* block */)a0;
- (id)_initWithConnection:(id)a0 server:(id)a1 userDefaultsProxy:(id)a2;
- (void)connectToUserDefaultsXPCProxyServiceWithClient:(id)a0 reply:(id /* block */)a1;
- (void)connectToVideoRelocationXPCProxyServiceWithClient:(id)a0 reply:(id /* block */)a1;
- (void)getTheLastGeneratedURLWithReply:(id /* block */)a0;
- (void)observeUserDefaultsValueForKeyPath:(id)a0 change:(id)a1;
- (void)userDefaultsCheckIn:(id)a0;

@end
