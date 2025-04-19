@class NSArray, GEODirectionsRequest, GEORouteAttributes, GEODirectionsResponse, GEOStyleAttributes, GEOETATrafficUpdateResponse, GEOAddressObject, GEOComposedRouteAnchorPointList;

@interface GEORouteInitializerData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *waypoints;
@property (readonly, nonatomic) GEODirectionsRequest *directionsRequest;
@property (readonly, nonatomic) GEODirectionsResponse *directionsResponse;
@property (readonly, nonatomic) GEOETATrafficUpdateResponse *etaTrafficUpdateResponse;
@property (readonly, nonatomic) GEORouteAttributes *routeAttributes;
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property (copy, nonatomic) GEOComposedRouteAnchorPointList *anchorPoints;
@property (retain, nonatomic) GEOAddressObject *address;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWaypoints:(id)a0 routeAttributes:(id)a1 etauResponse:(id)a2 styleAttributes:(id)a3;
- (id)_allRoutesWithTypes:(int)a0;
- (id)allETAUAlternateRoutes;
- (id)allRoutes;
- (id)initWithWaypoints:(id)a0 routeAttributes:(id)a1 directionsResponse:(id)a2;
- (id)initWithWaypoints:(id)a0 routeAttributes:(id)a1 directionsResponse:(id)a2 directionsRequest:(id)a3;
- (id)mainRoute;
- (id)nonRecommendedRoutes;

@end
