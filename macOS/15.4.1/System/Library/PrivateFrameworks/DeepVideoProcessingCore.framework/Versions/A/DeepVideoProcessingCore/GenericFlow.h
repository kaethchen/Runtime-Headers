@class PseudoDepthGenerator, ImageReg, ImageProcessor_Ext, HomographyFlow, VEOpticalFlowEstimator;
@protocol MTLCommandQueue, MTLDevice, MTLTexture;

@interface GenericFlow : NSObject {
    VEOpticalFlowEstimator *_opticalFlow;
    BOOL _useHomographyInFlow;
    ImageProcessor_Ext *_imageProcessor;
    HomographyFlow *_homographyFlow;
    ImageReg *_pImageRegInstance;
    PseudoDepthGenerator *_pseudoDepthGenerator;
    struct _xform2D { struct { void /* unknown type, empty encoding */ columns[3]; } matrix; float confidence; int inlierCnt; int width; int height; } _result12;
    struct _xform2D { struct { void /* unknown type, empty encoding */ columns[3]; } matrix; float confidence; int inlierCnt; int width; int height; } _result21;
    struct __CVBuffer { } *_warpedImage;
    struct __CVBuffer { } *_HomoFlow12;
    struct __CVBuffer { } *_HomoFlow21;
    struct __CVBuffer { } *_previousFlow;
    struct __CVBuffer { } *_previousDepth;
    BOOL _homo12good;
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    BOOL _bindTexture;
    BOOL _streamingMode;
    BOOL _isFirstFrameInStream;
    id<MTLTexture> _forwardFlowTexture;
    id<MTLTexture> _backwardFlowTexture;
    id<MTLTexture> _downscaleImage1Texture;
    id<MTLTexture> _downscaleImage2Texture;
    id<MTLTexture> _previousDepthTexture;
    id<MTLTexture> _previousFlowTexture;
}

@property (nonatomic) BOOL EnableGpuWaitForComplete;
@property (nonatomic) BOOL flowOnlyMode;

- (void).cxx_destruct;
- (BOOL)finishProcessing;
- (long long)bindWithMTLTextureFromDownscaledImage:(struct __CVBuffer { } *)a0 downscaledSecond:(struct __CVBuffer { } *)a1 forwardFlow:(struct __CVBuffer { } *)a2 backwardFlow:(struct __CVBuffer { } *)a3 prevBackwardFlow:(struct __CVBuffer { } *)a4 depth:(struct __CVBuffer { } *)a5 interleaveFactor:(unsigned long long)a6;
- (long long)computeForwardFlow:(struct __CVBuffer { } *)a0 backwardFlow:(struct __CVBuffer { } *)a1;
- (id)initWithOpticalFlow:(id)a0 usage:(long long)a1 rotation:(long long)a2;
- (long long)preProcessHomographyFirstFrame:(id)a0 secondFrame:(id)a1 previousFlow:(struct __CVBuffer { } *)a2;
- (BOOL)processWithFirstFrame:(id)a0 secondFrame:(id)a1 forwardFlow:(struct __CVBuffer { } *)a2 backwardFlow:(struct __CVBuffer { } *)a3 streamingMode:(BOOL)a4 error:(id *)a5;
- (void)releaseInternalBuffers;
- (void)setPropertiesFromDefaults;
- (BOOL)startSessionWithFlowWidth:(unsigned long long)a0 flowHeight:(unsigned long long)a1 frameWidth:(unsigned long long)a2 frameHeight:(unsigned long long)a3 useHomographyInFlow:(BOOL)a4 error:(id *)a5;

@end
