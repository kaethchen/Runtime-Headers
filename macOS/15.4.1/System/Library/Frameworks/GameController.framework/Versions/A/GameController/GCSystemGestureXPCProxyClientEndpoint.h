@class NSString, GCSystemGesturesState, GCController;
@protocol NSSecureCoding, NSCopying, NSObject, GCSystemGestureXPCProxyRemoteServerEndpointInterface;

@interface GCSystemGestureXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCSystemGestureComponent, GCSystemGestureXPCProxyRemoteClientEndpointInterface> {
    GCController *_controller;
    id<GCSystemGestureXPCProxyRemoteServerEndpointInterface> _serverEndpoint;
    id _connectionInterruptionRegistration;
    id _connectionInvalidationRegistration;
    BOOL _isSystemGestureObserver;
}

@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) GCSystemGesturesState *systemGesturesState;

- (id)init;
- (void).cxx_destruct;
- (void)setController:(id)a0;
- (void)invalidateConnection;
- (void)fetchObjectIdentifierWithReply:(id /* block */)a0;
- (void)_remoteEndpointHasSetSystemGesturesState:(id)a0;
- (void)disableSystemGestureForInput:(id)a0;
- (void)enableSystemGestureForInput:(id)a0;
- (id)initWithIdentifier:(id)a0 initialSystemGesture:(id)a1 isSystemGestureObserver:(BOOL)a2;
- (BOOL)isSystemGestureObserver;
- (void)newSystemGesturesState:(id)a0;
- (void)refreshSystemGesturesState;
- (void)setRemoteEndpoint:(id)a0 connection:(id)a1;

@end
