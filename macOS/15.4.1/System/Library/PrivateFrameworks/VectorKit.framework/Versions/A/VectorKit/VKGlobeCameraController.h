@class NSString;

@interface VKGlobeCameraController : VKScreenCameraController <VKGesturingCameraController> {
    struct CameraManager { void /* function */ **_vptr$CameraManager; BOOL _panBegin; BOOL _panInProgress; BOOL _panEnd; struct Matrix<int, 2, 1> { int _e[2]; } _panCurrentCursor; struct Matrix<int, 2, 1> { int _e[2]; } _panPreviousCursor; struct Matrix<int, 2, 1> { int _e[2]; } _panStartCursor; struct Coordinate3D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double _value; } latitude; struct Unit<geo::RadianUnitDescription, double> { double _value; } longitude; struct Unit<geo::MeterUnitDescription, double> { double _value; } altitude; } _panStartPosition; double _panDistance; BOOL _panAtStartPosition; BOOL _rotateBegin; BOOL _rotateInProgress; BOOL _rotateEnd; struct Coordinate3D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double _value; } latitude; struct Unit<geo::RadianUnitDescription, double> { double _value; } longitude; struct Unit<geo::MeterUnitDescription, double> { double _value; } altitude; } _rotateStartPosition; struct Matrix<int, 2, 1> { int _e[2]; } _rotateCurrentCursor; double _rotateAngle; BOOL _tiltBegin; BOOL _tiltInProgress; BOOL _tiltEnd; struct Coordinate3D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double _value; } latitude; struct Unit<geo::RadianUnitDescription, double> { double _value; } longitude; struct Unit<geo::MeterUnitDescription, double> { double _value; } altitude; } _tiltStartPosition; struct Matrix<int, 2, 1> { int _e[2]; } _tiltCurrentCursor; struct Matrix<int, 2, 1> { int _e[2]; } _tiltPreviousCursor; double _tiltAngle; BOOL _zoomBegin; BOOL _zoomInProgress; BOOL _zoomEnd; struct Coordinate3D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double _value; } latitude; struct Unit<geo::RadianUnitDescription, double> { double _value; } longitude; struct Unit<geo::MeterUnitDescription, double> { double _value; } altitude; } _zoomStartPosition; struct Matrix<int, 2, 1> { int _e[2]; } _zoomCurrentCursor; double _zoomFactor; double _zoomStartDistance; BOOL _zoomRotateToNorth; BOOL _useTiltLimit; int _tiltLimitMode; BOOL _tiltLimitPushDownEnabled; BOOL _tiltLimitTransferInProgress; BOOL _tiltLimitPushDown; double _startPushDownTilt; double _tiltLimitTransferFraction; double _startTiltLimitTilt; struct Geocentric<double> { double _e[3]; } _startTiltLimitPosition; struct Matrix<double, 3, 1> { double _e[3]; } _startTiltLimitDirection; double _fullZoomTiltLimitFactor; struct Box<double, 2> { struct Matrix<double, 2, 1> { double _e[2]; } _minimum; struct Matrix<double, 2, 1> { double _e[2]; } _maximum; } _singleRestriction; struct Box<double, 2> { struct Matrix<double, 2, 1> { double _e[2]; } _minimum; struct Matrix<double, 2, 1> { double _e[2]; } _maximum; } _westOfDatelineRestriction; struct Box<double, 2> { struct Matrix<double, 2, 1> { double _e[2]; } _minimum; struct Matrix<double, 2, 1> { double _e[2]; } _maximum; } _eastOfDatelineRestriction; } _cameraManager;
    double _currentDoublePanPitch;
    BOOL _isPitching;
    BOOL _isRotating;
    BOOL _wasPitched;
    BOOL _couldEnter3DMode;
    double _currentZoomLevel;
    double _maxZoomLevel;
    double _minZoomLevel;
    double _lastRotation;
    struct CGPoint { double x; double y; } _panStartScreenPoint;
    struct CGPoint { double x; double y; } _panLastScreenPoint;
    double _beganDoublePanPitch;
    struct shared_ptr<md::TaskContext> { struct TaskContext *__ptr_; struct __shared_weak_count *__cntrl_; } _taskContext;
}

