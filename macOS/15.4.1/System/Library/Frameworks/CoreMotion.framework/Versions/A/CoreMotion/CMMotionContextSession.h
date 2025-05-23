@class NSObject;
@protocol OS_dispatch_queue;

@interface CMMotionContextSession : NSObject {
    struct unique_ptr<CMMotionContextLogger, std::default_delete<CMMotionContextLogger>> { struct __compressed_pair<CMMotionContextLogger *, std::default_delete<CMMotionContextLogger>> { struct CMMotionContextLogger *__value_; } __ptr_; } _logger;
    BOOL _logMSL;
    struct Dispatcher { void /* function */ **x0; id x1; } *_deviceMotionDispatcher;
    struct Dispatcher { void /* function */ **x0; id x1; } *_accessoryDeviceMotionDispatcher;
    struct Dispatcher { void /* function */ **x0; id x1; } *_accessoryDeviceMotionConfigDispatcher;
    struct CMPdr { struct CMPdrInputs { struct AccelTNBFrame { double lastValidTNBTimestamp; struct CMVector<float, 3UL> { float elements[3]; } lastSample; struct CMVector<float, 3UL> { float elements[3]; } T; struct CMVector<float, 3UL> { float elements[3]; } N; struct CMVector<float, 3UL> { float elements[3]; } B; float jerkNorm; float curvature; float torsion; BOOL isValid; } fInertialAccelTNB; double fLastTimestamp; double fSampleDT; struct Parameters { double B[12]; double A[12]; double inputScaleValues[4]; double outputScaleValues[4]; } kSosFilterParams; struct array<CMSosFilter<4>, 3UL> { struct CMSosFilter<4UL> { struct Parameters *kParams; float fOutput; float fRegister[12]; } __elems_[3]; } fInertialUserAccelFilter; struct array<CMSosFilter<4>, 3UL> { struct CMSosFilter<4UL> { struct Parameters *kParams; float fOutput; float fRegister[12]; } __elems_[3]; } fInertialRotationRateFilter; } fPdrInputs; int fAlgType; struct CMPdrDirectionality { double _lastStartImpulseTimestamp; double _lastEndImpulseTimestamp; double _lastStepDirectionRadians; struct CMVector<double, 2UL> { double elements[2]; } _lastPosition; struct CMFixedSizeQueue<CMPdrDirectionality::AggAccelSample, 245UL> { struct { unsigned short fHead; unsigned short fSize; } fHeadAndSize; unsigned int fCapacity; char fBuffer[24]; struct CMQueueStorage<CMPdrDirectionality::AggAccelSample, 245UL> { char buffer[5856]; } fStorage; } _inertialBuffer; } fDirectionalityDetector; struct unique_ptr<CMPdrEstimatorOnHead, std::default_delete<CMPdrEstimatorOnHead>> { struct __compressed_pair<CMPdrEstimatorOnHead *, std::default_delete<CMPdrEstimatorOnHead>> { struct CMPdrEstimatorOnHead *__value_; } __ptr_; } fPdrEstimatorOnHead; struct unique_ptr<CMPdrEstimatorOnBody, std::default_delete<CMPdrEstimatorOnBody>> { struct __compressed_pair<CMPdrEstimatorOnBody *, std::default_delete<CMPdrEstimatorOnBody>> { struct CMPdrEstimatorOnBody *__value_; } __ptr_; } fPdrEstimatorOnBody; struct unique_ptr<CMDoTEstimatorHandSwing, std::default_delete<CMDoTEstimatorHandSwing>> { struct __compressed_pair<CMDoTEstimatorHandSwing *, std::default_delete<CMDoTEstimatorHandSwing>> { struct CMDoTEstimatorHandSwing *__value_; } __ptr_; } fPdrEstimatorHandSwing; struct unique_ptr<CMDoTEstimatorInHandTexting, std::default_delete<CMDoTEstimatorInHandTexting>> { struct __compressed_pair<CMDoTEstimatorInHandTexting *, std::default_delete<CMDoTEstimatorInHandTexting>> { struct CMDoTEstimatorInHandTexting *__value_; } __ptr_; } fPdrEstimatorTexting; } _pdr;
    struct CMAccessoryActivity { struct ActivityPacket { int state; double stateTransitionTimestamp; struct Impulse { double start; double end; } stepImpulse; } fActivityPacket; BOOL fSitStandEnabled; struct unique_ptr<CMSitStandDetector, std::default_delete<CMSitStandDetector>> { struct __compressed_pair<CMSitStandDetector *, std::default_delete<CMSitStandDetector>> { struct CMSitStandDetector *__value_; } __ptr_; } fSitStandDetector; struct CMAccessoryStepDetector { BOOL fDetectedSteps; BOOL fCandidateDetected; BOOL fNotifiedDetectedSteps; BOOL fLookingForFirstStep; struct CMFixedSizeQueue<CMAccessoryStepDetector::AggAccelSample, 50UL> { struct { unsigned short fHead; unsigned short fSize; } fHeadAndSize; unsigned int fCapacity; char fBuffer[24]; struct CMQueueStorage<CMAccessoryStepDetector::AggAccelSample, 50UL> { char buffer[1176]; } fStorage; } fInertialAggAccelBuffer; struct CMFixedSizeQueue<CMAccessoryStepDetector::VectorSample, 50UL> { struct { unsigned short fHead; unsigned short fSize; } fHeadAndSize; unsigned int fCapacity; char fBuffer[24]; struct CMQueueStorage<CMAccessoryStepDetector::VectorSample, 50UL> { char buffer[1176]; } fStorage; } fInertialAccelBuffer; struct CMFixedSizeQueue<CMAccessoryStepDetector::FaceRotationRateSample, 50UL> { struct { unsigned short fHead; unsigned short fSize; } fHeadAndSize; unsigned int fCapacity; char fBuffer[24]; struct CMQueueStorage<CMAccessoryStepDetector::FaceRotationRateSample, 50UL> { char buffer[1176]; } fStorage; } fFaceRotationRateBuffer; struct CMFixedSizeQueue<float, 150UL> { struct { unsigned short fHead; unsigned short fSize; } fHeadAndSize; unsigned int fCapacity; char fBuffer[4]; struct CMQueueStorage<float, 150UL> { char buffer[596]; } fStorage; } fAuxRotationRateNormBuffer; struct CMFixedSizeQueue<float, 50UL> { struct { unsigned short fHead; unsigned short fSize; } fHeadAndSize; unsigned int fCapacity; char fBuffer[4]; struct CMQueueStorage<float, 50UL> { char buffer[196]; } fStorage; } fInertialAggForwardAccelBufferFaceFrame; struct CMFixedSizeQueue<float, 50UL> { struct { unsigned short fHead; unsigned short fSize; } fHeadAndSize; unsigned int fCapacity; char fBuffer[4]; struct CMQueueStorage<float, 50UL> { char buffer[196]; } fStorage; } fYawRotationRateBuffer; struct CMFixedSizeQueue<double, 7UL> { struct { unsigned short fHead; unsigned short fSize; } fHeadAndSize; unsigned int fCapacity; char fBuffer[8]; struct CMQueueStorage<double, 7UL> { char buffer[48]; } fStorage; } fSpatialSampleTimestampBuffer; struct CMFixedSizeQueue<CMVector<float, 3>, 7UL> { struct { unsigned short fHead; unsigned short fSize; } fHeadAndSize; unsigned int fCapacity; char fBuffer[12]; struct CMQueueStorage<CMVector<float, 3>, 7UL> { char buffer[72]; } fStorage; } fSpatialSampleAggAccelBuffer; double fCurrentPointTimestamp; struct CMVector<float, 3UL> { float elements[3]; } fCurrentPointAggAccel; int fState; int fPreviousState; int fLastStateTransitionedFrom; struct AggAccelSample { double timestamp; struct CMVector<float, 3UL> { float elements[3]; } aggAccel; } fCurrentUpSample; struct AggAccelSample { double timestamp; struct CMVector<float, 3UL> { float elements[3]; } aggAccel; } fCurrentDownSample; double fLastEndImpulseTimestamp; struct CMFixedSizeQueue<double, 3UL> { struct { unsigned short fHead; unsigned short fSize; } fHeadAndSize; unsigned int fCapacity; char fBuffer[8]; struct CMQueueStorage<double, 3UL> { char buffer[16]; } fStorage; } fEndImpulseTimestampHistory; struct CMFixedSizeQueue<double, 3UL> { struct { unsigned short fHead; unsigned short fSize; } fHeadAndSize; unsigned int fCapacity; char fBuffer[8]; struct CMQueueStorage<double, 3UL> { char buffer[16]; } fStorage; } fStartImpulseTimestampHistory; struct CMOQuaternion { float elements[4]; } fHeadsetOrientation; struct StepModel { double timeSinceLastStepSecRatio[7]; double impulseDurationSecRatio[7]; double deltaInertialZVelRatio[7]; double thetaRollFaceDegreesRatio[9]; double thetaPitchFaceDegreesRatio[9]; double horizontalDisplacementRatio[8]; double peakinessRatio[2]; double bobbinessRatio[2]; double timeSinceLastStepSecEdge[7]; double impulseDurationSecEdge[7]; double deltaInertialZVelEdge[7]; double thetaRollFaceDegreesEdge[9]; double thetaPitchFaceDegreesEdge[9]; double horizontalDisplacementEdge[8]; double peakinessEdge[2]; double bobbinessEdge[2]; double *ratios[8]; double *rightBinEdges[8]; } fStepModel; void /* function */ *fCallback; void *fCallbackInfo; double fLastNotifiedTimeSec; struct CMSpatialLogger *fLogger; } fAccessoryStepDetector; struct Impulse { double start; double end; } fCurrStepImpulse; BOOL fHeadsetOrientationIsSet; } _accessoryActivity;
    int _motionContextState;
    BOOL _drawPositionOnStart;
    struct PdrResults { BOOL step; double startImpulse; double endImpulse; struct CMVector<double, 2UL> { double elements[2]; } position; int stepsCount; float directionOfTravelDegrees; double speedMps; struct CMOQuaternion { float elements[4]; } attitude; } _result;
    float _totalSessionTime;
    int _auxSampleCounter;
    double _currentTime;
    NSObject<OS_dispatch_queue> *_stepCountClientQueue;
    id /* block */ _stepCountClientHandler;
    NSObject<OS_dispatch_queue> *_pdrClientQueue;
    id /* block */ _pdrClientHandler;
    struct CMVector<double, 2UL> { double elements[2]; } _prevPDRPosition;
    NSObject<OS_dispatch_queue> *_motionContextClientQueue;
    id /* block */ _motionContextClientHandler;
    struct unique_ptr<CMPdrMLModel, std::default_delete<CMPdrMLModel>> { struct __compressed_pair<CMPdrMLModel *, std::default_delete<CMPdrMLModel>> { struct CMPdrMLModel *__value_; } __ptr_; } hmlModel;
    BOOL _enableMLModel;
    struct unique_ptr<CMMotionContextSessionAnalyticsTracker, std::default_delete<CMMotionContextSessionAnalyticsTracker>> { struct __compressed_pair<CMMotionContextSessionAnalyticsTracker *, std::default_delete<CMMotionContextSessionAnalyticsTracker>> { struct CMMotionContextSessionAnalyticsTracker *__value_; } __ptr_; } _analyticsTracker;
    float _distanceTravelledPerDVEvent;
    int _stepCountPerDVEvent;
    double _distractedViewingEnterTime;
    struct CMVector<double, 2UL> { double elements[2]; } _initialPosition;
    float _initialHeadingDegrees;
    BOOL _inDVEvent;
    int _lastTrackingDisableRoute;
}

