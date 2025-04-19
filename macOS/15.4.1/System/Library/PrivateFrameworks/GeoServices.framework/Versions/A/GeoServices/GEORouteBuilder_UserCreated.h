@class NSArray, GEODirectionsRequest, GEODirectionsResponse, GEOComposedRouteAnchorPointList;

@interface GEORouteBuilder_UserCreated : GEORouteBuilderBase

@property (copy, nonatomic) GEOComposedRouteAnchorPointList *anchorPoints;
@property (copy, nonatomic) NSArray *waypoints;
@property (retain, nonatomic) GEODirectionsRequest *directionsRequest;
@property (retain, nonatomic) GEODirectionsResponse *directionsResponse;

- (void).cxx_destruct;
- (id)_newRouteInstance;
- (BOOL)_setMiscInfo;
- (int)_transportType;

@end