@property (nonatomic) void *globeView;
@property (nonatomic) BOOL tourShouldResumeWhenDoneGesturing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)updateState;
- (double)altitude;
- (long long)tileSize;
- (double)heading;
- (double)pitch;
- (struct { double x0; double x1; })centerCoordinate;
- (id)mapRegion;
- (void)setCamera:(struct shared_ptr<gdc::Camera> { struct Camera *x0; struct __shared_weak_count *x1; })a0;
- (double)presentationYaw;
- (BOOL)canEnter3DMode;
- (double)currentZoomLevel;
- (double)durationToAnimateToMapRegion:(id)a0;
- (void)enter3DMode;
- (void)exit3DMode;
- (BOOL)isPitched;
- (id)mapRegionIgnoringEdgeInsets;
- (double)maxPitch;
- (double)maximumZoomLevel;
- (double)minPitch;
- (double)minimumZoomLevel;
- (void)panWithOffset:(struct CGPoint { double x0; double x1; })a0 relativeToScreenPoint:(struct CGPoint { double x0; double x1; })a1 animated:(BOOL)a2 duration:(double)a3 completionHandler:(id /* block */)a4;
- (void)pauseFlyoverTourAnimation;
- (void)resumeFlyoverTourAnimation;
- (void)setCenterCoordinateDistanceRange:(struct { double x0; double x1; BOOL x2; })a0 duration:(double)a1 timingFunction:(id /* block */)a2;
- (void)setGesturing:(BOOL)a0;
- (void)setMapRegion:(id)a0 pitch:(double)a1 yaw:(double)a2 duration:(double)a3 timingCurve:(id /* block */)a4 completion:(id /* block */)a5;
- (void)setRegionRestriction:(id)a0 duration:(double)a1 timingFunction:(id /* block */)a2;
- (void)setYaw:(double)a0 animated:(BOOL)a1;
- (void)startPinchingWithFocusPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)startTrackingAnnotation:(id)a0 trackHeading:(BOOL)a1 animated:(BOOL)a2 duration:(double)a3 timingFunction:(id /* block */)a4;
- (void)stopPinchingWithFocusPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updatePinchWithFocusPoint:(struct CGPoint { double x0; double x1; })a0 oldFactor:(double)a1 newFactor:(double)a2;
- (void)zoom:(double)a0 withFocusPoint:(struct CGPoint { double x0; double x1; })a1 completionHandler:(id /* block */)a2;
- (struct Geocentric<double> { double x0[3]; })cameraPosition;
- (double)geocAngleBetween:(struct { double x0; double x1; })a0 andCoordinate:(struct { double x0; double x1; })a1;
- (struct { double x0; double x1; })_centerCoordinateForMapRegion:(id)a0;
- (double)_fovAdjustment;
- (void)_updateCanEnter3DMode;
- (void)_updateIsPitched;
- (void)adjustLoadingForAnimation:(float)a0 progressFactor:(float)a1;
- (void)animateRegionWithDuration:(double)a0 timingFunction:(id /* block */)a1 cursor:(struct Matrix<int, 2, 1> { int x0[2]; })a2 stepHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)animateToRestriction:(id)a0 duration:(double)a1 timingFunction:(id /* block */)a2;
- (id /* block */)createMoveToZoomOutZoomInFrameFunction:(struct CameraFrame<geo::Radians, double> { struct Coordinate3D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x0; } x0; struct Unit<geo::RadianUnitDescription, double> { double x0; } x1; struct Unit<geo::MeterUnitDescription, double> { double x0; } x2; } x0; struct Unit<geo::MeterUnitDescription, double> { double x0; } x1; struct Unit<geo::RadianUnitDescription, double> { double x0; } x2; struct Unit<geo::RadianUnitDescription, double> { double x0; } x3; struct Unit<geo::RadianUnitDescription, double> { double x0; } x4; })a0 toLatLon:(struct CameraFrame<geo::Radians, double> { struct Coordinate3D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x0; } x0; struct Unit<geo::RadianUnitDescription, double> { double x0; } x1; struct Unit<geo::MeterUnitDescription, double> { double x0; } x2; } x0; struct Unit<geo::MeterUnitDescription, double> { double x0; } x1; struct Unit<geo::RadianUnitDescription, double> { double x0; } x2; struct Unit<geo::RadianUnitDescription, double> { double x0; } x3; struct Unit<geo::RadianUnitDescription, double> { double x0; } x4; })a1;
- (double)distanceFromCenterCoordinate;
- (double)earthRadiusAt:(double)a0;
- (void)flyoverTourAnimation:(id)a0 animateToStart:(BOOL)a1 labelChanged:(id /* block */)a2 stateChange:(id /* block */)a3;
- (double)greatCircleMidPointLatitude:(double)a0 fromLongitude:(double)a1 toLongitude:(double)a2;
- (id)initWithTaskContext:(struct shared_ptr<md::TaskContext> { struct TaskContext *x0; struct __shared_weak_count *x1; })a0 mapDataAccess:(void *)a1 animationRunner:(struct AnimationRunner { struct MapEngine *x0; } *)a2 runLoopController:(struct RunLoopController { struct MapEngine *x0; long long x1; } *)a3 cameraDelegate:(id)a4;
- (void)interruptFlyoverTourAnimation;
- (BOOL)isFlyoverTourStarted;
- (BOOL)isFullyPitched;
- (void)moveTo:(struct { double x0; double x1; })a0 height:(double)a1 useHeight:(BOOL)a2 zoom:(double)a3 rotation:(double)a4 tilt:(double)a5 duration:(double)a6 timingCurve:(id /* block */)a7 completion:(id /* block */)a8;
- (void)moveTo:(struct { double x0; double x1; })a0 zoom:(double)a1 rotation:(double)a2 tilt:(double)a3 duration:(double)a4 timingCurve:(id /* block */)a5 completion:(id /* block */)a6;
- (void)moveToZoomOutZoomInTransition:(struct { double x0; double x1; })a0 height:(double)a1 useHeight:(BOOL)a2 zoom:(double)a3 rotation:(double)a4 tilt:(double)a5 duration:(double)a6 timingCurve:(id /* block */)a7 completion:(id /* block */)a8;
- (void)pitch:(struct CGPoint { double x0; double x1; })a0 translation:(double)a1;
- (void)rotate:(double)a0 atScreenPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)rotateTo:(double)a0 animated:(BOOL)a1;
- (void)setCenterCoordinate3D:(struct { double x0; double x1; double x2; })a0 altitude:(double)a1 yaw:(double)a2 pitch:(double)a3 duration:(double)a4 animationStyle:(long long)a5 timingCurve:(id /* block */)a6 completion:(id /* block */)a7;
- (void)setCenterCoordinate:(struct { double x0; double x1; })a0 altitude:(double)a1 yaw:(double)a2 pitch:(double)a3 duration:(double)a4 animationStyle:(long long)a5 timingCurve:(id /* block */)a6 completion:(id /* block */)a7;
- (void)setCurrentZoomLevel:(double)a0;
- (void)setMaxZoomLevel:(double)a0;
- (void)setMinZoomLevel:(double)a0;
- (float)slowDownFactorFromLoadProgress;
- (BOOL)snapMapIfNecessary:(BOOL)a0;
- (void)stopFlyoverTourAnimation;
- (void)stopGlobeAnimations;
- (void)tapZoom:(struct CGPoint { double x0; double x1; })a0 levels:(double)a1 completionHandler:(id /* block */)a2;
- (void)tiltTo:(double)a0 animated:(BOOL)a1 exaggerate:(BOOL)a2;
- (double)topDownMinimumZoomLevel;
- (void)updateCameraManager;
- (double)widestLatitudeForMapRegion:(id)a0;
- (double)zoomForMapRegion:(id)a0;
- (void)zoomToDistance:(struct CGPoint { double x0; double x1; })a0 distance:(double)a1 time:(double)a2;
- (void)zoomToDistance:(struct CGPoint { double x0; double x1; })a0 distance:(double)a1 time:(double)a2 completionHandler:(id /* block */)a3;

@end
