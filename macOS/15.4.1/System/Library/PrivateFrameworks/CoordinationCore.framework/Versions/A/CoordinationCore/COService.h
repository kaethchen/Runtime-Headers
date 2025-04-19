@class NSXPCListener, COCoordinationServiceClientSet, NSDictionary, NSString, NSObject;
@protocol COServiceAddOnProvider, COServiceListenerProvider, OS_dispatch_queue, COServiceDelegate;

@interface COService : NSObject <NSXPCListenerDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) NSXPCListener *listener;
@property (copy, nonatomic) COCoordinationServiceClientSet *clients;
@property (copy, nonatomic) NSDictionary *assertions;
@property (copy, nonatomic) NSDictionary *addOns;
@property (readonly, nonatomic) id<COServiceListenerProvider> listenerProvider;
@property (readonly, nonatomic) id<COServiceAddOnProvider> addOnProvider;
@property (readonly, weak, nonatomic) id<COServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isAllowedClient:(id)a0;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)clientForConnection:(id)a0;
- (id)currentClient;
- (void)_addMesh:(id)a0 forClusters:(id)a1;
- (void)_addOnAdded:(id)a0;
- (id)_addOnForCluster:(id)a0;
- (void)_addOnForCluster:(id)a0 completion:(id /* block */)a1;
- (void)_addOnRemoved:(id)a0;
- (BOOL)_applicableToCluster:(id)a0;
- (void)_clientLost:(id)a0;
- (id)_clustersForAddOn:(id)a0;
- (void)_configureServiceInterfacesOnConnection:(id)a0;
- (id)_newClientForConnection:(id)a0;
- (void)_releaseAssertionForCluster:(id)a0;
- (void)_removeMeshForClusters:(id)a0;
- (void)_serviceReady;
- (void)_takeAssertionForCluster:(id)a0;
- (id)_uniqueAddOns;
- (id)initWithListenerProvider:(id)a0 addOnProvider:(id)a1 delegate:(id)a2;
- (void)joinClusters:(id)a0 usingMeshController:(id)a1 withClusterIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)leaveClusters:(id)a0 withClusterIdentifier:(id)a1 completion:(id /* block */)a2;

@end
