@class MTLMotionEstimationPipelineDescriptor;

@interface MTLDebugMotionEstimationPipeline : MTLToolsMotionEstimationPipeline

@property (readonly, nonatomic) MTLMotionEstimationPipelineDescriptor *descriptor;

- (void)dealloc;
- (id)initWithBaseObject:(id)a0 parent:(id)a1 descriptor:(id)a2;

@end
