@class ADEspressoJasperColorInFieldCalibrationBackendInferenceDescriptor, ADEspressoJasperColorInFieldCalibrationFrontendInferenceDescriptor, ADNetworkProvider, ADJasperColorInFieldCalibrationControllerParameters, ADJasperColorInFieldCalibrationPipelineParameters, ADCameraCalibration;

@interface ADJasperColorInFieldCalibrationPipeline : NSObject {
    ADNetworkProvider *_backendNetworkProvider;
    ADNetworkProvider *_frontendNetworkProvider;
    ADEspressoJasperColorInFieldCalibrationBackendInferenceDescriptor *_backendInferenceDesc;
    ADEspressoJasperColorInFieldCalibrationFrontendInferenceDescriptor *_frontendInferenceDesc;
    float _colorCameraEfl;
    struct { void /* unknown type, empty encoding */ columns[4]; } _colorCameraTransform;
    struct { void /* unknown type, empty encoding */ columns[4]; } _jasperCameraTransform;
    struct CGPoint { double x; double y; } _distortedImagePixels[244992];
    ADJasperColorInFieldCalibrationControllerParameters *_controllerParameters;
    struct __CVBuffer { } *_colorImageRaw;
    struct unique_ptr<PixelBufferUtilsSession, std::default_delete<PixelBufferUtilsSession>> { struct __compressed_pair<PixelBufferUtilsSession *, std::default_delete<PixelBufferUtilsSession>> { struct PixelBufferUtilsSession *__value_; } __ptr_; } _colorInputProcessingSession;
    unsigned long long _referenceCameraNumOfPoints;
    float *_zVals;
    struct CGPoint { double x0; double x1; } *_rectifiedPoints;
    void *_rectifiedWorldPoints;
    void *_origWorldPoints;
    struct CGPoint { double x0; double x1; } *_undistortedImagePixels;
    ADCameraCalibration *_colorCalib;
    ADCameraCalibration *_jasperCalib;
    struct { void /* unknown type, empty encoding */ columns[4]; } _referenceCameraExtrinsics;
    float _scale;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _jasperFOVInImage;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _videoCropOnSensor;
    void *_motionRotationAngles;
    void *_motionTranslation;
    char *_validDepthPercentage;
    unsigned char _backendIndex;
    struct vector<std::vector<float>, std::allocator<std::vector<float>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> { void *__value_; } __end_cap_; } _lastKnownPointsCollectionVec;
    unsigned int _lastKnownGoodSpotsCount;
}

@property (copy, nonatomic) ADJasperColorInFieldCalibrationPipelineParameters *pipelineParameters;

+ (BOOL)isColorFrameValid:(struct __CVBuffer { } *)a0 withMetadata:(id)a1 andPipelineParameters:(id)a2;
+ (BOOL)isCroppingPointInThresholdRange:(double)a0 distanceFromSymmetricCroppingPoint:(double)a1 normalizedBySensorDimention:(double)a2 andAllowedDriftFromSymmetricCrop:(float)a3;
+ (BOOL)isJasperFrameValid:(id)a0 andPipelineParameters:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isColorFrameValid:(struct __CVBuffer { } *)a0 withMetadata:(id)a1;
- (id)backendInferenceDescriptor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateJasperFOVInImageWithJasperCalibration:(id)a0 withCameraCalibration:(id)a1 withOriginalImageWidth:(unsigned long long)a2 withOriginalImageHeight:(unsigned long long)a3 forOutputImageWidth:(unsigned long long)a4 forOutputImageHeight:(unsigned long long)a5;
- (float)claculateWeightedStd:(SEL)a0;
- (float)convertStdToWeight:(float)a0;
- (id)createInterSessionDataWithDictionaryRepresentation:(id)a0;
- (id)createInterSessionDataWithFactoryJasperToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 currentJasperToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (id)createReferenceCameraForColor:(id)a0 withExtrinsics:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (void)deallocMemory;
- (id)frontendInferenceDescriptor;
- (double)getDeviceFrequency;
- (id)initWithParameters:(id)a0 espressoEngine:(unsigned long long)a1;
- (BOOL)isAngularVelocityValid:(id)a0;
- (BOOL)isJasperFrameValid:(id)a0;
- (BOOL)isSDF:(id)a0;
- (long long)postProcessFrontendOutputX:(void *)a0 frontendOutputY:(void *)a1 frontendOutputZ:(void *)a2 frontendOutputErrorX:(void *)a3 frontendOutputErrotY:(void *)a4 frontendOutputErrorZ:(void *)a5 interSessionData:(id)a6 jasperColorInFieldCalibrationResult:(id)a7;
- (long long)preProcessColor:(struct __CVBuffer { } *)a0 processedColor:(struct __CVBuffer { } *)a1 referenceCameraCalibration:(id)a2 colorCameraCalibration:(id)a3 colorMetadata:(id)a4;
- (long long)preProcessJasper:(id)a0 referenceCameraCalibration:(id)a1 jasperCameraCalibration:(id)a2 reprojectedPointsBuffer:(struct __CVBuffer { } *)a3;
- (long long)processIntermediateResultsWithBackendFeaturesOutputVector:(const void *)a0 frontendEspressoFeaturesInput:(void *)a1 dimensions:(id)a2;
- (void)reportTelemetry:(id)a0 withInterSessionData:(id)a1;
- (long long)resizeImage:(id)a0 colorImage:(struct __CVBuffer { } *)a1 processedColor:(struct __CVBuffer { } *)a2 colorMetadata:(id)a3;
- (long long)undistortColorImage:(struct __CVBuffer { } *)a0 undistortedImage:(struct __CVBuffer { } *)a1 calibration:(id)a2;
- (void)updateJasperCamera:(id)a0;
- (void)updateLastKnownDepthMap:(id)a0;

@end
