@class NSXPCConnection, NSUUID, MTRPluginRemoteClient, NSString, NSMutableDictionary, MTRPluginClientXPCProxy, NSDictionary, NSMutableSet, MTRPluginLocalClient, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MTRPluginClient : NSObject <MTRXPCServerProtocol>

@property (retain) NSMutableDictionary *delegateProxies;
@property (retain) MTRPluginRemoteClient *remoteClient;
@property (retain) MTRPluginClientXPCProxy *clientProxy;
@property (retain) NSXPCConnection *xpcConnection;
@property (retain) MTRPluginLocalClient *localClient;
@property int clientType;
@property (retain) NSDictionary *controllerConfiguration;
@property (retain) NSMutableSet *subscribedMTRDevices;
@property (retain) NSUUID *sessionID;
@property (retain) NSUUID *controllerUUID;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) NSMutableDictionary *context;
@property (retain) NSObject<OS_dispatch_source> *updateControllerConfigurationTimer;
@property (readonly, getter=isInRemoteMode) BOOL inRemoteMode;
@property (retain) NSUUID *homeUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)_remoteTarget;
- (oneway void)deviceController:(id)a0 deleteNodeID:(id)a1;
- (oneway void)deviceController:(id)a0 getNodesWithStoredDataWithReply:(id /* block */)a1;
- (oneway void)deviceController:(id)a0 nodeID:(id)a1 downloadLogOfType:(long long)a2 timeout:(double)a3 completion:(id /* block */)a4;
- (oneway void)deviceController:(id)a0 nodeID:(id)a1 getDeviceCachePrimedWithReply:(id /* block */)a2;
- (oneway void)deviceController:(id)a0 nodeID:(id)a1 getEstimatedStartTimeWithReply:(id /* block */)a2;
- (oneway void)deviceController:(id)a0 nodeID:(id)a1 getEstimatedSubscriptionLatencyWithReply:(id /* block */)a2;
- (oneway void)deviceController:(id)a0 nodeID:(id)a1 getStateWithReply:(id /* block */)a2;
- (oneway void)deviceController:(id)a0 nodeID:(id)a1 invokeCommandWithEndpointID:(id)a2 clusterID:(id)a3 commandID:(id)a4 commandFields:(id)a5 expectedValues:(id)a6 expectedValueInterval:(id)a7 timedInvokeTimeout:(id)a8 serverSideProcessingTimeout:(id)a9 completion:(id /* block */)a10;
- (oneway void)deviceController:(id)a0 nodeID:(id)a1 invokeCommands:(id)a2 completion:(id /* block */)a3;
- (oneway void)deviceController:(id)a0 nodeID:(id)a1 readAttributePaths:(id)a2 withReply:(id /* block */)a3;
- (oneway void)deviceController:(id)a0 nodeID:(id)a1 readAttributeWithEndpointID:(id)a2 clusterID:(id)a3 attributeID:(id)a4 params:(id)a5 withReply:(id /* block */)a6;
- (oneway void)deviceController:(id)a0 nodeID:(id)a1 writeAttributeWithEndpointID:(id)a2 clusterID:(id)a3 attributeID:(id)a4 value:(id)a5 expectedValueInterval:(id)a6 timedWriteTimeout:(id)a7;
- (oneway void)deviceController:(id)a0 updateControllerConfiguration:(id)a1;
- (id)_currentTarget;
- (id)_localTarget;
- (id)initWithXPCConnection:(id)a0 sessionID:(id)a1 queue:(id)a2;
- (void)runningModeChanged:(long long)a0;
- (id)xpcClientConnectionQueue;

@end
