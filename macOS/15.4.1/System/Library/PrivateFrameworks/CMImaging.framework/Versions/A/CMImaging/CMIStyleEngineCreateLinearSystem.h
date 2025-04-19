@class NSString, NSMutableData;
@protocol MTLTexture, MTLBuffer, MTLComputePipelineState;

@interface CMIStyleEngineCreateLinearSystem : NSObject <CMIStyleEngineProcessingStage> {
    id<MTLComputePipelineState> _computePipelineStates[10];
    struct { unsigned int polynomialCount; unsigned int systemCount; unsigned int systemSize; unsigned int weightPlaneCount; void /* unknown type, empty encoding */ spotlightCount; float extLambda; float tikLambdaConstant; float tikLambdaLinear; float tikLambdaQuadratic; float endLambda; float modulationMaskStrength; float modulationMaskOffset; BOOL applyDifferenceModulation; float modulationDifferenceStrength; float modulationDifferenceOffset; } _params;
    NSMutableData *_weightPlanePriorScaleFactors;
}

@property (weak, nonatomic) id<MTLTexture> inputThumbnailTexture;
@property (nonatomic) BOOL inputIsLinear;
@property (weak, nonatomic) id<MTLTexture> targetThumbnailTexture;
@property (nonatomic) BOOL targetIsLinear;
@property (weak, nonatomic) id<MTLTexture> inputWeightPlanesTexture;
@property (weak, nonatomic) id<MTLBuffer> inputPolyExpandedInputBuffer;
@property (weak, nonatomic) id<MTLBuffer> inputPairExpandedWeightsBuffer;
@property (weak, nonatomic) id<MTLTexture> inputPolyExpandedTargetTexture;
@property (weak, nonatomic) id<MTLTexture> inputSpotlightTextureTopLeft;
@property (weak, nonatomic) id<MTLTexture> inputSpotlightTextureTopEdge;
@property (weak, nonatomic) id<MTLTexture> inputSpotlightTextureTopRight;
@property (weak, nonatomic) id<MTLTexture> inputSpotlightTextureLeftEdge;
@property (weak, nonatomic) id<MTLTexture> inputSpotlightTextureCentral;
@property (weak, nonatomic) id<MTLTexture> inputSpotlightTextureRightEdge;
@property (weak, nonatomic) id<MTLTexture> inputSpotlightTextureBottomLeft;
@property (weak, nonatomic) id<MTLTexture> inputSpotlightTextureBottomEdge;
@property (weak, nonatomic) id<MTLTexture> inputSpotlightTextureBottomRight;
@property (weak, nonatomic) id<MTLTexture> inputLearningModulationMaskTexture;
@property (weak, nonatomic) id<MTLBuffer> inputLHSDiagSumsBuffer;
@property (weak, nonatomic) id<MTLBuffer> inputPriorFactorForLHSBuffer;
@property (weak, nonatomic) id<MTLBuffer> inputPriorFactorForRHSBuffer;
@property (weak, nonatomic) id<MTLBuffer> outputLHSBuffer;
@property (weak, nonatomic) id<MTLBuffer> outputRHSBuffer;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } priorMatrix;
@property (nonatomic) float extLambda;
@property (nonatomic) float tikLambdaConstant;
@property (nonatomic) float tikLambdaLinear;
@property (nonatomic) float tikLambdaQuadratic;
@property (nonatomic) float endLambda;
@property (nonatomic) float modulationMaskStrength;
@property (nonatomic) float modulationMaskOffset;
@property (nonatomic) BOOL applyDifferenceModulation;
@property (nonatomic) float modulationDifferenceStrength;
@property (nonatomic) float modulationDifferenceOffset;
@property (nonatomic) BOOL spatialAverageSystems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (int)_compileShaders:(id)a0;
- (BOOL)_setWeightPlane:(unsigned int)a0 term:(unsigned int)a1 priorScaleFactor:(float)a2;
- (int)enqueueToCommandBuffer:(id)a0;
- (id)initWithMetalContext:(SEL)a0 polynomialCount:(id)a1 systemCount:(unsigned int)a2 systemSize:(unsigned int)a3 weightPlaneCount:(unsigned int)a4 spotlightCount:(unsigned int)a5;
- (BOOL)setConstantPriorScaleFactor:(float)a0 forWeightPlane:(unsigned int)a1;
- (BOOL)setLinearPriorScaleFactor:(float)a0 forWeightPlane:(unsigned int)a1;
- (BOOL)setQuadraticPriorScaleFactor:(float)a0 forWeightPlane:(unsigned int)a1;

@end
