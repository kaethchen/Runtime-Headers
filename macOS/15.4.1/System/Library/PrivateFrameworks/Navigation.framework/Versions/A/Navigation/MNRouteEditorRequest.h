@class NSArray, GEOMapItemClientAttributes, GEORouteAttributes, GEOCommonOptions, GEODirectionsServiceRequest, GEOComposedRoute, GEOMapServiceTraits, GEOComposedGeometryRoutePersistentData, GEOComposedRouteAnchorPointList;

@interface MNRouteEditorRequest : NSObject

@property (retain, nonatomic) GEODirectionsServiceRequest *directionsServiceRequest;
@property (retain, nonatomic) GEORouteAttributes *routeAttributes;
@property (retain, nonatomic) GEOComposedRouteAnchorPointList *anchorPoints;
@property (nonatomic) unsigned long long action;
@property (retain, nonatomic) GEOMapServiceTraits *traits;
@property (retain, nonatomic) GEOMapItemClientAttributes *clientAttributes;
@property (retain, nonatomic) GEOCommonOptions *commonOptions;
@property (retain, nonatomic) NSArray *waypoints;
@property (retain, nonatomic) GEOComposedRoute *currentRoute;
@property (retain, nonatomic) GEOComposedGeometryRoutePersistentData *undoRedoRouteData;

- (id)init;
- (void).cxx_destruct;
- (id)newAnchorPoints;

@end
