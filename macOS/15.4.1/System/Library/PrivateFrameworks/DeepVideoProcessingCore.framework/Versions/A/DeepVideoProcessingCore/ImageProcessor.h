@class OFNormalization, NSDictionary, VEScaler;

@interface ImageProcessor : NSObject {
    long long _usage;
    OFNormalization *_normalization;
    VEScaler *_scaler;
    struct __CVBuffer { } *_rgbaFirst;
    struct __CVBuffer { } *_rgbaSecond;
    BOOL _rgbaBuffersAllocated;
    unsigned int _rgbaPixelFormat;
    BOOL _isYUV;
    BOOL _inputScaling;
    unsigned long long _width;
    unsigned long long _height;
    struct { float mean; float std_inv; float anchor_mean[2]; float anchor_std[2]; int frame_type; } _normalizationParams;
    struct __CVPixelBufferPool { } *_denormalizedBufferPool;
    NSDictionary *_colorProperties;
    BOOL _useGPUOnlyForPreProcessing;
}

@property (nonatomic) long long inputRotation;
@property (nonatomic) BOOL selfNormalization;
@property (readonly, nonatomic) struct __CVBuffer { } *normalizedFirst;
@property (readonly, nonatomic) struct __CVBuffer { } *normalizedSecond;
@property (readonly, nonatomic) float firstFramePixelMean;
@property (readonly, nonatomic) float secondFramePixelMean;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithUsage:(long long)a0;
- (void)allocateNormalizedBuffers;
- (void)allocteRGBABuffersForBuffer:(struct __CVBuffer { } *)a0;
- (id)initLegacyModeWithUsage:(long long)a0;
- (id)initWithUsage:(long long)a0 normalizationMode:(long long)a1;
- (void)postProcessNormalizedFrame:(struct __CVBuffer { } *)a0 output:(struct __CVBuffer { } *)a1 timeScale:(float)a2 waitForCompletion:(BOOL)a3;
- (void)preProcessFirstInput:(struct __CVBuffer { } *)a0 secondInput:(struct __CVBuffer { } *)a1 waitForCompletion:(BOOL)a2;
- (void)releaseNormalizedBuffers;
- (unsigned int)rgbaPixelFormatForBuffer:(struct __CVBuffer { } *)a0 useScaler:(BOOL)a1;
- (BOOL)shouldCropOutputFrame:(struct __CVBuffer { } *)a0;
- (BOOL)shouldScaleBuffer:(struct __CVBuffer { } *)a0;
- (void)storeColorProperties:(struct __CVBuffer { } *)a0;

@end
