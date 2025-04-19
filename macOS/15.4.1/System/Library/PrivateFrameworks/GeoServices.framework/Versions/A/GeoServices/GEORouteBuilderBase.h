@class GEOComposedRoute;

@interface GEORouteBuilderBase : NSObject {
    GEOComposedRoute *_route;
}

@property (readonly, nonatomic) GEOComposedRoute *route;

- (void).cxx_destruct;
- (BOOL)_buildBoundingMapRegion;
- (BOOL)_buildComponents;
- (BOOL)_buildCoordinates;
- (BOOL)_buildSections;
- (id)_newRouteInstance;
- (id)_newSegmentWithRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a0 stepRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 index:(unsigned long long)a2;
- (id)_newStepWithRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a0 maneuverStart:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 index:(unsigned long long)a2;
- (BOOL)_setMiscInfo;
- (id)_singleLegWithLocationTypeWaypoints;
- (int)_transportType;
- (id)buildRoute;

@end
