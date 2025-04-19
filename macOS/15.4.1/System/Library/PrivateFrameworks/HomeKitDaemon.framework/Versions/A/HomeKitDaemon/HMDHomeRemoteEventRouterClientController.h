@class NSUUID, NSString, HMEDelegatingEventRouter, HMDUserMessagePolicy, HMFFuture, NSMutableArray, NSObject, HMDRemoteEventRouterPrimaryResidentClient;
@protocol OS_dispatch_queue, HMDHomeRemoteEventRouterClientControllerDataSource, HMDHomeRemoteEventRouterClientFactory;

@interface HMDHomeRemoteEventRouterClientController : NSObject <HMDRemoteEventRouterClientDataSource, HMEDelegatingEventRouterDataSource, HMECachedEventSource> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_messageTargetUUID;
    NSString *_requestMessageName;
    NSString *_updateMessageName;
    NSString *_multiHopFetchResponseMessageName;
    id<HMDHomeRemoteEventRouterClientControllerDataSource> _dataSource;
    HMDUserMessagePolicy *_clientUserMessagePolicy;
    id<HMDHomeRemoteEventRouterClientFactory> _routerClientFactory;
    HMDRemoteEventRouterPrimaryResidentClient *_remoteEventRouterPrimaryResidentClient;
    NSMutableArray *_residentClients;
    NSUUID *_currentAccessoryUUID;
    HMFFuture *_remoteTransportStartFuture;
}

@property (readonly) HMEDelegatingEventRouter *residentDelegatingEventRouter;
@property (readonly) NSUUID *homeUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isCachedEventSourceCurrentProcess;

- (void).cxx_destruct;
- (BOOL)isNetworkAvailable;
- (void)client:(id)a0 connectDidFailWithError:(id)a1;
- (void)client:(id)a0 connectionStatusDidChange:(BOOL)a1;
- (void)client:(id)a0 didReceiveFetchedCachedEvents:(id)a1;
- (id)client:(id)a0 forwardingTopicsForTopics:(id)a1;
- (BOOL)client:(id)a0 isIdsIdentifier:(id)a1 ofAccessory:(id)a2;
- (BOOL)clientIsEnabled:(id)a0;
- (void)createResidentRouterForAccessoryUUID:(id)a0;
- (void)delegatingRouter:(id)a0 fetchCachedEventsForTopics:(id)a1 forRouter:(id)a2 cachedEventCollection:(id)a3;
- (id)delegatingRouter:(id)a0 filteredTopics:(id)a1 forRouter:(id)a2;
- (id)delegatingRouter:(id)a0 upstreamTopicsFor:(id)a1;
- (void)discoverPrimaryResidentForEventRouterClient:(id)a0;
- (id)dumpStateDescription;
- (void)fetchWithFilters:(id)a0 completion:(id /* block */)a1;
- (id)initWithMessageTargetUUID:(id)a0 workQueue:(id)a1 dataSource:(id)a2 requestMessageName:(id)a3 updateMessageName:(id)a4 multiHopFetchResponseMessageName:(id)a5 clientUserMessagePolicy:(id)a6 currentAccessoryUUID:(id)a7 assertionController:(id)a8;
- (id)initWithMessageTargetUUID:(id)a0 workQueue:(id)a1 dataSource:(id)a2 routerClientFactory:(id)a3 requestMessageName:(id)a4 updateMessageName:(id)a5 multiHopFetchResponseMessageName:(id)a6 clientUserMessagePolicy:(id)a7 currentAccessoryUUID:(id)a8 assertionController:(id)a9 remoteTransportStartFuture:(id)a10 delegatingRouterFactory:(id /* block */)a11;
- (BOOL)isCurrentDevicePrimaryResident;
- (BOOL)isPrimaryResidentClientConnected;
- (void)networkAvailabilityDidChange:(BOOL)a0;
- (id)primaryResidentChangeMonitorForRouterClient:(id)a0;
- (void)removeResidentRouterForAccessoryUUID:(id)a0;
- (id)routerClientMessageDestination:(id)a0 serverIdentifier:(out id *)a1;
- (id)routerClientPrimaryResidentDeviceIdentifier:(id)a0;
- (BOOL)routerClientShouldRestrictMessagingToLocalOnly:(id)a0;
- (BOOL)routerClientSupportsFragmentMessageForServerIdentifier:(id)a0;
- (void)updateCurrentAccessoryUUID:(id)a0;

@end
