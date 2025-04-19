@class NSString;
@protocol MTLSamplerState, MTLTexture, MTLBuffer, MTLComputePipelineState;

@interface CMIStyleEngineIntegrateCoefficients : NSObject <CMIStyleEngineProcessingStage> {
    id<MTLComputePipelineState> _computePipelineState[2];
    id<MTLSamplerState> _sampler[2];
}

@property (nonatomic) float globalLinearSystemMixFactor;
@property (weak, nonatomic) id<MTLBuffer> inputCoefficientsBuffer;
@property (weak, nonatomic) id<MTLTexture> inputCoefficientsTexture;
@property (weak, nonatomic) id<MTLTexture> inputWeightPlanesTexture;
@property (weak, nonatomic) id<MTLTexture> outputIntegratedCoefficientsTexture;
@property (weak, nonatomic) id<MTLBuffer> linearSystemStatus;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } spotlightROI;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } spotlightAffineTransform;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } spotlightZoomROI;
@property (nonatomic) BOOL globalSpatialExtrapolation;
@property (nonatomic) float maxGlobalMixFactor;
@property (nonatomic) float globalSpatialExtrapolationRampFactor;
@property (nonatomic) BOOL useBicubicSampling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (int)_compileShaders:(id)a0;
- (int)_createSamplers:(id)a0;
- (int)enqueueToCommandBuffer:(id)a0;

@end
