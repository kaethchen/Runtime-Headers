@class NSString, GCController;
@protocol GCPlayerIndicatorXPCProxyRemoteServerEndpointInterface, NSSecureCoding, NSCopying, NSObject;

@interface GCPlayerIndicatorXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCControllerPlayerIndicator, GCPlayerIndicatorXPCProxyRemoteClientEndpointInterface> {
    GCController *_controller;
    id<GCPlayerIndicatorXPCProxyRemoteServerEndpointInterface> _serverEndpoint;
    id _connectionInterruptionRegistration;
    id _connectionInvalidationRegistration;
}

@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property long long playerIndex;

- (id)init;
- (void).cxx_destruct;
- (void)setController:(id)a0;
- (void)invalidateConnection;
- (void)fetchObjectIdentifierWithReply:(id /* block */)a0;
- (void)newPlayerIndex:(long long)a0;
- (void)_remoteEndpointSetPlayerIndex:(long long)a0;
- (id)initWithIdentifier:(id)a0 initialPlayerIndex:(long long)a1;
- (void)refreshPlayerIndex;
- (void)setRemoteEndpoint:(id)a0 connection:(id)a1;

@end
