@class NSXPCListener, HMDHomeManager, NSString, NSMutableSet, NSObject, HMDProcessMonitor;
@protocol OS_dispatch_queue;

@interface HMDMatterXPCListener : HMFObject <MTRPluginClientConnectionDelegate, MTRPluginServerDelegate, NSXPCListenerDelegate, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSXPCListener *listener;
@property (readonly, weak, nonatomic) HMDHomeManager *homeManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *processMonitorQueue;
@property (readonly, nonatomic) HMDProcessMonitor *processMonitor;
@property (readonly, nonatomic) NSMutableSet *mutableConnections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (void)stop;
- (id)initWithHomeManager:(id)a0;
- (id)_homeForUUID:(id)a0;
- (id)_runningModeToString:(long long)a0;
- (BOOL)connection:(id)a0 allowsOperationWithHome:(id)a1 operationType:(long long)a2 nodeId:(id)a3 commandId:(id)a4 endpointId:(id)a5 clusterId:(id)a6 attributeId:(id)a7;
- (BOOL)connection:(id)a0 sendMessagePayloadToPrimaryResident:(id)a1 responseHandler:(id /* block */)a2 error:(id *)a3;
- (void)handleInHomeGeoChangeNotification:(id)a0;
- (void)handlePrimaryResidentUpdateNotification:(id)a0;
- (long long)runningModeForHomeUUID:(id)a0;
- (BOOL)sendMessage:(id)a0 homeUUID:(id)a1 error:(id *)a2;

@end
