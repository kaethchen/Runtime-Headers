@class HMDHomeManager, NSString, NSMutableSet, NSObject, HMDProcessInfo;
@protocol OS_dispatch_queue, MTRDeviceControllerClientProtocol;

@interface HMDCHIPXPCClientConnection : HMFObject <HMFLogging, MTRDeviceControllerServerProtocol>

@property (readonly, nonatomic) id<MTRDeviceControllerClientProtocol> remoteObjectProxy;
@property (readonly, weak, nonatomic) HMDHomeManager *homeManager;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) BOOL backgroundModeEntitled;
@property (readonly, nonatomic) NSMutableSet *subscribedHomeUUIDs;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDProcessInfo *processInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (BOOL)allowsOperation;
- (void)_getDeviceControllerWithFabricId:(unsigned long long)a0 accessories:(id)a1 home:(id)a2 remainingHomes:(id)a3 completion:(id /* block */)a4;
- (void)_registerReportHandlerWithHomeWithUUID:(id)a0;
- (void)deregisterReportHandlers;
- (void)downloadLogWithController:(id)a0 nodeId:(id)a1 type:(long long)a2 timeout:(double)a3 completion:(id /* block */)a4;
- (void)getAnyDeviceControllerWithCompletion:(id /* block */)a0;
- (id)initWithRemoteObjectProxy:(id)a0 homeManager:(id)a1 pid:(int)a2 processInfo:(id)a3 backgroundModeEntitled:(BOOL)a4 workQueue:(id)a5;
- (void)invokeCommandWithController:(id)a0 nodeId:(unsigned long long)a1 endpointId:(id)a2 clusterId:(id)a3 commandId:(id)a4 fields:(id)a5 timedInvokeTimeout:(id)a6 completion:(id /* block */)a7;
- (void)readAttributeCacheWithController:(id)a0 nodeId:(unsigned long long)a1 endpointId:(id)a2 clusterId:(id)a3 attributeId:(id)a4 completion:(id /* block */)a5;
- (void)readAttributeWithController:(id)a0 nodeId:(unsigned long long)a1 endpointId:(id)a2 clusterId:(id)a3 attributeId:(id)a4 params:(id)a5 completion:(id /* block */)a6;
- (void)stopReportsWithController:(id)a0 nodeId:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)subscribeAttributeWithController:(id)a0 nodeId:(unsigned long long)a1 endpointId:(id)a2 clusterId:(id)a3 attributeId:(id)a4 minInterval:(id)a5 maxInterval:(id)a6 params:(id)a7 establishedHandler:(id /* block */)a8;
- (void)subscribeWithController:(id)a0 nodeId:(unsigned long long)a1 minInterval:(id)a2 maxInterval:(id)a3 params:(id)a4 shouldCache:(BOOL)a5 completion:(id /* block */)a6;
- (void)writeAttributeWithController:(id)a0 nodeId:(unsigned long long)a1 endpointId:(id)a2 clusterId:(id)a3 attributeId:(id)a4 value:(id)a5 timedWriteTimeout:(id)a6 completion:(id /* block */)a7;

@end
