@class PTMTLComputePipelineProxy, MTLFunctionConstantValues;

@interface PTPipelineWithConstants : NSObject

@property (retain) PTMTLComputePipelineProxy *pipeline;
@property (retain) MTLFunctionConstantValues *functionConstants;

- (void).cxx_destruct;
- (id)initWithPipeline:(id)a0 andFunctionConstants:(id)a1;

@end
