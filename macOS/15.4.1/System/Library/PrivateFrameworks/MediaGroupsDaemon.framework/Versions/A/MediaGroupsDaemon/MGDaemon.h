@class MGGroupsQueryAgent, MGRemoteQueryServerManager, MGRemoteQueryClientManager, MGClientService, NSString, NSDictionary, NSObject, MGServiceListenerProvider, NSXPCListener, MGServiceClientSet, MGGroupsMediator;
@protocol OS_dispatch_queue;

@interface MGDaemon : NSObject <NSXPCListenerDelegate, MGServiceInterfaceProtocol, MGGroupsQueryAgentDelegate, MGInternalQueryRunner>

@property (readonly, nonatomic) MGServiceListenerProvider *listenerProvider;
@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) MGServiceClientSet *clients;
@property (readonly, nonatomic) MGGroupsMediator *localGroupsMediator;
@property (readonly, nonatomic) MGGroupsMediator *homekitGroupsMediator;
@property (copy, nonatomic) NSDictionary *internalQueries;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ topologyRequestHandler;
@property (readonly, nonatomic) MGGroupsQueryAgent *queryAgent;
@property (readonly, nonatomic) MGRemoteQueryServerManager *remoteQueryServer;
@property (readonly, nonatomic) MGRemoteQueryClientManager *remoteQueryClient;
@property (retain, nonatomic) MGClientService *serviceForIngestion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)daemon;
+ (id)daemonWithTopologyRequestHandler:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)stopQuery:(id)a0;
- (void)addHomeKitHome:(id)a0;
- (void)addHomeKitMediaSystem:(id)a0 fromHome:(id)a1;
- (void)addHomeKitAccessory:(id)a0 fromHome:(id)a1;
- (void)addHomeKitRoom:(id)a0 fromHome:(id)a1;
- (void)addHomeKitZone:(id)a0 fromHome:(id)a1;
- (void)removeHomeKitAccessory:(id)a0 fromHome:(id)a1;
- (void)removeHomeKitHome:(id)a0;
- (void)removeHomeKitMediaSystem:(id)a0 fromHome:(id)a1;
- (void)removeHomeKitRoom:(id)a0 fromHome:(id)a1;
- (void)removeHomeKitZone:(id)a0 fromHome:(id)a1;
- (void)HomeKitAccessoryOfType:(id)a0 accessoryIdentifier:(id)a1 homeIdentifier:(id)a2 categoryType:(id)a3 name:(id)a4 properties:(id)a5 completion:(id /* block */)a6;
- (void)addMember:(id)a0 group:(id)a1 completion:(id /* block */)a2;
- (void)createGroupWithType:(id)a0 name:(id)a1 members:(id)a2 completion:(id /* block */)a3;
- (void)deleteGroup:(id)a0 completion:(id /* block */)a1;
- (void)removeMember:(id)a0 group:(id)a1 completion:(id /* block */)a2;
- (void)setName:(id)a0 group:(id)a1 completion:(id /* block */)a2;
- (void)startQueryWithPredicate:(id)a0 completion:(id /* block */)a1;
- (void)stopQuery:(id)a0 completion:(id /* block */)a1;
- (void)_addHomeKitAccessoryWithoutHomeIngestion:(id)a0 fromHome:(id)a1;
- (void)_fetchGroupInfo:(id)a0 completion:(id /* block */)a1;
- (void)_homeTheaterGroupIdentifierForAudioDestination:(id)a0 fromHome:(id)a1 completion:(id /* block */)a2;
- (void)_ingestHomeKitHome:(id)a0;
- (void)addHomeKitMediaSystem:(id)a0;
- (void)groupsQueryAgent:(id)a0 didFindResults:(id)a1 forQuery:(id)a2;
- (id)initWithServiceListenerProvider:(id)a0;
- (id)initWithTopologyRequestHandler:(id /* block */)a0 serviceListenerProvider:(id)a1;
- (void)removeHomeKitMediaSystem:(id)a0;
- (id)startInternalQueryWithPredicate:(id)a0 handler:(id /* block */)a1;
- (void)startOutstandingQueryWithPredicate:(id)a0 handler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)stopInternalQuery:(id)a0;
- (void)stopOutstandingQuery:(id)a0;

@end