+ (BOOL)isAvailable;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithOptions:(id)a0;
- (void)start;
- (void)stop;
- (void)enableMLModel:(BOOL)a0;
- (void)enterDistractedViewingSession:(int)a0;
- (void)exitDistractedViewingSession:(int)a0;
- (void)feedARKitWorldPoseWithTimestamp:(double)a0 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 status:(int)a2;
- (void)feedAccessoryConfig:(const void *)a0;
- (void)feedAudioAccessoryIMU:(const void *)a0;
- (void)feedGPSLocationWithTimestamp:(double)a0 course:(double)a1 speed:(double)a2 latitude:(double)a3 longitude:(double)a4 horizontalAccuracy:(double)a5;
- (void)feedSourceDeviceIMU:(const struct Sample { double x0; struct { struct { double x0; double x1; double x2; double x3; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct { float x0; float x1; float x2; } x3; int x4; BOOL x5; BOOL x6; BOOL x7; float x8; BOOL x9; BOOL x10; int x11; } x1; struct { float x0; struct { float x0; float x1; float x2; } x1; } x2; BOOL x3; unsigned int x4; unsigned char x5; struct Status { unsigned short x0; } x6; float x7; } *)a0;
- (void)initLoggerWithPrefix:(id)a0 filePath:(id)a1;
- (void)notifyMotionContextClient:(int)a0;
- (void)notifyPdrClient:(const void *)a0;
- (void)notifyStepCountClient:(const void *)a0;
- (void)setAlgType:(int)a0;
- (void)setSpeedEstType:(int)a0;
- (void)setTrackingClientMode:(int)a0;
- (void)startMotionContextUpdatesToQueue:(id)a0 andHandler:(id /* block */)a1;
- (void)startPdrUpdatesToQueue:(id)a0 andHandler:(id /* block */)a1;
- (void)startStepCountUpdatesToQueue:(id)a0 andHandler:(id /* block */)a1;

@end
