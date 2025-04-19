@class MTRPluginClient, NSString;
@protocol MTRPluginProtobufMessageTransport;

@interface MTRPluginRemoteClient : NSObject <MTRPluginProtobufMessageTransportDelegate, MTRXPCServerProtocol>

@property (retain) id<MTRPluginProtobufMessageTransport> transport;
@property (weak) MTRPluginClient *client;
@property (getter=isSuspended) BOOL suspended;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deviceFromNodeID:(id)a0 controllerID:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)resume;
- (void)suspend;
- (id)initWithClient:(id)a0 queue:(id)a1;
- (void)_registerForMessages;
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
- (oneway void)downloadLogOfType:(long long)a0 nodeID:(id)a1 timeout:(double)a2 completion:(id /* block */)a3;
- (void)_closeRemoteServerSession;
- (void)messageTransport:(id)a0 handleControllerConfigUpdated:(id)a1;
- (void)messageTransport:(id)a0 handleDeviceAttributeReport:(id)a1;
- (void)messageTransport:(id)a0 handleDeviceBecameActive:(id)a1;
- (void)messageTransport:(id)a0 handleDeviceCachePrimed:(id)a1;
- (void)messageTransport:(id)a0 handleDeviceConfigurationChanged:(id)a1;
- (void)messageTransport:(id)a0 handleDeviceEventReport:(id)a1;
- (void)messageTransport:(id)a0 handleDeviceInternalStateUpdated:(id)a1;
- (void)messageTransport:(id)a0 handleDeviceStateChanged:(id)a1;
- (void)sendControllerMessageToHomeWithID:(id)a0 controllerMessageType:(int)a1 queryRequestValue:(id)a2 metric:(id)a3 errorBlock:(id /* block */)a4 replyBlock:(id /* block */)a5;
- (void)sendDeviceMessageToNodeWithID:(id)a0 homeID:(id)a1 deviceNodeMessageType:(int)a2 metric:(id)a3 errorBlock:(id /* block */)a4 replyBlock:(id /* block */)a5;
- (void)sendMessageToHomeWithID:(id)a0 messageType:(int)a1 pbCodable:(id)a2 metrics:(id)a3 errorBlock:(id /* block */)a4 replyBlock:(id /* block */)a5;
- (void)sendOnewayMessageToHomeWithID:(id)a0 messageType:(int)a1 pbCodable:(id)a2;

@end
