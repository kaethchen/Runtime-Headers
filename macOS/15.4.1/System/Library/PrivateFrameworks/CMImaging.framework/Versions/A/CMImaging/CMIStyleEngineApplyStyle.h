@class NSString;
@protocol MTLTexture, MTLBuffer, MTLComputePipelineState;

@interface CMIStyleEngineApplyStyle : NSObject <CMIStyleEngineProcessingStage> {
    id<MTLComputePipelineState> _nonApplyComputePipelineStates[3];
    id<MTLComputePipelineState> _applyComputePipelineStates[2][2][2][2][2][2];
}

@property (nonatomic) BOOL fastCoeffSampling;
@property (weak, nonatomic) id<MTLTexture> inputLumaTexture;
@property (weak, nonatomic) id<MTLTexture> inputChromaTexture;
@property (weak, nonatomic) id<MTLTexture> outputLumaTexture;
@property (weak, nonatomic) id<MTLTexture> outputChromaTexture;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } ccmYUVToRGB;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } ccmRGBToYUV;
@property (weak, nonatomic) id<MTLTexture> inputTexture;
@property (nonatomic) BOOL inputIsLinear;
@property (weak, nonatomic) id<MTLTexture> inputIntegratedCoefficientsTexture;
@property (weak, nonatomic) id<MTLTexture> outputTexture;
@property (nonatomic) BOOL outputShouldBeLinear;
@property (weak, nonatomic) id<MTLTexture> inputThumbnailTexture;
@property (nonatomic) BOOL inputThumbnailIsLinear;
@property (weak, nonatomic) id<MTLTexture> targetThumbnailTexture;
@property (nonatomic) BOOL targetThumbnailIsLinear;
@property (weak, nonatomic) id<MTLTexture> residualTexture;
@property (nonatomic) float residualScaleFactor;
@property (weak, nonatomic) id<MTLBuffer> linearSystemStatus;
@property (weak, nonatomic) id<MTLTexture> inputDeltaTexture;
@property (weak, nonatomic) id<MTLTexture> inputDeltaLumaTexture;
@property (weak, nonatomic) id<MTLTexture> inputDeltaChromaTexture;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } ccmYUVToRGBDelta;
@property (weak, nonatomic) id<MTLTexture> inputOriginalTexture;
@property (weak, nonatomic) id<MTLTexture> inputOriginalLumaTexture;
@property (weak, nonatomic) id<MTLTexture> inputOriginalChromaTexture;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } ccmYUVToRGBOriginal;
@property (weak, nonatomic) id<MTLTexture> outputLumaGradientTexture;
@property (weak, nonatomic) id<MTLBuffer> lumaGradientHistogramBuffer;
@property (weak, nonatomic) id<MTLBuffer> maxLumaGradient90thPercentileBuffer;
@property (nonatomic) float inputReadNoiseVar;
@property (nonatomic) float inputShotNoiseVar;
@property (nonatomic) float inputSquaredNoiseVar;
@property (nonatomic) BOOL applyDithering;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inputImageRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } deltaImageRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } outputImageRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } regionToRender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (id *)_applyComputePipelineStateWithConstantsIsFast:(BOOL)a0 doManualInputYUVToRGBConversion:(BOOL)a1 doManualOutputRGBToYUVConversion:(BOOL)a2 isWithLumaGrad:(BOOL)a3 doGenerateSyntheticNoise:(BOOL)a4 applyDithering:(BOOL)a5;
- (int)_compileShaders:(id)a0;
- (struct CGVector { double x0; double x1; })_displacementFrom:(struct CGPoint { double x0; double x1; })a0 to:(struct CGPoint { double x0; double x1; })a1;
- (void /* unknown type, empty encoding */)_ushort2FromCGPoint:(struct CGPoint { double x0; double x1; })a0;
- (void /* unknown type, empty encoding */)_ushort2FromCGSize:(struct CGSize { double x0; double x1; })a0;
- (void /* unknown type, empty encoding */)_ushort2FromCGVector:(struct CGVector { double x0; double x1; })a0;
- (int)enqueueToCommandBuffer:(id)a0;

@end
