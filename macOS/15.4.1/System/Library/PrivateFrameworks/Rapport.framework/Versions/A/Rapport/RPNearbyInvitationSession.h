@class NSObject, NSString, NSXPCConnection, NSMutableDictionary, RPNearbyInvitationServer, NSNumber, RPNearbyInvitationDevice;
@protocol OS_dispatch_queue;

@interface RPNearbyInvitationSession : NSObject <NSSecureCoding, RPNearbyInvitationXPCClientInterface, RPMessageable> {
    BOOL _activateCalled;
    NSMutableDictionary *_eventRegistrations;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableDictionary *_requestRegistrations;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RPNearbyInvitationDevice *daemonDevice;
@property (retain, nonatomic) RPNearbyInvitationServer *server;
@property (copy, nonatomic) NSNumber *sessionID;
@property (retain, nonatomic) NSXPCConnection *xpcCnx;
@property (nonatomic) BOOL waitingToConnect;
@property (nonatomic) BOOL failedToConnect;
@property (retain, nonatomic) RPNearbyInvitationDevice *destinationDevice;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *serviceType;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)registerRequestID:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)sendRequestID:(id)a0 request:(id)a1 destinationID:(id)a2 options:(id)a3 responseHandler:(id /* block */)a4;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)sendRequestID:(id)a0 request:(id)a1 options:(id)a2 responseHandler:(id /* block */)a3;
- (void)registerEventID:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)sendEventID:(id)a0 event:(id)a1 destinationID:(id)a2 options:(id)a3 completion:(id /* block */)a4;
- (void)deregisterRequestID:(id)a0;
- (void)_activateWithCompletion:(id /* block */)a0 reactivate:(BOOL)a1;
- (void)_sendRequestID:(id)a0 request:(id)a1 destinationID:(id)a2 options:(id)a3 responseHandler:(id /* block */)a4;
- (void)deregisterEventID:(id)a0;
- (void)nearbyInvitationReceivedEventID:(id)a0 event:(id)a1 options:(id)a2 sessionID:(id)a3;
- (void)nearbyInvitationReceivedRequestID:(id)a0 request:(id)a1 options:(id)a2 responseHandler:(id /* block */)a3 sessionID:(id)a4;
- (void)nearbyInvitationSessionError:(id)a0;
- (void)sendEventID:(id)a0 event:(id)a1 options:(id)a2 completion:(id /* block */)a3;

@end
