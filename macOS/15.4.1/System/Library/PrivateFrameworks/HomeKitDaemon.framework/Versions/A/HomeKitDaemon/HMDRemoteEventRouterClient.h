@class HMFMessageDispatcher, NSString, NSUUID, NSNotificationCenter, NSObject, HMEMessageDatagramClient;
@protocol HMDRemoteEventRouterClientDataSource, OS_os_log, OS_dispatch_queue, HMMLogEventSubmitting;

@interface HMDRemoteEventRouterClient : NSObject <HMFMessageReceiver, HMFLogging, HMEMessageDatagramClientDataSource, HMEMessageDatagramClientDelegate, HMDRemoteEventRouterAssertionClient> {
    NSObject<OS_os_log> *_logger;
    BOOL _isPrimaryResident;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly, copy) NSString *requestMessageName;
@property (readonly, copy) NSString *updateMessageName;
@property (readonly, copy) NSString *multiHopFetchResponseMessageName;
@property (nonatomic) BOOL isConnected;
@property (nonatomic) BOOL isNetworkAvailable;
@property (readonly, weak) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, nonatomic) unsigned long long messageTransportRestriction;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly, weak) id<HMDRemoteEventRouterClientDataSource> dataSource;
@property (readonly) BOOL isPrimaryResident;
@property (readonly) HMEMessageDatagramClient *eventRouterClient;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)routerClientWithQueue:(id)a0 storeReadHandle:(id)a1 storeWriteHandle:(id)a2 logCategory:(const char *)a3;
+ (id)routerClientWithQueue:(id)a0 storeReadHandle:(id)a1 storeWriteHandle:(id)a2 retryIntervalProvider:(id)a3 logCategory:(const char *)a4;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)clientDidDisconnect:(id)a0;
- (id)eventRouter;
- (void)sendChangeRegistrationsMessageWithAddedFilters:(id)a0 removedFilters:(id)a1 completion:(id /* block */)a2;
- (void)configureIsPrimaryResident:(BOOL)a0 networkAvailable:(BOOL)a1 additionalPolicies:(id)a2;
- (void)_handleCachedEventMessage:(id)a0 fromServer:(id)a1 events:(id)a2 completion:(id /* block */)a3;
- (void)_handleEventUpdateMessage:(id)a0 fromServer:(id)a1 events:(id)a2 completion:(id /* block */)a3;
- (void)_handleMultiHopFetchResponse:(id)a0 originalMessage:(id)a1;
- (void)_handleUpdateMessage:(id)a0;
- (void)_handleUpdatedEventsRequest:(id)a0 originalMessage:(id)a1;
- (void)_registerForMessages:(id)a0;
- (id)_underlyingMessageDataFromFragmentMessageData:(id)a0 error:(id *)a1;
- (void)client:(id)a0 fetchWithFilters:(id)a1 isMultiHop:(BOOL)a2 completion:(id /* block */)a3;
- (id)client:(id)a0 forwardingTopicsForTopics:(id)a1;
- (BOOL)client:(id)a0 isConnectionTerminatingError:(id)a1;
- (void)client:(id)a0 sendChangeRegistrationsWithAddedFilters:(id)a1 removedFilters:(id)a2 completion:(id /* block */)a3;
- (id)client:(id)a0 sendConnectWithAddedFilters:(id)a1 completion:(id /* block */)a2;
- (id)client:(id)a0 upstreamTopicsForTopic:(id)a1;
- (void)clientDidConnect:(id)a0 serverIdentifier:(id)a1;
- (BOOL)clientIsEnabled:(id)a0;
- (void)didChangeFetchAvailableCondition:(BOOL)a0;
- (void)didChangeHasForegroundClient:(BOOL)a0;
- (id)dumpStateDescription;
- (void)handlePrimaryResidentConfirmedDeviceIdentifierChangeNotification:(id)a0;
- (id)initWithMessageTargetUUID:(id)a0 queue:(id)a1 dataSource:(id)a2 messageDispatcher:(id)a3 notificationCenter:(id)a4 requestMessageName:(id)a5 updateMessageName:(id)a6 multiHopFetchResponseMessageName:(id)a7 logCategory:(const char *)a8 logEventSubmitter:(id)a9 eventRouterClientFactory:(id /* block */)a10;
- (id)initWithMessageTargetUUID:(id)a0 queue:(id)a1 dataSource:(id)a2 messageDispatcher:(id)a3 notificationCenter:(id)a4 requestMessageName:(id)a5 updateMessageName:(id)a6 multiHopFetchResponseMessageName:(id)a7 storeReadHandle:(id)a8 storeWriteHandle:(id)a9;
- (id)initWithMessageTargetUUID:(id)a0 queue:(id)a1 dataSource:(id)a2 messageDispatcher:(id)a3 notificationCenter:(id)a4 requestMessageName:(id)a5 updateMessageName:(id)a6 multiHopFetchResponseMessageName:(id)a7 storeReadHandle:(id)a8 storeWriteHandle:(id)a9 logCategory:(const char *)a10;
- (id)initWithMessageTargetUUID:(id)a0 queue:(id)a1 dataSource:(id)a2 messageDispatcher:(id)a3 notificationCenter:(id)a4 requestMessageName:(id)a5 updateMessageName:(id)a6 multiHopFetchResponseMessageName:(id)a7 storeReadHandle:(id)a8 storeWriteHandle:(id)a9 retryIntervalProvider:(id)a10 logCategory:(const char *)a11;
- (void)networkAvailabilityDidChange:(BOOL)a0;
- (id /* block */)responseHandlerForMessageIdentifier:(id)a0 serverIdentifier:(id)a1 messageType:(long long)a2 completion:(id /* block */)a3;
- (void)sendChangeRegistrationsMessageWithAddedFilters:(id)a0 removedFilters:(id)a1 client:(id)a2 completion:(id /* block */)a3;
- (void)sendDisconnectForClient:(id)a0 completion:(id /* block */)a1;
- (void)sendKeepAliveForClient:(id)a0 completion:(id /* block */)a1;
- (id)sendMessageWithPayloadMessage:(id)a0 client:(id)a1 messageType:(long long)a2 completion:(id /* block */)a3;
- (void)sendMessageWithPayloadMessage:(id)a0 messageType:(long long)a1 destination:(id)a2 serverIdentifier:(id)a3 completion:(id /* block */)a4;

@end
