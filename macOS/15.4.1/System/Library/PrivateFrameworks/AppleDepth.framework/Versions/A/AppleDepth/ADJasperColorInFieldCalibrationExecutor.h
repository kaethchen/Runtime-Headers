@class ADEspressoRunner, ADJasperPointCloud, ADEspressoBufferHandle, ADJasperColorInFieldCalibrationPipeline, ADCameraCalibration, ADJasperColorInFieldCalibrationExecutorParameters;

@interface ADJasperColorInFieldCalibrationExecutor : ADExecutor {
    BOOL _isPrepared;
    ADEspressoRunner *_backendEspressoRunner;
    ADEspressoRunner *_frontendEspressoRunner;
    ADCameraCalibration *_mcamJCameraCalibration;
    ADJasperPointCloud *_aggregatedPointCloud;
    struct __CVBuffer { } *_itmPreProcessedColor;
    struct __CVBuffer { } *_itmPreProcessedJasper;
    ADEspressoBufferHandle *_featuresOutputEspressoBufferHandle;
    ADEspressoBufferHandle *_frontendFeaturesInputEspressoBufferHandle;
    ADEspressoBufferHandle *_frontendRotXOutputEspressoBufferHandle;
    ADEspressoBufferHandle *_frontendRotYOutputEspressoBufferHandle;
    ADEspressoBufferHandle *_frontendRotZOutputEspressoBufferHandle;
    ADEspressoBufferHandle *_frontendRotErrorXOutputEspressoBufferHandle;
    ADEspressoBufferHandle *_frontendRotErrorYOutputEspressoBufferHandle;
    ADEspressoBufferHandle *_frontendRotErrorZOutputEspressoBufferHandle;
    unsigned long long _frontendFeaturesInputElementSize;
    unsigned long long _backendFeaturesOutputElementSize;
    void *_backendResultAggregated;
    unsigned long long _backendSingleResultSize;
    unsigned int _backendResultAggregationCounter;
    double _lastColorTimestamp;
    BOOL _preProcessInputColorFrameDone;
    int _forceAngularVelocityLogic;
}

@property (readonly, nonatomic) ADJasperColorInFieldCalibrationPipeline *pipeline;
@property (retain, nonatomic) ADJasperColorInFieldCalibrationExecutorParameters *executorParameters;
@property (retain, nonatomic) ADCameraCalibration *colorCameraCalibration;
@property (retain, nonatomic) ADCameraCalibration *jasperCameraCalibration;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)prepare;
- (long long)preprocessInputColorFrame:(struct __CVBuffer { } *)a0 colorPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 jasperPointClouds:(id)a2 jasperPoses:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a3 jasperCameraCalibration:(id)a4 colorCameraCalibration:(id)a5 colorMetadata:(id)a6;
- (long long)allocateIntermediateBuffers;
- (long long)clearFeaturesAggregator;
- (void)deallocateEspressoBuffers;
- (long long)executePreprocessedInputsWithInterSessionData:(id)a0 outResult:(id)a1;
- (id)initForEngineType:(unsigned long long)a0;
- (id)initForEngineType:(unsigned long long)a0 andExecutorParameters:(id)a1;
- (long long)numberOfExecutionSteps;
- (long long)preprocessInputColorFrame:(struct __CVBuffer { } *)a0 colorPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 jasperPointClouds:(id)a2 jasperPoses:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a3 jasperCameraCalibration:(id)a4 colorCameraCalibration:(id)a5 timestamp:(double)a6;
- (long long)preprocessInputColorFrame:(struct __CVBuffer { } *)a0 colorPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 jasperPointClouds:(id)a2 jasperPoses:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a3 jasperCameraCalibration:(id)a4 colorCameraCalibration:(id)a5 timestamp:(double)a6 colorMetadata:(id)a7;

@end
