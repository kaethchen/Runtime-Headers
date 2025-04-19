@class NSString, VKTimedAnimation;

@interface VKARCameraController : VKScreenCameraController <VKGesturingCameraController> {
    struct shared_ptr<md::TaskContext> { struct TaskContext *__ptr_; struct __shared_weak_count *__cntrl_; } _taskContext;
    double _currentZoomLevel;
    double _maxZoomLevel;
    double _height;
    double _altitudeOffset;
    struct Unit<geo::RadianUnitDescription, double> { double _value; } _fovy;
    struct CameraFrame<geo::Radians, double> { struct Coordinate3D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double _value; } latitude; struct Unit<geo::RadianUnitDescription, double> { double _value; } longitude; struct Unit<geo::MeterUnitDescription, double> { double _value; } altitude; } _target; struct Unit<geo::MeterUnitDescription, double> { double _value; } _distanceFromTarget; struct Unit<geo::RadianUnitDescription, double> { double _value; } _pitch; struct Unit<geo::RadianUnitDescription, double> { double _value; } _heading; struct Unit<geo::RadianUnitDescription, double> { double _value; } _roll; } _cameraFrame;
    struct RigidTransform<double, double> { struct Matrix<double, 3, 1> { double _e[3]; } _translation; struct Quaternion<double> { struct Matrix<double, 3, 1> { double _e[3]; } _imaginary; double _scalar; } _rotation; } _baseTransform;
    struct RigidTransform<double, double> { struct Matrix<double, 3, 1> { double _e[3]; } _translation; struct Quaternion<double> { struct Matrix<double, 3, 1> { double _e[3]; } _imaginary; double _scalar; } _rotation; } _arTransform;
    struct RigidTransform<double, double> { struct Matrix<double, 3, 1> { double _e[3]; } _translation; struct Quaternion<double> { struct Matrix<double, 3, 1> { double _e[3]; } _imaginary; double _scalar; } _rotation; } _currentARTransform;
    struct RigidTransform<double, double> { struct Matrix<double, 3, 1> { double _e[3]; } _translation; struct Quaternion<double> { struct Matrix<double, 3, 1> { double _e[3]; } _imaginary; double _scalar; } _rotation; } _lastARTransform;
    struct Quaternion<double> { struct Matrix<double, 3, 1> { double _e[3]; } _imaginary; double _scalar; } _arOrientation;
    VKTimedAnimation *_transitionAnimation;
    long long _interfaceOrientation;
    struct Quaternion<double> { struct Matrix<double, 3, 1> { double _e[3]; } _imaginary; double _scalar; } _interfaceOrientationRotation;
    struct Coordinate2D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double _value; } latitude; struct Unit<geo::RadianUnitDescription, double> { double _value; } longitude; } _currentCoordinate;
}

@property (nonatomic) void *mapEngine;
@property (nonatomic) void *globeView;
@property (nonatomic) struct Unit<geo::DegreeUnitDescription, double> { double _value; } fieldOfView;
@property (nonatomic) BOOL overrideARFieldOfView;
@property (readonly, nonatomic) float heightScale;
@property (nonatomic) struct RigidTransform<double, double> { struct Matrix<double, 3, 1> { double _e[3]; } _translation; struct Quaternion<double> { struct Matrix<double, 3, 1> { double _e[3]; } _imaginary; double _scalar; } _rotation; } offsetTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (double)altitude;
- (long long)tileSize;
- (double)heading;
- (double)pitch;
- (struct { double x0; double x1; })centerCoordinate;
- (struct CameraFrame<geo::Radians, double> { struct Coordinate3D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x0; } x0; struct Unit<geo::RadianUnitDescription, double> { double x0; } x1; struct Unit<geo::MeterUnitDescription, double> { double x0; } x2; } x0; struct Unit<geo::MeterUnitDescription, double> { double x0; } x1; struct Unit<geo::RadianUnitDescription, double> { double x0; } x2; struct Unit<geo::RadianUnitDescription, double> { double x0; } x3; struct Unit<geo::RadianUnitDescription, double> { double x0; } x4; })cameraFrame;
- (id)mapRegion;
- (void)setCamera:(struct shared_ptr<gdc::Camera> { struct Camera *x0; struct __shared_weak_count *x1; })a0;
- (double)presentationYaw;
- (double)currentZoomLevel;
- (BOOL)isPitched;
- (id)mapRegionIgnoringEdgeInsets;
- (double)maxPitch;
- (double)maximumZoomLevel;
- (double)minPitch;
- (double)minimumZoomLevel;
- (void)setYaw:(double)a0 animated:(BOOL)a1;
- (struct Geocentric<double> { double x0[3]; })cameraPosition;
- (double)_fovAdjustment;
- (struct Matrix<double, 3, 1> { double x0[3]; })_intersectAndResolveWorldCollision:(const void *)a0;
- (void)_setupPounceAnimation:(const void *)a0 duration:(double)a1 completion:(id /* block */)a2;
- (void)_updateARContext;
- (void)_updateBaseTransform;
- (struct RigidTransform<double, double> { struct Matrix<double, 3, 1> { double x0[3]; } x0; struct Quaternion<double> { struct Matrix<double, 3, 1> { double x0[3]; } x0; double x1; } x1; })arCameraTransform;
- (void)arSessionWasInterrupted:(unsigned long long)a0;
- (double)distanceFromCenterCoordinate;
- (id)initWithTaskContext:(struct shared_ptr<md::TaskContext> { struct TaskContext *x0; struct __shared_weak_count *x1; })a0 mapDataAccess:(struct MapDataAccess { } *)a1 animationRunner:(struct AnimationRunner { struct MapEngine *x0; } *)a2 runLoopController:(struct RunLoopController { struct MapEngine *x0; long long x1; } *)a3 cameraDelegate:(id)a4;
- (BOOL)isFullyPitched;
- (void)setCurrentZoomLevel:(double)a0;
- (void)setMaxZoomLevel:(double)a0;
- (double)topDownMinimumZoomLevel;
- (void)trasitionToARModeAtCoordinate:(struct { double x0; double x1; })a0 withDuration:(double)a1 completion:(id /* block */)a2;
- (void)trasitionToARModeFromCameraFrame:(const void *)a0 withDuration:(double)a1 completion:(id /* block */)a2;
- (void)updateCameraFrameFromARTransform;
- (void)updateGlobeFromCamera;
- (void)updateWithARSession:(id)a0;
- (void)updateWithTimestamp:(double)a0 withContext:(void *)a1;

@end
