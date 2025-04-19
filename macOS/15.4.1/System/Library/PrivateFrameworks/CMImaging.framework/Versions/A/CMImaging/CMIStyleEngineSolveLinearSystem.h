@class NSString;
@protocol MTLComputePipelineState, MTLBuffer, MTLDevice;

@interface CMIStyleEngineSolveLinearSystem : NSObject <CMIStyleEngineProcessingStage> {
    id<MTLComputePipelineState> _checkStatusComputePipelineState;
}

@property (weak, nonatomic) id<MTLBuffer> inputLHSBuffer;
@property (weak, nonatomic) id<MTLBuffer> inputRHSBuffer;
@property (weak, nonatomic) id<MTLBuffer> inputStatusBuffer;
@property (weak, nonatomic) id<MTLBuffer> outputStatus;
@property (weak, nonatomic) id<MTLBuffer> outputCoefficients;
@property (readonly, nonatomic) unsigned int systemCount;
@property (readonly, nonatomic) unsigned int lhsSize;
@property (readonly, nonatomic) unsigned int rhsSize;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithMetalContext:(id)a0 systemCount:(unsigned int)a1 lhsSize:(unsigned int)a2 rhsSize:(unsigned int)a3 solverType:(unsigned long long)a4;

- (void).cxx_destruct;
- (int)_compileShaders:(id)a0;
- (int)enqueueToCommandBuffer:(id)a0;
- (id)initWithMetalContext:(id)a0 systemCount:(unsigned int)a1 lhsSize:(unsigned int)a2 rhsSize:(unsigned int)a3;
- (int)solveLinearSystem:(id)a0;

@end
