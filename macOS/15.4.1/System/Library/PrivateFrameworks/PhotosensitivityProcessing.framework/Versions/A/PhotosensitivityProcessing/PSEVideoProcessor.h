@class SwiftVideoProcessor;
@protocol MTLBuffer, MTLDevice, MTLLibrary, MTLTexture, MTLCommandQueue, MTLComputePipelineState;

@interface PSEVideoProcessor : NSObject {
    SwiftVideoProcessor *_swiftProcessor;
    double _previousSurfaceTime;
    BOOL _needsInitialization;
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLLibrary> _library;
    id<MTLComputePipelineState> _cptPSO_RiskComputePass0;
    id<MTLComputePipelineState> _cptPSO_RiskComputePass1;
    id<MTLComputePipelineState> _cptPSO_RiskComputePass2;
    id<MTLComputePipelineState> _cptPSO_RiskComputePass3;
    id<MTLBuffer> _bufferFrameLumaSum[2];
    id<MTLBuffer> _bufferData[2];
    id<MTLBuffer> _bufferCurState[2];
    id<MTLBuffer> _bufferGammaKernel[2];
    id<MTLBuffer> _bufferEnergy[2];
    id<MTLBuffer> _bufferEnergy2[2];
    id<MTLBuffer> _bufferContrastKernel[2];
    id<MTLBuffer> _bufferContrast[2];
    id<MTLBuffer> _bufferResponses[2];
    id<MTLBuffer> _bufferResponsesNorm[2];
    id<MTLBuffer> _bufferResults[2];
    unsigned long long _protectionStatus;
    BOOL _madeProtectedBuffers;
    id<MTLBuffer> _bufferDataDebug;
    id<MTLTexture> _sourceTexture;
    id<MTLTexture> _sourceCbCrTexture;
    id<MTLTexture> _processedTexture;
    struct ConstBuf { float fPixelCnt; BOOL bMitigate; BOOL bDebug; BOOL bCallbackValues; BOOL bCopyOnly; BOOL bVideoRange; BOOL bProtected; unsigned int uEOTF; unsigned int uColSpace; float maxNits; float edr; float displayEDR; float fps; void /* unknown type, empty encoding */ u2CbCrSubSampleRate; BOOL bManualCbCr; float fNIU2; } _bufferConstants;
    float _fps;
    float _nits;
    float _area;
    float _avl;
    float _gain;
    float _energyPoolGammaShape;
    float _energypoolexponent;
    float _energyPoolGammaScale;
    float _probabilityPoolGammaShape;
    float _probabilityPoolExponent;
    float _probabilitypoolgammascale;
    float _cA;
    float _tauadapt;
    float _taumitigation;
    int _idxFrameRate;
    int _idxEquivalentSize;
    int _idxEquivalentKernelIndex;
}

@property (class, readonly, nonatomic) BOOL needsProcessing;

@property (copy, nonatomic) id /* block */ validationCallback;
@property (nonatomic) BOOL inTestingMode;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canProcessSurface:(struct __IOSurface { } *)a0;
- (void)processSourceSurface:(struct __IOSurface { } *)a0 withTimestamp:(double)a1 toDestinationSurface:(struct __IOSurface { } *)a2 options:(id)a3;
- (void)_initialize;
- (int)_deviceClass;
- (int)_computeFrameRateIndexSelection;
- (int)_colorSpaceFromSurface:(struct __IOSurface { } *)a0;
- (int)_colorSpaceValueForName:(struct __CFString { } *)a0;
- (void)_computeDisplaySizeIndexSelection;
- (void)_initializeProtectedBuffers:(unsigned long long)a0;
- (unsigned long long)_pixelFormatForSurface:(struct __IOSurface { } *)a0;
- (struct KernelData { unsigned int x0[5]; float *x1; })_prepare_contrast_kernels;
- (id)_prepare_gamma_kernel:(float)a0 shape:(float)a1 scale:(float)a2;
- (void)_processFrame:(id)a0 sourceSurface:(struct __IOSurface { } *)a1 outSurface:(struct __IOSurface { } *)a2;
- (void)_processSurface:(struct __IOSurface { } *)a0 withTimestamp:(double)a1 destinationSurface:(struct __IOSurface { } *)a2 options:(id)a3;
- (void)_resetState:(unsigned long long)a0;
- (void)_sourceCopyDebuggingChanged:(id)a0;
- (void)_visualDebuggingChanged:(id)a0;

@end
