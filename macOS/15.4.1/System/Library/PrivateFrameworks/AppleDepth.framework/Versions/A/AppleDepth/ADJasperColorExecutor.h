@class ADJasperColorPipeline, ADLKTExecutor, ADCameraCalibration, ADJasperColorExecutorParameters;

@interface ADJasperColorExecutor : ADExecutor {
    ADLKTExecutor *_lktExecutor;
    struct __CVBuffer { } *_itmPreProcessedColor;
    struct PixelBufferUtilsSession { struct __CVBuffer *x0; struct OpaqueVTPixelTransferSession *x1; struct OpaqueVTPixelRotationSession *x2; struct CGSize { double x0; double x1; } x3; unsigned int x4; struct CGSize { double x0; double x1; } x5; unsigned int x6; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x7; int x8; int x9; } *_colorProcessingSession;
    struct __CVBuffer { } *_itmPreProcessedJasper;
    struct __CVBuffer { } *_itmUnprocessedDepth;
    struct __CVBuffer { } *_itmPostProcessedDepth;
    struct __CVBuffer { } *_itmUnprocessedConf;
    struct __CVBuffer { } *_itmPostProcessedConf;
    struct __CVBuffer { } *_itmUnprocessedNormals;
    struct __CVBuffer { } *_itmPostProcessedNormals;
    struct __CVBuffer { } *_itmUnprocessedAlpha;
    struct __CVBuffer { } *_itmWarpedPrevDepth;
    struct __CVBuffer { } *_itmWarpedPrevConf;
    struct __CVBuffer { } *_itmOpticalFlow;
    struct __CVBuffer { } *_itmPrevProcessedFusedDepth;
    struct __CVBuffer { } *_itmCurrProcessedFusedDepth;
    struct __CVBuffer { } *_itmPrevProcessedFusedConf;
    struct __CVBuffer { } *_itmCurrProcessedFusedConf;
    struct __CVBuffer { } *_itmPrevProcessedFusedNormals;
    struct __CVBuffer { } *_itmCurrProcessedFusedNormals;
    BOOL _firstTimeExecution;
    BOOL _opticalFlowEnabled;
    struct { void /* unknown type, empty encoding */ columns[4]; } _prevPose;
    ADCameraCalibration *_prevCamCalib;
}

@property (retain, nonatomic) ADJasperColorExecutorParameters *executorParameters;
@property (readonly, retain, nonatomic) ADJasperColorPipeline *pipeline;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)allocateIntermediateBuffers;
- (void)deallocateEspressoBuffers;
- (long long)executeWithColor:(struct __CVBuffer { } *)a0 colorCameraCalibration:(id)a1 colorWorldToPlatformTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 pointClouds:(id)a3 lidarCameraCalibration:(id)a4 pointCloudWorldToPlatformTransforms:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a5 outDepthMap:(struct __CVBuffer **)a6 outConfMap:(struct __CVBuffer **)a7 outNormalsMap:(struct __CVBuffer **)a8;
- (long long)executeWithColor:(struct __CVBuffer { } *)a0 pointCloud:(id)a1 outDepthMap:(struct __CVBuffer **)a2 outConfMap:(struct __CVBuffer **)a3;
- (long long)executeWithColor:(struct __CVBuffer { } *)a0 pointCloud:(id)a1 outDepthMap:(struct __CVBuffer **)a2 outConfMap:(struct __CVBuffer **)a3 outNormalsMap:(struct __CVBuffer **)a4;
- (long long)executeWithColor:(struct __CVBuffer { } *)a0 pointCloud:(id)a1 outDepthMap:(struct __CVBuffer **)a2 outConfMap:(struct __CVBuffer **)a3 outNormalsMap:(struct __CVBuffer **)a4 worldToCameraTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a5 cameraCalibration:(id)a6;
- (long long)executeWithColor:(struct __CVBuffer { } *)a0 pointCloud:(id)a1 outDepthMap:(struct __CVBuffer **)a2 outConfMap:(struct __CVBuffer **)a3 worldToCameraTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a4 cameraCalibration:(id)a5;
- (id)getIntermediates;
- (id)initWithInputPrioritization:(long long)a0;
- (id)initWithInputPrioritization:(long long)a0 parameters:(id)a1;
- (long long)numberOfExecutionSteps;
- (long long)prepareForEngineType:(unsigned long long)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 exifOrientation:(unsigned int)a2;
- (long long)prepareForEngineType:(unsigned long long)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 exifOrientation:(unsigned int)a2 rotationPreference:(unsigned long long)a3;
- (long long)prepareForEngineType:(unsigned long long)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 exifOrientation:(unsigned int)a2 useTemporalConsistency:(BOOL)a3;
- (long long)prepareForEngineType:(unsigned long long)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 exifOrientation:(unsigned int)a2 useTemporalConsistency:(BOOL)a3 rotationPreference:(unsigned long long)a4;

@end
