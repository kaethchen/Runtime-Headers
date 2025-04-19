@class NSString;
@protocol MTLTexture, MTLBuffer, MTLComputePipelineState;

@interface CMIStyleEngineCreateWeightPlanes : NSObject <CMIStyleEngineProcessingStage> {
    id<MTLComputePipelineState> _computePipelineStates[7];
    struct { BOOL doColorSplit; float standardDeviation; float colorSplitStrength; BOOL applySpatialFilter; float spatialFilterWeight; } _params;
}

@property (nonatomic) float weightPlanesStandardDeviation;
@property (weak, nonatomic) id<MTLTexture> inputTexture;
@property (nonatomic) BOOL inputIsLinear;
@property (nonatomic) BOOL applySpatialFilter;
@property (nonatomic) float spatialFilterWeight;
@property (weak, nonatomic) id<MTLBuffer> inputPlaneNormalisationBuffer;
@property (retain, nonatomic) id<MTLBuffer> inputThresholdCalculationBuffer;
@property (weak, nonatomic) id<MTLTexture> outputWeightPlanesTexture;
@property (nonatomic) BOOL doColorSplit;
@property (nonatomic) float colorSplitStrength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (int)_compileShaders:(id)a0;
- (unsigned long long)_numberOfLumaWeightsToCreate;
- (int)enqueueToCommandBuffer:(id)a0;

@end
