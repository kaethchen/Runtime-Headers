@class ADEspressoRunner, ADPearlColorInFieldCalibrationExecutorParameters, NSDictionary, ADPearlColorInFieldCalibrationPipeline, ADCameraCalibration, ADEspressoBufferHandle;

@interface ADPearlColorInFieldCalibrationExecutor : ADExecutor {
    BOOL _isPrepared;
    ADEspressoRunner *_backendEspressoRunner;
    ADEspressoRunner *_frontendEspressoRunner;
    ADCameraCalibration *_mcamPCameraCalibration;
    BOOL _preProcessInputColorFrameDone;
    struct __CVBuffer { } *_itmPreProcessedColor;
    struct __CVBuffer { } *_itmPreProcessedPearl;
    struct __CVBuffer { } *_itmPreProcessedPearlMask;
    ADEspressoBufferHandle *_featuresOutputEspressoBufferHandle;
    ADEspressoBufferHandle *_frontendFeaturesInputEspressoBufferHandle;
    ADEspressoBufferHandle *_frontendRotationXOutputEspressoBufferHandle;
    ADEspressoBufferHandle *_frontendRotationYOutputEspressoBufferHandle;
    ADEspressoBufferHandle *_frontendRotationZOutputEspressoBufferHandle;
    ADEspressoBufferHandle *_frontendErrorXOutputEspressoBufferHandle;
    ADEspressoBufferHandle *_frontendErrorYOutputEspressoBufferHandle;
    ADEspressoBufferHandle *_frontendErrorZOutputEspressoBufferHandle;
    unsigned long long _frontendFeaturesInputElementSize;
    unsigned long long _backendFeaturesOutputElementSize;
    void *_backendResultAggregated;
    unsigned long long _backendSingleResultSize;
    unsigned int _backendResultAggregationCounter;
    double _lastColorTimestamp;
    NSDictionary *_preprocessedColorMetadata;
    NSDictionary *_preprocessedPearlMetadata;
}

@property (readonly, nonatomic) ADPearlColorInFieldCalibrationPipeline *pipeline;
@property (retain, nonatomic) ADPearlColorInFieldCalibrationExecutorParameters *executorParameters;
@property (retain, nonatomic) ADCameraCalibration *colorCameraCalibration;
@property (retain, nonatomic) ADCameraCalibration *pearlCameraCalibration;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } wmcamToMcamExtrinsics;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)prepare;
- (long long)allocateIntermediateBuffers;
- (long long)clearFeaturesAggregator;
- (void)deallocateEspressoBuffers;
- (long long)executePreprocessedInputsWithInterSessionData:(id)a0 outResult:(id)a1;
- (id)initForEngineType:(unsigned long long)a0;
- (id)initForEngineType:(unsigned long long)a0 andExecutorParameters:(id)a1;
- (BOOL)normalizedDX:(struct __CVBuffer { } *)a0 toDepth:(struct __CVBuffer { } *)a1 withMultiplier:(double)a2 andOffset:(double)a3;
- (long long)numberOfExecutionSteps;
- (long long)preprocessInputColorFrame:(struct __CVBuffer { } *)a0 pearlDepth:(struct __CVBuffer { } *)a1 pearlPoses:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 pceCameraCalibration:(id)a3 pearlCameraCalibrationTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a4 colorCameraCalibration:(id)a5 timestamp:(double)a6;
- (long long)preprocessInputColorFrame:(struct __CVBuffer { } *)a0 pearlNormalizedDX:(struct __CVBuffer { } *)a1 pearlPoses:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 disparityNormalizationMultiplier:(double)a3 disparityNormalizationOffset:(double)a4 pceCameraCalibration:(id)a5 pearlCameraCalibrationTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a6 colorCameraCalibration:(id)a7 timestamp:(double)a8;

@end
