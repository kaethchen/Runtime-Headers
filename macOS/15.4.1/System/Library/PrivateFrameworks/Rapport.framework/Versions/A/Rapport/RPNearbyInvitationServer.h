@class NSString, NSMutableDictionary, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface RPNearbyInvitationServer : NSObject <NSSecureCoding> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableDictionary *_sessions;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) id /* block */ sessionStartHandler;
@property (copy, nonatomic) id /* block */ sessionEndedHandler;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_activateWithCompletion:(id /* block */)a0 reactivate:(BOOL)a1;
- (void)nearbyInvitationReceivedEventID:(id)a0 event:(id)a1 options:(id)a2 sessionID:(id)a3;
- (void)nearbyInvitationReceivedRequestID:(id)a0 request:(id)a1 options:(id)a2 responseHandler:(id /* block */)a3 sessionID:(id)a4;
- (void)nearbyInvitationSessionEndedWithID:(id)a0;
- (void)nearbyInvitationSessionError:(id)a0 withID:(id)a1;
- (void)nearbyInvitationStartServerSessionID:(id)a0 device:(id)a1 completion:(id /* block */)a2;

@end
