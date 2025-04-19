@class NSString, FMXPCSession, FMXPCServiceDescription, NSObject, SPAccessoryDiscoverySessionState;
@protocol OS_dispatch_queue, SPAccessoryDiscoveryXPCProtocol;

@interface SPAccessoryDiscoveryAndPairingSession : NSObject <SPAccessoryDiscoveryXPCClientProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPAccessoryDiscoveryXPCProtocol> proxy;
@property (copy, nonatomic) SPAccessoryDiscoverySessionState *state;
@property (copy, nonatomic) id /* block */ sessionInvalidatedCallback;
@property (copy, nonatomic) id /* block */ accessoryDiscoveredCallback;
@property (copy, nonatomic) id /* block */ accessoryDiscoveryErrorCallback;
@property (copy, nonatomic) id /* block */ proximityPairingFinishedCallback;
@property (copy, nonatomic) id /* block */ proximityPairingCompletedCallback;
@property (copy, nonatomic) id /* block */ proximityPairingErrorCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)remoteInterface;

- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (void)invalidationHandler:(id)a0;
- (void)accessoryProximityPairingError:(id)a0;
- (void)initiatePairingWith:(id)a0 completion:(id /* block */)a1;
- (void)accessoryDiscoveryError:(id)a0;
- (void)disableFindMyPairingWithIdentifier:(id)a0;
- (void)discoveredAccessory:(id)a0;
- (void)finalizePairingWith:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (void)finalizeProximityPairingForAccessoryIdentifier:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (id)initWithPreviousState:(id)a0;
- (void)initializeProximityPairingForAccessoryIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)interruptionHandler:(id)a0;
- (void)invalidatePairingWith:(id)a0 completion:(id /* block */)a1;
- (void)lostAccessory:(id)a0;
- (void)pairingStatus:(id)a0 completion:(id /* block */)a1;
- (void)pairingStatusWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)proximityPairingCompleted:(id)a0 beacons:(id)a1;
- (void)proximityPairingFinished:(id)a0;
- (void)startAccessoryDiscoveryWithCompletion:(id /* block */)a0;
- (void)startLocalFindableAccessoryDiscoveryWithCompletion:(id /* block */)a0;
- (void)stopAccessoryDiscoveryWithCompletion:(id /* block */)a0;
- (void)stopLocalFindableAccessoryDiscoveryWithCompletion:(id /* block */)a0;

@end
