@class PTPersonSemanticsNetwork, PTMetalContext, NSString, PTSubjectRelighting, NSArray, PTEffectUtil, PTFaceAttributesNetwork, PTMSRResize;
@protocol MTLComputePipelineState, MTLTexture, MTLBuffer;

@interface PTSyntheticLight : NSObject {
    id<MTLComputePipelineState> _lightEstimation;
    PTMetalContext *_mainMetalContext;
    PTMetalContext *_asyncMetalContext;
    PTPersonSemanticsNetwork *_personSemanticsNetwork;
    PTEffectUtil *_effectUtil;
    PTMSRResize *_msrColorPyramid;
    id<MTLTexture> _skinMaskRGBA;
    struct PTSyntheticLightConfig { BOOL firstFrame; int framesSinceLightEstimate; int lightEstimateFrequency; float emaCoefficient; } _config;
    NSString *_description;
    PTSubjectRelighting *_subjectRelighting;
    NSArray *_faceObservations;
    PTFaceAttributesNetwork *_faceAttributesNetwork;
    BOOL _subjectRelightingRunning;
    struct __CVBuffer { } *_rgbaPixelBufferCopy;
    id<MTLTexture> _rgbaTextureCopy;
    id<MTLTexture> _quarterSizeLumaCopy;
    id<MTLTexture> _quarterSizeChromaCopy;
    id<MTLBuffer> _lightEstimationBuffer;
    float _lastRelightStrength;
}

+ (void)disableAsynchronousWork;

- (void)dealloc;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)reset;
- (id)faceObservations;
- (id)lightEstimation;
- (id)debugTextures;
- (void)estimateLightIntensity:(id)a0 relightStrength:(float)a1;
- (void)estimateLightIntensityWithFaceRects:(void *)a0 inTex:(id)a1 numberOfFaceRects:(int)a2 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 humanDetections:(id)a4 asyncWork:(id)a5;
- (id)initWithMetalContext:(id)a0 faceAttributesNetwork:(id)a1 effectUtil:(id)a2 msrColorPyramid:(id)a3 colorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a4 prewarmOnly:(BOOL)a5 sharedResources:(id)a6;
- (void)interpolateLightIntensity:(float)a0;
- (id)srlV2CoeffsBuffer;
- (void)updateSubjectRelighting:(struct __CVBuffer { } *)a0 inLuma:(id)a1 inChroma:(id)a2 inFaceRects:(struct FaceRectsWrapper { void /* unknown type, empty encoding */ x0[4]; int x1; })a3 runOnAsyncCommandQueue:(BOOL)a4 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a5 dependentCommandBuffer:(id)a6;

@end
