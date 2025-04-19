@class Normalization_Ext, VEScaler;
@protocol MTLCommandQueue, MTLDevice, MTLTexture;

@interface ImageProcessor_Ext : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    long long _usage;
    BOOL _rgbaBuffersAllocated;
    BOOL _rgbaInternalGenerated;
    Normalization_Ext *_normalization;
    struct __CVBuffer { } *_rgbaDownscaleFirst;
    struct __CVBuffer { } *_rgbaDownscaleSecond;
    struct { float mean; float std_inv; float anchor_mean[2]; float anchor_std[2]; int frame_type; } _normalizationParams;
    id<MTLTexture> _unifiedRGBTexture;
    id<MTLTexture> _packedDownscaledFirstRGBTexture;
    id<MTLTexture> _packedDownscaledSecondRGBTexture;
    id<MTLTexture> _rgbaDownscaleFirstTexture;
    id<MTLTexture> _rgbaDownscaleSecondTexture;
    id<MTLTexture> _rgbaFirstTexture;
    id<MTLTexture> _rgbaSecondTexture;
    BOOL _metalTextureMapped;
}

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) BOOL inputScaling;
@property (retain, nonatomic) VEScaler *scaler;
@property (nonatomic) BOOL selfNormalization;
@property (nonatomic) BOOL useHomography;
@property (nonatomic) struct __CVBuffer { } *unifiedRGB;
@property (nonatomic) struct __CVBuffer { } *packedDownscaledFirstRGB;
@property (nonatomic) struct __CVBuffer { } *packedDownscaledSecondRGB;
@property (nonatomic) struct __CVBuffer { } *rgbaFirst;
@property (nonatomic) struct __CVBuffer { } *rgbaSecond;
@property (nonatomic) long long firstRotation;
@property (nonatomic) long long secondRotation;
@property (nonatomic) BOOL isFullRange;
@property (nonatomic) BOOL isYUV;
@property (nonatomic) long long bitDepth;
@property (nonatomic) unsigned int RGBAFormat;
@property (nonatomic) struct __CFDictionary { } *anchorFrameCMAttachment;
@property (nonatomic) BOOL pseudoDepth;
@property (nonatomic) BOOL opticalFlowOnlyMode;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)allocateNormalizedBuffers;
- (long long)allocateRGBABuffersForBuffer:(struct __CVBuffer { } *)a0;
- (long long)getPixelAttributesForBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithUsage:(long long)a0 device:(id)a1 commandQueue:(id)a2 opticalFlowModeOnly:(BOOL)a3;
- (long long)mapInternalBufferWithTexture;
- (long long)preProcessFirstInput:(struct __CVBuffer { } *)a0 secondInput:(struct __CVBuffer { } *)a1 waitForCompletion:(BOOL)a2;
- (long long)preserveCMAttachmentFirstFrame:(id)a0 secondFrame:(id)a1;
- (long long)restoreCMAttachmentToFirstFrame:(id)a0 secondFrame:(id)a1 synthesizedFrame:(struct __CVBuffer { } *)a2;
- (BOOL)shouldScaleBuffer:(struct __CVBuffer { } *)a0;

@end
