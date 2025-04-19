@class NSString, NSMutableDictionary, RPCompanionLinkClient, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, HMDRapportMessagingReachabilityDelegate, HMDRapportMessagingClientFactory;

@interface HMDRapportMessaging : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_workQueue;
    id<HMDRapportMessagingClientFactory> _clientFactory;
    RPCompanionLinkClient *_discoveryClient;
    id /* block */ _requestHandler;
    id /* block */ _hmmmRequestHandler;
    id /* block */ _hmmmEnergyRequestHandler;
    NSMutableArray *_requestQueue;
    NSMutableArray *_hmmmRequestQueue;
    NSMutableArray *_hmmmEnergyRequestQueue;
    NSMutableDictionary *_deviceClients;
}

@property (weak, nonatomic) id<HMDRapportMessagingReachabilityDelegate> reachabilityDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)registerRequestHandler:(id /* block */)a0;
- (id)_clientForIDSIdentifier:(id)a0 withDevice:(id)a1;
- (void)_completeQuededRequestsOnWorkQueue:(id)a0;
- (void)_completeQueuedRequests;
- (void)_configureDiscoveryClientWithCompletion:(id /* block */)a0;
- (id)_createRapportClientForDevice:(id)a0;
- (void)_handleHMMMEnergyRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)_handleHMMMRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)_handleRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)_invalidateDestinationDeviceWithIDSIdentifier:(id)a0;
- (void)_queueHMMMEnergyRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)_queueHMMMRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)_queueRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)_updateDevice:(id)a0 reachable:(BOOL)a1;
- (void)configureDiscoveryClientWithCompletion:(id /* block */)a0;
- (id)initWithClientFactory:(id)a0;
- (BOOL)isRapportDeviceDiscoveredWithIdentifier:(id)a0;
- (void)registerHMMMEnergyRequestHandler:(id /* block */)a0;
- (void)registerHMMMRequestHandler:(id /* block */)a0;
- (void)sendRequest:(id)a0 requestID:(id)a1 destinationID:(id)a2 options:(id)a3 responseHandler:(id /* block */)a4;

@end
