@class NSNumber, MTRAsyncWorkQueue, NSHashTable, NSMutableSet, NSDate, NSObject, MTRDeviceController;
@protocol OS_dispatch_queue;

@interface MTRDevice : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_delegates;
    NSHashTable *_attributeValueWaiters;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) MTRAsyncWorkQueue *asyncWorkQueue;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly) BOOL deviceCachePrimed;
@property (readonly, nonatomic) NSDate *estimatedStartTime;
@property (readonly, nonatomic) MTRDeviceController *deviceController;
@property (readonly, copy, nonatomic) NSNumber *nodeID;
@property (readonly, copy, nonatomic) NSNumber *estimatedSubscriptionLatency;
@property (readonly, copy, nonatomic) NSNumber *vendorID;
@property (readonly, copy, nonatomic) NSNumber *productID;
@property (readonly, nonatomic) unsigned int networkCommissioningFeatures;

+ (id)deviceWithNodeID:(id)a0 controller:(id)a1;
+ (id)deviceWithNodeID:(unsigned long long)a0 deviceController:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (BOOL)_callDelegatesWithBlock:(id /* block */)a0;
- (void)addDelegate:(id)a0 queue:(id)a1 interestedPathsForAttributes:(id)a2 interestedPathsForEvents:(id)a3;
- (void)downloadLogOfType:(long long)a0 timeout:(double)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)invokeCommandWithEndpointID:(id)a0 clusterID:(id)a1 commandID:(id)a2 commandFields:(id)a3 expectedValues:(id)a4 expectedValueInterval:(id)a5 queue:(id)a6 completion:(id /* block */)a7;
- (id)readAttributeWithEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2 params:(id)a3;
- (void)writeAttributeWithEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2 value:(id)a3 expectedValueInterval:(id)a4 timedWriteTimeout:(id)a5;
- (void)_cancelAllAttributeValueWaiters;
- (void)_delegateAdded:(id)a0;
- (BOOL)_lockAndCallDelegatesWithBlock:(id /* block */)a0;
- (BOOL)_delegateExists;
- (void)_addDelegate:(id)a0 queue:(id)a1 interestedPathsForAttributes:(id)a2 interestedPathsForEvents:(id)a3;
- (BOOL)_attributeDataValue:(id)a0 isEqualToDataValue:(id)a1;
- (BOOL)_attributeDataValue:(id)a0 satisfiesValueExpectation:(id)a1;
- (void)_attributeValue:(id)a0 reportedForPath:(id)a1;
- (void)_delegateRemoved:(id)a0;
- (BOOL)_deviceHasActiveSubscription;
- (void)_deviceMayBeReachable;
- (void)_forgetAttributeWaiter:(id)a0;
- (void)_invokeCommandWithEndpointID:(id)a0 clusterID:(id)a1 commandID:(id)a2 commandFields:(id)a3 expectedValues:(id)a4 expectedValueInterval:(id)a5 timedInvokeTimeout:(id)a6 serverSideProcessingTimeout:(id)a7 queue:(id)a8 completion:(id /* block */)a9;
- (void)_invokeKnownCommandWithEndpointID:(id)a0 clusterID:(id)a1 commandID:(id)a2 commandPayload:(id)a3 expectedValues:(id)a4 expectedValueInterval:(id)a5 timedInvokeTimeout:(id)a6 serverSideProcessingTimeout:(id)a7 responseClass:(Class)a8 queue:(id)a9 completion:(id /* block */)a10;
- (BOOL)_iterateDelegatesWithBlock:(id /* block */)a0;
- (void)controllerResumed;
- (void)controllerSuspended;
- (BOOL)delegateExists;
- (id)descriptorClusters;
- (id)getAllAttributesReport;
- (id)initForSubclassesWithNodeID:(id)a0 controller:(id)a1;
- (id)initWithNodeID:(id)a0 controller:(id)a1;
- (void)invokeCommandWithEndpointID:(id)a0 clusterID:(id)a1 commandID:(id)a2 commandFields:(id)a3 expectedValues:(id)a4 expectedValueInterval:(id)a5 timedInvokeTimeout:(id)a6 clientQueue:(id)a7 completion:(id /* block */)a8;
- (void)invokeCommandWithEndpointID:(id)a0 clusterID:(id)a1 commandID:(id)a2 commandFields:(id)a3 expectedValues:(id)a4 expectedValueInterval:(id)a5 timedInvokeTimeout:(id)a6 queue:(id)a7 completion:(id /* block */)a8;
- (void)invokeCommands:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)openCommissioningWindowWithDiscriminator:(id)a0 duration:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)openCommissioningWindowWithSetupPasscode:(id)a0 discriminator:(id)a1 duration:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (id)readAttributePaths:(id)a0;
- (id)waitForAttributeValues:(id)a0 timeout:(double)a1 queue:(id)a2 completion:(id /* block */)a3;

@end
