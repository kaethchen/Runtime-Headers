@class NSString, OFNormalization, Upsampler, VEScaler, SRNet;
@protocol MTLDevice;

@interface ImageSR : NSObject {
    SRNet *_srnet;
    OFNormalization *_normalization;
    Upsampler *_upsampler;
    VEScaler *_scaler;
    struct OpaqueVTPixelTransferSession { } *_vtTransferSession;
    id<MTLDevice> _device;
    NSString *_espressoFileName;
    unsigned long long _inputWidth;
    unsigned long long _inputHeight;
    BOOL _inputRotation;
    unsigned int _inputPixelFormat;
    unsigned int _rgbaPixelFormat;
    unsigned int _outputPixelFormat;
    struct __CFDictionary { } *_attachmentDictOfInput;
    struct __CVPixelBufferPool { } *_highResolutionRGBABufferPool;
    struct __CVBuffer { } *_currentLRRGB;
    struct __CVBuffer { } *_normalizedRGB;
    struct __CVBuffer { } *_srNetHROutput;
    struct __CVBuffer { } *_outputSR;
}

@property (readonly, nonatomic) long long usage;
@property (readonly, nonatomic) unsigned long long scaleFactor;
@property (readonly, nonatomic) unsigned long long lowResPaddedWidth;
@property (readonly, nonatomic) unsigned long long lowResPaddedHeight;
@property (readonly, nonatomic) unsigned long long highResPaddedWidth;
@property (readonly, nonatomic) unsigned long long highResPaddedHeight;
@property (readonly, nonatomic) unsigned long long outputWidth;
@property (readonly, nonatomic) unsigned long long outputHeight;

- (void)dealloc;
- (void).cxx_destruct;
- (void)VSRGetInputFrameSizeForUsage:(long long)a0 width:(unsigned long long *)a1 height:(unsigned long long *)a2;
- (long long)allocateTemporalBuffers;
- (void)convertToRGB:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1 withRGBFormat:(unsigned int)a2 rotate:(BOOL)a3;
- (id)initWithUsage:(long long)a0 inputWidth:(unsigned long long)a1 inputHeight:(unsigned long long)a2 scaleFactor:(unsigned long long)a3 useMPS:(BOOL)a4 outputSize:(struct CGSize { double x0; double x1; })a5;
- (void)releaseTemporalBuffers;
- (BOOL)upscaleFrame:(struct __CVBuffer { } *)a0 destinationHiResFrame:(struct __CVBuffer { } *)a1;

@end
