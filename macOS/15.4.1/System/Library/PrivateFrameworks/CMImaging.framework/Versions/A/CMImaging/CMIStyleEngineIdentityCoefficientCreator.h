@class NSString;
@protocol MTLComputePipelineState, MTLBuffer;

@interface CMIStyleEngineIdentityCoefficientCreator : NSObject <CMIStyleEngineProcessingStage> {
    id<MTLComputePipelineState> _computePipelineStates[2];
}

@property (weak, nonatomic) id<MTLBuffer> outputBuffer;
@property (nonatomic) BOOL isF16;
@property (nonatomic) unsigned int polynomialCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
