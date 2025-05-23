@class MTRDeviceController, MTRDeviceController_Concrete;

@interface MTRBaseDevice : NSObject

@property (readonly, nonatomic) BOOL isPASEDevice;
@property (readonly, nonatomic) MTRDeviceController *deviceController;
@property (readonly, nonatomic) unsigned long long nodeID;
@property (readonly, nonatomic) MTRDeviceController_Concrete *concreteController;
@property (readonly) unsigned char sessionTransportType;

+ (id)deviceWithNodeID:(id)a0 controller:(id)a1;
+ (struct PacketBufferHandle { struct PacketBuffer *x0; })_responseDataForCommand:(id)a0 clusterID:(unsigned int)a1 commandID:(unsigned int)a2 error:(id *)a3;
+ (id)eventReportForHeader:(const struct EventHeader { struct ConcreteEventPath { unsigned short x0; BOOL x1; unsigned int x2; unsigned int x3; } x0; unsigned long long x1; unsigned char x2; struct Timestamp { unsigned char x0; unsigned long long x1; } x3; } *)a0 andData:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)downloadLogOfType:(long long)a0 timeout:(double)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)_invokeCommandWithEndpointID:(id)a0 clusterID:(id)a1 commandID:(id)a2 commandFields:(id)a3 timedInvokeTimeout:(id)a4 serverSideProcessingTimeout:(id)a5 logCall:(BOOL)a6 queue:(id)a7 completion:(id /* block */)a8;
- (void)_invokeKnownCommandWithEndpointID:(id)a0 clusterID:(id)a1 commandID:(id)a2 commandPayload:(id)a3 timedInvokeTimeout:(id)a4 serverSideProcessingTimeout:(id)a5 responseClass:(Class)a6 queue:(id)a7 completion:(id /* block */)a8;
- (void)_openCommissioningWindowWithSetupPasscode:(id)a0 discriminator:(id)a1 duration:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)_readKnownAttributeWithEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2 params:(id)a3 queue:(id)a4 completion:(id /* block */)a5;
- (void)_subscribeToKnownAttributeWithEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2 params:(id)a3 queue:(id)a4 reportHandler:(id /* block */)a5 subscriptionEstablished:(id /* block */)a6;
- (void)_writeAttributeWithEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2 value:(id)a3 timedWriteTimeout:(id)a4 queue:(id)a5 completion:(id /* block */)a6;
- (void)deregisterReportHandlersWithClientQueue:(id)a0 completion:(id /* block */)a1;
- (void)deregisterReportHandlersWithQueue:(id)a0 completion:(id /* block */)a1;
- (id)initWithNodeID:(id)a0 controller:(id)a1;
- (id)initWithPASEDevice:(void *)a0 controller:(id)a1;
- (void)invalidateCASESession;
- (void)invokeCommandWithEndpointID:(id)a0 clusterID:(id)a1 commandID:(id)a2 commandFields:(id)a3 timedInvokeTimeout:(id)a4 queue:(id)a5 completion:(id /* block */)a6;
- (void)invokeCommandWithEndpointId:(id)a0 clusterId:(id)a1 commandId:(id)a2 commandFields:(id)a3 timedInvokeTimeout:(id)a4 clientQueue:(id)a5 completion:(id /* block */)a6;
- (void)openCommissioningWindowWithDiscriminator:(id)a0 duration:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)openCommissioningWindowWithSetupPasscode:(id)a0 discriminator:(id)a1 duration:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)readAttributePaths:(id)a0 eventPaths:(id)a1 params:(id)a2 includeDataVersion:(BOOL)a3 queue:(id)a4 completion:(id /* block */)a5;
- (void)readAttributePaths:(id)a0 eventPaths:(id)a1 params:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)readAttributeWithEndpointId:(id)a0 clusterId:(id)a1 attributeId:(id)a2 params:(id)a3 clientQueue:(id)a4 completion:(id /* block */)a5;
- (void)readAttributesWithEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2 params:(id)a3 queue:(id)a4 completion:(id /* block */)a5;
- (void)readEventsWithEndpointID:(id)a0 clusterID:(id)a1 eventID:(id)a2 params:(id)a3 queue:(id)a4 completion:(id /* block */)a5;
- (void)subscribeAttributeWithEndpointId:(id)a0 clusterId:(id)a1 attributeId:(id)a2 minInterval:(id)a3 maxInterval:(id)a4 params:(id)a5 clientQueue:(id)a6 reportHandler:(id /* block */)a7 subscriptionEstablished:(id /* block */)a8;
- (void)subscribeToAttributePaths:(id)a0 eventPaths:(id)a1 params:(id)a2 queue:(id)a3 reportHandler:(id /* block */)a4 subscriptionEstablished:(id /* block */)a5 resubscriptionScheduled:(id /* block */)a6;
- (void)subscribeToAttributesWithEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2 params:(id)a3 queue:(id)a4 reportHandler:(id /* block */)a5 subscriptionEstablished:(id /* block */)a6;
- (void)subscribeToEventsWithEndpointID:(id)a0 clusterID:(id)a1 eventID:(id)a2 params:(id)a3 queue:(id)a4 reportHandler:(id /* block */)a5 subscriptionEstablished:(id /* block */)a6;
- (void)subscribeWithQueue:(id)a0 minInterval:(unsigned short)a1 maxInterval:(unsigned short)a2 params:(id)a3 cacheContainer:(id)a4 attributeReportHandler:(id /* block */)a5 eventReportHandler:(id /* block */)a6 errorHandler:(id /* block */)a7 subscriptionEstablished:(id /* block */)a8 resubscriptionScheduled:(id /* block */)a9;
- (void)subscribeWithQueue:(id)a0 params:(id)a1 clusterStateCacheContainer:(id)a2 attributeReportHandler:(id /* block */)a3 eventReportHandler:(id /* block */)a4 errorHandler:(id /* block */)a5 subscriptionEstablished:(id /* block */)a6 resubscriptionScheduled:(id /* block */)a7;
- (void)writeAttributeWithEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2 value:(id)a3 timedWriteTimeout:(id)a4 queue:(id)a5 completion:(id /* block */)a6;
- (void)writeAttributeWithEndpointId:(id)a0 clusterId:(id)a1 attributeId:(id)a2 value:(id)a3 timedWriteTimeout:(id)a4 clientQueue:(id)a5 completion:(id /* block */)a6;

@end
