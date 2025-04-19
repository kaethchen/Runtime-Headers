@class GEOComposedWaypointDisplayInfo, NSString, GEOFeatureStyleAttributes, GEOComposedWaypoint;

@interface VKRouteWaypointInfo : NSObject {
    GEOComposedWaypointDisplayInfo *_displayInfo;
}

@property (readonly, nonatomic) unsigned long long legIndex;
@property (nonatomic) BOOL needsTextUpdate;
@property (nonatomic) BOOL isAtStart;
@property (nonatomic) BOOL isAtEnd;
@property (nonatomic) BOOL isOnSelectedRoute;
@property (readonly, nonatomic) struct { double latitude; double longitude; double altitude; } routeCoordinate;
@property (readonly, nonatomic) struct { double latitude; double longitude; double altitude; } adjacentRouteCoordinate;
@property (nonatomic) unsigned char when;
@property (readonly, nonatomic) NSString *annotationText;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; } coordinate;
@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) GEOComposedWaypoint *waypoint;
@property (readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } polylineCoordinate;
@property (nonatomic) unsigned long long waypointIndex;

+ (id)newRouteWaypointForAnchorpoint:(id)a0 legIndex:(unsigned long long)a1 routeCoordinate:(struct { double x0; double x1; double x2; })a2 adjacentRouteCoordinate:(struct { double x0; double x1; double x2; })a3 polylineCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a4;
+ (id)newRouteWaypointForWaypoint:(id)a0 displayInfo:(id)a1 legIndex:(unsigned long long)a2 routeCoordinate:(struct { double x0; double x1; double x2; })a3 adjacentRouteCoordinate:(struct { double x0; double x1; double x2; })a4 polylineCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a5;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_anchorpoint;
- (BOOL)_isAnchorpoint;
- (id)initWithWaypoint:(id)a0 displayInfo:(id)a1 legIndex:(unsigned long long)a2 routeCoordinate:(struct { double x0; double x1; double x2; })a3 adjacentRouteCoordinate:(struct { double x0; double x1; double x2; })a4 polylineCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a5 waypointType:(unsigned char)a6;

@end
