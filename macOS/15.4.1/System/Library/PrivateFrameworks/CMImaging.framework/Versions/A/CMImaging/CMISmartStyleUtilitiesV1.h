@class CMIExternalMemoryResource, CMIStyleEngineProcessor, FigMetalContext;

@interface CMISmartStyleUtilitiesV1 : NSObject {
    FigMetalContext *_metalContext;
    CMIExternalMemoryResource *_externalMemoryResource;
    CMIStyleEngineProcessor *_styleEngineProcessor;
    struct CGSize { double width; double height; } _intermediateStyleRendererThumbnailSize;
    struct __CVBuffer { } *_intermediateStyleRendererPixelBuffer;
    struct __CVBuffer { } *_coefficientsPixelBuffer;
    unsigned int _coefficientsPixelBufferWidth;
    unsigned int _coefficientsPixelBufferHeight;
    unsigned int _coefficientsPixelBufferPixelFormat;
    unsigned int _coefficientsPixelBufferBytesPerPixel;
    unsigned long long _useCase;
    unsigned long long _processingType;
}

@property (nonatomic) unsigned int coefficientsPixelBufferPixelFormat;

+ (int)computeLinearImageExposureWithMetadata:(id)a0 outputBaseGain:(float *)a1 outputBaselineExposure:(float *)a2;
+ (unsigned long long)makerNoteTagForSmartStyleCastType:(id)a0 smartStyleVersion:(unsigned int)a1;
+ (unsigned long long)makerNoteTagForSmartStyleTuningType:(id)a0 smartStyleVersion:(unsigned int)a1;
+ (id)defaultStyleForCastType:(id)a0;
+ (id)smartStyleCastForMakerNoteTag:(unsigned long long)a0 smartStyleVersion:(unsigned int)a1;
+ (float)adjustedGainMapHeadroomForStyle:(id)a0 originalHeadroom:(float)a1;
+ (float)computeLinearImageEncodingGainWithMetadata:(id)a0;
+ (struct CGSize { double x0; double x1; })intermediateStyleRendererThumbnailSizeForUseCase:(unsigned long long)a0;
+ (id)smartStyleTuningForMakerNoteTag:(unsigned long long)a0 smartStyleVersion:(unsigned int)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (int)_setupStyleEngineForUseCase:(unsigned long long)a0 useFloat16Coefficients:(BOOL)a1;
- (int)computeDeltaMapForSourcePixelBuffer:(struct __CVBuffer { } *)a0 targetPixelBuffer:(struct __CVBuffer { } *)a1 coefficients:(struct __CVBuffer { } *)a2 outputDeltaMapPixelBuffer:(struct __CVBuffer { } *)a3;
- (int)computeDeltaMapForSourcePixelBuffer:(struct __CVBuffer { } *)a0 targetPixelBuffer:(struct __CVBuffer { } *)a1 coefficientsDict:(id)a2 outputDeltaMapPixelBuffer:(struct __CVBuffer { } *)a3;
- (int)computeOriginalUnstyledPixelBufferFrom:(struct __CVBuffer { } *)a0 inputDeltaMapPixelBuffer:(struct __CVBuffer { } *)a1 inputCoefficientsPixelBuffer:(struct __CVBuffer { } *)a2 outputUnstyledPixelBuffer:(struct __CVBuffer { } *)a3;
- (int)computeOriginalUnstyledPixelBufferFrom:(struct __CVBuffer { } *)a0 inputDeltaMapPixelBuffer:(struct __CVBuffer { } *)a1 inputMetadataDict:(id)a2 outputUnstyledPixelBuffer:(struct __CVBuffer { } *)a3;
- (id)initWithMetalContext:(id)a0 useCase:(unsigned long long)a1;
- (id)initWithMetalContext:(id)a0 useCase:(unsigned long long)a1 processingType:(unsigned long long)a2 optionalExternalMemoryResource:(id)a3;
- (id)initWithOptionalMetalCommandQueue:(id)a0 useCase:(unsigned long long)a1;
- (id)initWithOptionalMetalCommandQueue:(id)a0 useCase:(unsigned long long)a1 processingType:(unsigned long long)a2 optionalExternalMemoryResource:(id)a3;
- (id)interpolateCoefficientsFromStartFrameMetadataDict:(id)a0 startFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 endFrameMetadataDict:(id)a2 endFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 frameTimesToInterpolate:(id)a4;
- (int)learnTransformFrom:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1 outputCoefficients:(struct __CVBuffer { } *)a2 outputIntegratedCoefficients:(id *)a3;

@end
