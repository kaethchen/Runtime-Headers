@class NSNumber, MTRDevice, NSObject, HMMTRAttributeReportDistributor;
@protocol OS_dispatch_queue;

@interface HMMTRDeviceReader : HMFObject

@property (readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) HMMTRAttributeReportDistributor *distributor;
@property (readonly) MTRDevice *device;
@property (readonly) NSNumber *endpointID;
@property (readonly) NSNumber *clusterID;
@property (readonly) NSNumber *attributeID;
@property (nonatomic) long long reportTimeoutNSecs;

- (void).cxx_destruct;
- (void)_readAttributeAfterAttributeListConfirmationWithCompletionHandler:(id /* block */)a0;
- (id)initWithClientQueue:(id)a0 distributor:(id)a1 device:(id)a2 endpointID:(id)a3 clusterID:(id)a4 attributeID:(id)a5;
- (void)readAttributeWithCompletion:(id /* block */)a0;

@end
