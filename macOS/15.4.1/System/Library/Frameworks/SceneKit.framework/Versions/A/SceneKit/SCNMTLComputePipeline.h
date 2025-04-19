@protocol MTLComputePipelineState, MTLFunction;

@interface SCNMTLComputePipeline : NSObject {
    id<MTLComputePipelineState> _state;
    id<MTLFunction> _computeFunction;
}

- (void)dealloc;
- (id)description;
- (id)init;

@end
