@class NSError, NSString, NSMutableSet, RPCompanionLinkClient, COCompanionLinkClientFactory, NSObject;
@protocol OS_dispatch_queue;

@interface COCompanionLinkClient : NSObject <COCompanionLinkClientProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _Atomic BOOL _isInvalidated;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ stateUpdatedHandler;
@property (copy, nonatomic) id /* block */ errorFlagsChangedHandler;
@property (copy, nonatomic) id /* block */ disconnectHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ deviceFoundHandler;
@property (copy, nonatomic) id /* block */ deviceLostHandler;
@property (copy, nonatomic) id /* block */ localDeviceUpdatedHandler;
@property (copy, nonatomic) id /* block */ deviceChangedHandler;
@property (copy, nonatomic) id /* block */ requestIDRegistrationCompletion;
@property (copy, nonatomic) id /* block */ eventIDRegistrationCompletion;
@property (weak, nonatomic) COCompanionLinkClientFactory *factory;
@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, nonatomic) RPCompanionLinkClient *rapport;
@property (copy, nonatomic) NSError *activationError;
@property (copy, nonatomic) id /* block */ activationHandler;
@property (readonly, copy, nonatomic) NSMutableSet *registeredEventIDs;
@property (readonly, copy, nonatomic) NSMutableSet *registeredRequestIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)isInvalidated;
- (void)didInvalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)activeDevices;
- (unsigned long long)controlFlags;
- (id)destinationDevice;
- (void)registerRequestID:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)setControlFlags:(unsigned long long)a0;
- (void)sendRequestID:(id)a0 request:(id)a1 options:(id)a2 responseHandler:(id /* block */)a3;
- (void)registerEventID:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)deregisterRequestID:(id)a0;
- (void)deregisterEventID:(id)a0;
- (unsigned long long)errorFlags;
- (id)localDevice;
- (void)sendEventID:(id)a0 event:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (BOOL)usingOnDemandConnection;
- (void)_withLock:(id /* block */)a0;
- (void)didActivateWithError:(id)a0;
- (void)didChangeErrorFlags;
- (void)didDisconnect;
- (void)didInterrupt;
- (void)didUpdateState;
- (id)initWithCompanionLinkClient:(id)a0;

@end
