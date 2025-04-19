@class NSMutableDictionary, NSString, RPCompanionLinkClient, NSObject;
@protocol OS_dispatch_queue, CCRapportManagerDelegate, OS_dispatch_source;

@interface CCRapportManager : NSObject {
    RPCompanionLinkClient *_discoveryClient;
    unsigned long long _discoveryClientState;
    NSString *_personaIdentifier;
    NSMutableDictionary *_devices;
    NSMutableDictionary *_unsupportedDevices;
    BOOL _sharedUse;
    NSObject<OS_dispatch_source> *_sigtermSource;
}

@property (retain, nonatomic) NSMutableDictionary *registeredRequests;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<CCRapportManagerDelegate> delegate;

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)deviceWithIdentifier:(id)a0;
- (id)discoveredDevices;
- (id)localDevice;
- (void)didDiscoverDevice:(id)a0;
- (void)didLoseDevice:(id)a0;
- (void)activateDirectLinkToDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)activateDiscoveryClientWithCompletion:(id /* block */)a0;
- (void)activateDiscoveryLinkWithCompletion:(id /* block */)a0;
- (void)createDiscoveryClientIfNotExists;
- (void)createDiscoveryClientWithControlFlags:(unsigned long long)a0;
- (void)createSharedDiscoveryClientIfNotExists;
- (void)device:(id)a0 didChange:(unsigned int)a1;
- (void)finishedSendingRequestsToDevice:(id)a0;
- (void)handleActivationForDevice:(id)a0 error:(id)a1;
- (void)handleDiscoveryClientActivationOrError:(id)a0;
- (void)handleDiscoveryClientInvalidation;
- (void)handleInterruptionForDevice:(id)a0;
- (id)initWithQueue:(id)a0 forSharedUse:(BOOL)a1;
- (void)invalidateDirectLinkToDevice:(id)a0;
- (void)localDeviceUpdated:(id)a0;
- (void)registerEventID:(id)a0 eventHandler:(id /* block */)a1;
- (void)registerForSigterm;
- (void)registerLocalDeviceUpdatedHandler:(id /* block */)a0;
- (void)registerRequestID:(id)a0 requestHandler:(id /* block */)a1;
- (void)sendEvent:(id)a0 event:(id)a1 toDevice:(id)a2 completionHandler:(id /* block */)a3;
- (void)sendNextRequestToDevice:(id)a0;
- (void)sendRequest:(id)a0 request:(id)a1 device:(id)a2 options:(id)a3 responseHandler:(id /* block */)a4;
- (void)sendRequest:(id)a0 request:(id)a1 toDevice:(id)a2 responseHandler:(id /* block */)a3;

@end
