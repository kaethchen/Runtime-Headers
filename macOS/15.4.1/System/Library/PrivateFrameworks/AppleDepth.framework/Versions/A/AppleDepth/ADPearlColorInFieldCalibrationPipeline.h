@class ADEspressoPearlColorInFieldCalibrationBackendInferenceDescriptor, ADPearlColorInFieldCalibrationControllerParameters, ADNetworkProvider, ADEspressoPearlColorInFieldCalibrationFrontendInferenceDescriptor, ADReprojection, ADPearlColorInFieldCalibrationPipelineParameters, ADCameraCalibration;

@interface ADPearlColorInFieldCalibrationPipeline : NSObject {
    ADNetworkProvider *_backendNetworkProvider;
    ADNetworkProvider *_frontendNetworkProvider;
    ADEspressoPearlColorInFieldCalibrationBackendInferenceDescriptor *_backendInferenceDesc;
    ADEspressoPearlColorInFieldCalibrationFrontendInferenceDescriptor *_frontendInferenceDesc;
    int _networkFlowType;
    float _colorCameraEfl;
    struct { void /* unknown type, empty encoding */ columns[4]; } _colorCameraTransform;
    struct { void /* unknown type, empty encoding */ columns[4]; } _pearlCameraTransform;
    ADPearlColorInFieldCalibrationControllerParameters *_controllerParameters;
    struct PixelBufferUtilsSession { struct __CVBuffer *x0; struct OpaqueVTPixelTransferSession *x1; struct OpaqueVTPixelRotationSession *x2; struct CGSize { double x0; double x1; } x3; unsigned int x4; struct CGSize { double x0; double x1; } x5; unsigned int x6; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x7; int x8; int x9; } *_colorInputProcessingSession;
    ADReprojection *_pearlReprojector;
    ADCameraCalibration *_colorCalib;
    ADCameraCalibration *_pearlCalib;
    struct { void /* unknown type, empty encoding */ columns[4]; } _referenceCameraExtrinsics;
    float _validDepthPercentage;
}

@property (copy, nonatomic) ADPearlColorInFieldCalibrationPipelineParameters *pipelineParameters;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } pearlToColorCurrentTransform;

+ (BOOL)isColorFrameValid:(struct __CVBuffer { } *)a0 withMetadata:(id)a1;
+ (BOOL)isPearlFrameValid:(struct __CVBuffer { } *)a0 withMetadata:(id)a1;
+ (BOOL)isPearlFrameValid:(struct __CVBuffer { } *)a0 withMetadata:(id)a1 andPipelineParameters:(id)a2;
+ (BOOL)isPearlMaskExpectedFor:(int)a0;
+ (BOOL)isValidDepthAboveThreshold:(struct __CVBuffer { } *)a0 threshold:(float)a1 invalid:(unsigned short)a2 validDepthPercentage:(float *)a3;
+ (BOOL)isZUsedFor:(int)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isColorFrameValid:(struct __CVBuffer { } *)a0 withMetadata:(id)a1;
- (BOOL)isPearlFrameValid:(struct __CVBuffer { } *)a0 withMetadata:(id)a1;
- (BOOL)isZused;
- (id)backendInferenceDescriptor;
- (float)claculateWeightedStd:(SEL)a0;
- (float)convertStdToWeight:(float)a0;
- (id)createInterSessionDataWithDictionaryRepresentation:(id)a0;
- (id)createInterSessionDataWithFactoryPearlToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 currentPearlToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (id)createReferenceCameraForColor:(id)a0 withExtrinsics:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (void)deallocMemory;
- (id)frontendInferenceDescriptor;
- (id)initWithParameters:(id)a0 espressoEngine:(unsigned long long)a1;
- (BOOL)isPearlFrameValid:(struct __CVBuffer { } *)a0;
- (BOOL)isPearlMaskExpected;
- (long long)postProcessFrontendOutputX:(void *)a0 frontendOutputY:(void *)a1 frontendOutputZ:(void *)a2 frontendOutputErrorX:(void *)a3 frontendOutputErrorY:(void *)a4 frontendOutputErrorZ:(void *)a5 interSessionData:(id)a6 pearlColorInFieldCalibrationResult:(id)a7;
- (long long)preProcessColor:(struct __CVBuffer { } *)a0 processedColor:(struct __CVBuffer { } *)a1 referenceCameraCalibration:(id)a2 colorCameraCalibration:(id)a3;
- (long long)preProcessPearl:(struct __CVBuffer { } *)a0 referenceCameraCalibration:(id)a1 pearlCameraCalibration:(id)a2 reprojectedPointsBuffer:(struct __CVBuffer { } *)a3 reprojectedPointsMaskBuffer:(struct __CVBuffer { } *)a4;
- (long long)processIntermediateResultsWithBackendFeaturesOutputVector:(const void *)a0 frontendEspressoFeaturesInput:(void *)a1 dimensions:(id)a2;
- (void)reportTelemetry:(id)a0 withInterSessionData:(id)a1;
- (void)updatePearlCamera:(id)a0;

@end
