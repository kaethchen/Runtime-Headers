@class GEOComposedRouteStep;

@interface _GEORouteMatchingSegment : NSObject {
    unsigned int _startPointIndex;
    float _startRouteCoordinateOffset;
    float _endRouteCoordinateOffset;
    struct { double latitude; double longitude; } _startCoordinate;
    struct { double latitude; double longitude; } _endCoordinate;
    GEOComposedRouteStep *_step;
}

- (id)description;
- (void).cxx_destruct;

@end
