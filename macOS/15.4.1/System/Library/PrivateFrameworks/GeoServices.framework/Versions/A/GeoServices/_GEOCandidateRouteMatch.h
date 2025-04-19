@class NSArray, _GEORouteMatchingSegment;

@interface _GEOCandidateRouteMatch : NSObject <NSCopying> {
    BOOL _isGoodMatch;
    double _score;
    struct PolylineCoordinate { unsigned int index; float offset; } _routeCoordinate;
    unsigned long long _stepIndex;
    double _distanceFromRoute;
    double _maxDistance;
    double _distanceMatchScore;
    double _distanceWeight;
    double _courseDelta;
    double _maxCourseDelta;
    double _courseMatchScore;
    double _courseWeight;
    double _distanceTraveledMatchScore;
    double _distanceTraveledWeight;
    double _distanceAlongRouteFromPreviousMatch;
    _GEORouteMatchingSegment *_segment;
    NSArray *_scoreInfos;
    struct { double latitude; double longitude; } _locationCoordinate;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithRoute:(id)a0;

@end
