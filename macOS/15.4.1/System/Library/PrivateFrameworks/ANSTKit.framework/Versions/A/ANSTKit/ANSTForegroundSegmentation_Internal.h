@class ANSTVMTrackerEspresso, ANSTForegroundSegmentationConfiguration;

@interface ANSTForegroundSegmentation_Internal : ANSTForegroundSegmentation {
    ANSTForegroundSegmentationConfiguration *_config;
    ANSTVMTrackerEspresso *_vmtrackerNetworkEspresso;
    struct __CVBuffer { } *_resizedInputBuffer;
    struct OpaqueVTPixelTransferSession { } *_pixelTransferSession;
    struct __CVPixelBufferPool { } *_outputBufferPool;
    unsigned long long _frameCount;
    BOOL _readyForInference;
}

+ (BOOL)supportsVersion:(unsigned long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)version;
- (id)initWithConfiguration:(id)a0;
- (unsigned long long)outputBufferHeight;
- (unsigned long long)outputBufferWidth;
- (BOOL)prepareWithError:(id *)a0;
- (struct __CVBuffer { } *)_createCVPixelBuffer_Float32_fromEspressoBufferFloat32:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0;
- (unsigned long long)networkInputBufferHeight;
- (unsigned int)networkInputBufferPixelFormat;
- (unsigned long long)networkInputBufferWidth;
- (unsigned int)outputBufferPixelFormat;
- (id)resultForPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (void)undoPrepareSideEffects;

@end
