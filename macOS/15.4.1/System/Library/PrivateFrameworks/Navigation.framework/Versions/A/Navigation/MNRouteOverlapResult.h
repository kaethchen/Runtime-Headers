@class NSUUID, GEOPolylineCoordinateRangeArray;

@interface MNRouteOverlapResult : NSObject

@property (retain, nonatomic) NSUUID *routeID;
@property (nonatomic) struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int index; float offset; } start; struct PolylineCoordinate { unsigned int index; float offset; } end; } routeRange;
@property (retain, nonatomic) GEOPolylineCoordinateRangeArray *overlapRanges;
@property (retain, nonatomic) GEOPolylineCoordinateRangeArray *uniqueRanges;

- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
