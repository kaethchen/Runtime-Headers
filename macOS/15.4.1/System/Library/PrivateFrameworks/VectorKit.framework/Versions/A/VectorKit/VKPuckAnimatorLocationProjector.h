@class GEORouteMatch;

@interface VKPuckAnimatorLocationProjector : NSObject {
    struct PolylineCoordinate { unsigned int index; float offset; } _maxTravelledCoordinate;
}

@property (retain, nonatomic) GEORouteMatch *routeMatch;
@property (retain, nonatomic) GEORouteMatch *projectedRouteMatch;
@property (readonly, nonatomic) struct Matrix<double, 3, 1> { double _e[3]; } projectedPosition;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } projectedCoordinate;
@property (readonly, nonatomic) BOOL isProjectedPositionBehind;
@property (readonly, nonatomic) struct { double x0; double x1; } projectedLocation;
@property (readonly, nonatomic) struct optional<double> { union { char __null_state_; double __val_; } ; BOOL __engaged_; } elevationInProjectedPostion;
@property (readonly, nonatomic) double projectedCourse;
@property (readonly, nonatomic) BOOL projectedLocationOnRoute;
@property (readonly, nonatomic) struct optional<std::pair<geo::Mercator3<double>, geo::Mercator3<double>>> { union { char __null_state_; struct pair<geo::Mercator3<double>, geo::Mercator3<double>> { struct Mercator3<double> { double _e[3]; } first; struct Mercator3<double> { double _e[3]; } second; } __val_; } ; BOOL __engaged_; } currentSnappedSegment;
@property (nonatomic) BOOL alwaysUseGoodRouteMatch;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)reset;
- (id)detailedDescription;
- (void)_updateCourseAndPositionFromRouteMatch:(id)a0;
- (void)projectFromLocation:(id)a0 routeMatch:(id)a1 speedMultiplier:(double)a2 routeLine:(id)a3;

@end
