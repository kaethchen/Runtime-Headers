@class VNMetalContext, VNBGRBilinearUpsampler, NSObject;
@protocol MTLComputePipelineState, OS_dispatch_semaphore;

@interface _VNInstanceMaskObservationMaskProductionResources : NSObject

@property (readonly) NSObject<OS_dispatch_semaphore> *completionSemaphore;
@property (readonly) VNMetalContext *metalContext;
@property (readonly) VNBGRBilinearUpsampler *bilinearUpsampler;
@property (readonly) id<MTLComputePipelineState> applyMaskComputeState;
@property (readonly) id<MTLComputePipelineState> cropCopyingComputeState;

- (void)dealloc;
- (void).cxx_destruct;

@end
