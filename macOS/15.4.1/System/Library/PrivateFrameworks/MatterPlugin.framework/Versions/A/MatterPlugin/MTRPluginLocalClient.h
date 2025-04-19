@class MTRPluginClient, NSMutableDictionary, NSMutableSet, NSString, NSObject;
@protocol OS_dispatch_source;

@interface MTRPluginLocalClient : NSObject <MTRXPCServerProtocol, MTRDeviceDelegate, MTRDeviceControllerDelegate>

@property (weak) MTRPluginClient *pluginClient;
@property (retain) NSMutableSet *subscribedMTRDevices;
@property (retain) NSMutableSet *registeredMTRDeviceControllerIDs;
@property (retain) NSMutableDictionary *context;
@property (retain) NSMutableSet *temporarilyRegisteredNodeIDs;
@property (retain) NSObject<OS_dispatch_source> *temporaryDeviceCleanupSource;
@property (retain) NSMutableSet *registeredNodeIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localDispatchQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)logState;
- (id)deviceController;
- (void)device:(id)a0 receivedAttributeReport:(id)a1;
- (void)device:(id)a0 receivedEventReport:(id)a1;
- (void)device:(id)a0 stateChanged:(unsigned long long)a1;
- (void)deviceBecameActive:(id)a0;
- (void)deviceCachePrimed:(id)a0;
- (void)deviceConfigurationChanged:(id)a0;
- (void)controller:(id)a0 suspendedChangedTo:(BOOL)a1;
- (void)device:(id)a0 internalStateUpdated:(id)a1;
- (oneway void)deviceController:(id)a0 deleteNodeID:(id)a1;
- (oneway void)deviceController:(id)a0 getNodesWithStoredDataWithReply:(id /* block */)a1;
- (oneway void)deviceController:(id)a0 nodeID:(id)a1 downloadLogOfType:(long long)a2 timeout:(double)a3 completion:(id /* block */)a4;
- (oneway void)deviceController:(id)a0 nodeID:(id)a1 getDeviceCachePrimedWithReply:(id /* block */)a2;
- (oneway void)deviceController:(id)a0 nodeID:(id)a1 getEstimatedStartTimeWithReply:(id /* block */)a2;
- (oneway void)deviceController:(id)a0 nodeID:(id)a1 getEstimatedSubscriptionLatencyWithReply:(id /* block */)a2;
- (oneway void)deviceController:(id)a0 nodeID:(id)a1 getStateWithReply:(id /* block */)a2;
- (oneway void)deviceController:(id)a0 nodeID:(id)a1 invokeCommandWithEndpointID:(id)a2 clusterID:(id)a3 commandID:(id)a4 commandFields:(id)a5 expectedValues:(id)a6 expectedValueInterval:(id)a7 timedInvokeTimeout:(id)a8 serverSideProcessingTimeout:(id)a9 completion:(id /* block */)a10;
- (oneway void)deviceController:(id)a0 nodeID:(id)a1 invokeCommands:(id)a2 completion:(id /* block */)a3;
- (oneway void)deviceController:(id)a0 nodeID:(id)a1 openCommissioningWindowWithSetupPasscode:(id)a2 discriminator:(id)a3 duration:(id)a4 completion:(id /* block */)a5;
- (oneway void)deviceController:(id)a0 nodeID:(id)a1 readAttributePaths:(id)a2 withReply:(id /* block */)a3;
- (oneway void)deviceController:(id)a0 nodeID:(id)a1 readAttributeWithEndpointID:(id)a2 clusterID:(id)a3 attributeID:(id)a4 params:(id)a5 withReply:(id /* block */)a6;
- (oneway void)deviceController:(id)a0 nodeID:(id)a1 writeAttributeWithEndpointID:(id)a2 clusterID:(id)a3 attributeID:(id)a4 value:(id)a5 expectedValueInterval:(id)a6 timedWriteTimeout:(id)a7;
- (oneway void)deviceController:(id)a0 updateControllerConfiguration:(id)a1;
- (id)_deviceForControllerUUID:(id)a0 nodeID:(id)a1 requestedViaDelegate:(BOOL)a2;
- (void)_registerDevice:(id)a0 addedViaDelegate:(BOOL)a1;
- (void)_unregisterDevice:(id)a0;
- (void)addDelegateForDevice:(id)a0 interestedPathsForAttributes:(id)a1 interestedPathsForEvents:(id)a2;
- (void)device:(id)a0 injectAttributeReport:(id)a1;
- (void)device:(id)a0 injectEventReport:(id)a1;
- (id)initWithPluginClient:(id)a0;
- (void)removeDelegateForDevice:(id)a0;
- (void)reportAllAttributesForDevice:(id)a0;
- (void)reportAllInternalStateForDevice:(id)a0;

@end
