@class NSXPCConnection;

@interface NRDUpdateDaemonClientImpl : NSObject {
    NSXPCConnection *_serverConnection;
    BOOL _connected;
}

- (void).cxx_destruct;
- (void)_invalidateConnection;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)a0;
- (void)acquireNRDUpdateBrain:(id)a0 reply:(id /* block */)a1;
- (void)connectToServerIfNecessary;
- (void)getNRDUpdateBrainEndpoint:(id /* block */)a0;
- (void)handleConnectionError:(id)a0 method:(const char *)a1 handler:(id /* block */)a2;
- (void)noteConnectionDropped;
- (BOOL)resendOnError:(id)a0;
- (void)update:(id)a0 reply:(id /* block */)a1;

@end
