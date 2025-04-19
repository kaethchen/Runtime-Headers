@class GEORouteMatch, VKRunningCurve, NSUUID, _valid, VKPuckAnimatorLocationProjector, CLLocation, VKTimedAnimation;
@protocol VKPuckAnimatorTarget, VKPuckAnimatorDelegate;

@interface VKPuckAnimator : NSObject {
    VKTimedAnimation *_animation;
    VKRunningCurve *_curve;
    VKPuckAnimatorLocationProjector *_locationProjector;
    double _vehicleHeading;
    long long _pausedCount;
    BOOL _suspended;
    BOOL _hasElevation;
    BOOL _resetCourse;
    BOOL _vehicleHeadingUpdated;
    struct { double latitude; double longitude; } _lastProjectedCoordinate;
    const struct RouteOverlayCache { void /* function */ **x0; id x1; } *_routeOverlayCache;
    struct linear_map<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>, std::equal_to<unsigned long long>, std::allocator<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>>, std::vector<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>>> { struct vector<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>, std::allocator<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>> *, std::allocator<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>>> { void *__value_; } __end_cap_; } _backing; } _locationUpdateSubscriptions;
    struct Monitorable<md::ConfigValue<GEOConfigKeyDouble, double>> { struct { struct { unsigned int identifier; void *metadata; } key; } _key; double _value; _valid *_listener; struct shared_ptr<std::atomic<bool>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } x0; struct function<void (double)> { struct __value_func<void (double)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _delegate; } _puckUpdatePointDeltaForAnimation;
    struct Monitorable<md::ConfigValue<GEOConfigKeyDouble, double>> { struct { struct { unsigned int identifier; void *metadata; } key; } _key; double _value; _valid *_listener; struct shared_ptr<std::atomic<bool>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } x0; struct function<void (double)> { struct __value_func<void (double)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _delegate; } _puckUpdateDistanceDeltaThreshold;
    struct optional<md::LocationUpdate> { union { char __null_state_; struct LocationUpdate { CLLocation *location; GEORouteMatch *routeMatch; NSUUID *locationUpdateUUID; } __val_; } ; BOOL __engaged_; } _lastLocationUpdate;
}

@property (readonly, nonatomic) struct optional<std::pair<geo::Mercator3<double>, geo::Mercator3<double>>> { union { char x0; struct pair<geo::Mercator3<double>, geo::Mercator3<double>> { struct Mercator3<double> { double x0[3]; } x0; struct Mercator3<double> { double x0[3]; } x1; } x1; } x0; BOOL x1; } currentSnappedSegment;
@property (nonatomic) struct Matrix<double, 3, 1> { double _e[3]; } lastProjectedPosition;
@property (nonatomic) BOOL alwaysUseGoodRouteMatch;
@property (retain, nonatomic) id<VKPuckAnimatorTarget> target;
@property (weak, nonatomic) id<VKPuckAnimatorDelegate> delegate;
@property (nonatomic) double tracePlaybackSpeedMultiplier;
@property (nonatomic) unsigned long long behavior;

- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (id).cxx_construct;
- (void)pause;
- (void)start;
- (void)stop;
- (id)detailedDescription;
- (BOOL)hasElevation;
- (void)updateLocation:(id)a0 routeMatch:(id)a1 locationUpdateUUID:(id)a2;
- (id)initWithCallbackQueue:(id)a0;
- (void)_step;
- (void)unsubscribeFromLocationUpdates:(unsigned long long)a0;
- (void)_publishLocationUpdate:(id)a0 routeMatch:(id)a1 uuid:(id)a2;
- (void)_queueLocationUpdate:(id)a0 routeMatch:(id)a1 locationUpdateUUID:(id)a2;
- (void)_updateLocation:(id)a0 routeMatch:(id)a1 locationUpdateUUID:(id)a2;
- (void)processLocationUpdates;
- (void)resetCourse;
- (void)setRouteOverlayCache:(const struct RouteOverlayCache { void /* function */ **x0; id x1; } *)a0;
- (unsigned long long)subscribeToLocationUpdates:(struct function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)> { struct __value_func<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a0;
- (void)updateLocation:(id)a0 routeMatch:(id)a1;
- (void)updateVehicleHeading:(double)a0;
- (void)updatedPosition:(const void *)a0;

@end
