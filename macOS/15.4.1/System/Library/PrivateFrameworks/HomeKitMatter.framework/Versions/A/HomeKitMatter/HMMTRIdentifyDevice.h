@class HMMTRDeviceTopology, MTRDevice, NSObject;
@protocol OS_dispatch_queue;

@interface HMMTRIdentifyDevice : NSObject

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) MTRDevice *device;
@property (readonly) HMMTRDeviceTopology *topology;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)_childNodesWithIdentifyForEndpoint:(unsigned short)a0 completionHandler:(id /* block */)a1;
- (void)_identifyClusterPresentAtEndpoint:(unsigned short)a0 completionHandler:(id /* block */)a1;
- (void)_issueIdentifyCommand:(unsigned short)a0 completionHandler:(id /* block */)a1;
- (void)_processChildNodesForEndpoint:(unsigned short)a0 completionHandler:(id /* block */)a1;
- (void)_validIdentifyNodeForParentAtEndpoint:(unsigned short)a0 completionHandler:(id /* block */)a1;
- (id)bridgeIdentifyEndpointWithAggregatorEndpoint:(id)a0;
- (void)identifyBridgeWithAggregatorEndpoint:(id)a0 completionHandler:(id /* block */)a1;
- (void)identifyWithEndpoint:(unsigned short)a0 completionHandler:(id /* block */)a1;
- (id)initWithDevice:(id)a0 topology:(id)a1 queue:(id)a2;
- (id)mtrClusterDescriptorWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)mtrClusterIdentifyWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;

@end
