@class NSUUID, NSXPCConnection, MTRPluginClient, NSDictionary, NSObject, NSString;
@protocol OS_dispatch_queue, MTRPluginClientConnectionDelegate;

@interface MTRPluginClientConnection : NSObject <MTRXPCServerProtocol>

@property (retain) NSXPCConnection *connection;
@property int pid;
@property BOOL backgroundModeEntitled;
@property (retain) id<MTRPluginClientConnectionDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain) NSUUID *homeUUID;
@property (retain) NSUUID *sessionID;
@property (retain) MTRPluginClient *pluginClient;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSDictionary *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientConnectionQueue;
+ (id)_interfaceForClientProtocol;
+ (id)_interfaceForServerProtocol;

- (void).cxx_destruct;
- (void)invalidate;
- (void)resume;
- (void)interrupted;
- (void)invalidated;
- (BOOL)_setupConnection;
- (BOOL)_isRunning;
- (id)initWithClientConnection:(id)a0 backgroundModeEntitled:(BOOL)a1 pid:(int)a2 context:(id)a3 delegate:(id)a4 delegateQueue:(id)a5;
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
- (void)_assignHomeUUIDIfUnassigned:(id)a0;
- (BOOL)_deliverMessagePayloadToPrimaryResident:(id)a0 responseHandler:(id /* block */)a1;
- (void)updateControllerConfigurationForRemotePeer;

@end
