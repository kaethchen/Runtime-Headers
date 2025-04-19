@class NSString;
@protocol MTLComputePipelineState, MTLBuffer;

@interface CMIStyleEngineCoefficientConverter : NSObject <CMIStyleEngineProcessingStage> {
    id<MTLComputePipelineState> _kernel;
}

@property (readonly, nonatomic) NSString *shaderName;
@property (readonly, nonatomic) unsigned long long numberOfCoefficients;
@property (retain, nonatomic) id<MTLBuffer> inputBuffer;
@property (retain, nonatomic) id<MTLBuffer> outputBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
