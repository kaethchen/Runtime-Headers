@class NSString;
@protocol GCPlayerIndicatorXPCProxyRemoteClientEndpointInterface, NSSecureCoding, GCPlayerIndicatorXPCProxyServerEndpointDelegate, _GCIPCEndpointConnection, NSCopying, _GCControllerComponentDescription, NSObject;

@interface GCPlayerIndicatorXPCProxyServerEndpoint : NSObject <_GCIPCEndpointServer, GCPlayerIndicatorXPCProxyRemoteServerEndpointInterface> {
    id<GCPlayerIndicatorXPCProxyRemoteClientEndpointInterface> _clientEndpoint;
    id<_GCIPCEndpointConnection> _connection;
    id _connectionInterruptionRegistration;
    id _connectionInvalidationRegistration;
    unsigned long long _pendingUpdates;
}

@property (readonly, nonatomic) id<_GCControllerComponentDescription> receiverDescription;
@property (weak, nonatomic) id<GCPlayerIndicatorXPCProxyServerEndpointDelegate> delegate;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) long long playerIndex;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidateConnection;
- (id)initWithInitialValue:(long long)a0;
- (void)fetchObjectIdentifierWithReply:(id /* block */)a0;
- (void)newPlayerIndex:(long long)a0;
- (BOOL)acceptClient:(id)a0 onConnection:(id)a1 error:(id *)a2;
- (void)fetchPlayerIndexWithReply:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 initialValue:(long long)a1;
- (void)invalidateClient;

@end
