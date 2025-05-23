@class MTRDeviceControllerOverXPC, NSNumber, MTRDeviceControllerXPCConnection;
@protocol NSCopying;

@interface MTRDeviceOverXPC : MTRBaseDevice

@property (readonly, nonatomic) id<NSCopying> controllerID;
@property (readonly, nonatomic) MTRDeviceControllerOverXPC *controller;
@property (readonly, nonatomic) NSNumber *nodeID;
@property (readonly, nonatomic) MTRDeviceControllerXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)downloadLogOfType:(long long)a0 timeout:(double)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)_invokeCommandWithEndpointID:(id)a0 clusterID:(id)a1 commandID:(id)a2 commandFields:(id)a3 timedInvokeTimeout:(id)a4 serverSideProcessingTimeout:(id)a5 logCall:(BOOL)a6 queue:(id)a7 completion:(id /* block */)a8;
- (void)_writeAttributeWithEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2 value:(id)a3 timedWriteTimeout:(id)a4 queue:(id)a5 completion:(id /* block */)a6;
- (void)deregisterReportHandlersWithQueue:(id)a0 completion:(id /* block */)a1;
- (void)fetchProxyHandleWithQueue:(id)a0 completion:(id /* block */)a1;
- (id)initWithControllerOverXPC:(id)a0 deviceID:(id)a1 xpcConnection:(id)a2;
- (void)invokeCommandWithEndpointID:(id)a0 clusterID:(id)a1 commandID:(id)a2 commandFields:(id)a3 timedInvokeTimeout:(id)a4 queue:(id)a5 completion:(id /* block */)a6;
- (void)openCommissioningWindowWithDiscriminator:(id)a0 duration:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)openCommissioningWindowWithSetupPasscode:(id)a0 discriminator:(id)a1 duration:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)readAttributePaths:(id)a0 eventPaths:(id)a1 params:(id)a2 includeDataVersion:(BOOL)a3 queue:(id)a4 completion:(id /* block */)a5;
- (void)readAttributePaths:(id)a0 eventPaths:(id)a1 params:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)readAttributesWithEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2 params:(id)a3 queue:(id)a4 completion:(id /* block */)a5;
- (void)subscribeToAttributesWithEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2 params:(id)a3 queue:(id)a4 reportHandler:(id /* block */)a5 subscriptionEstablished:(id /* block */)a6;
- (void)subscribeWithQueue:(id)a0 params:(id)a1 clusterStateCacheContainer:(id)a2 attributeReportHandler:(id /* block */)a3 eventReportHandler:(id /* block */)a4 errorHandler:(id /* block */)a5 subscriptionEstablished:(id /* block */)a6 resubscriptionScheduled:(id /* block */)a7;

@end
