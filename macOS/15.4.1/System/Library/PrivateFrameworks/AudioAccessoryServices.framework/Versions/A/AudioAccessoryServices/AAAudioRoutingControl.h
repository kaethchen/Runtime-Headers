@class NSXPCListenerEndpoint, NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface AAAudioRoutingControl : NSObject <NSSecureCoding> {
    BOOL _activateCalled;
    id /* block */ _activateCompletion;
    BOOL _direct;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int clientID;
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
@property (copy, nonatomic) NSString *appBundleID;
@property (copy, nonatomic) NSString *deviceAddress;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (id)description;
- (id)init;
- (void)_activate;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)_ensureXPCStarted;
- (void)_interrupted;
- (void)_reportError:(id)a0;
- (void)_invalidateDirect;
- (void)_activateXPC:(id /* block */)a0;
- (BOOL)isSystemContext;
- (void)_handleServerDied;
- (void)_activateDirect:(id /* block */)a0;
- (void)areHeadphonesNearbyAndEligibleToPlay:(id /* block */)a0;
- (void)hrmSessionStateChanged:(BOOL)a0 completion:(id /* block */)a1;
- (void)setArbitrationBlockingModeWithCompletion:(BOOL)a0 completion:(id /* block */)a1;

@end
