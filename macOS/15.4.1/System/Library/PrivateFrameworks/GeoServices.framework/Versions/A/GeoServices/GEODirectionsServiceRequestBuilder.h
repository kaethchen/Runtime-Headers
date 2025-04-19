@class NSArray, GEODirectionsServiceRequestParameters;

@interface GEODirectionsServiceRequestBuilder : NSObject {
    unsigned long long _type;
    GEODirectionsServiceRequestParameters *_parameters;
    NSArray *_waypoints;
}

+ (id)builderForRequestType:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (unsigned long long)_type;
- (id)_waypointsFromRequestParameters;
- (id)_geoWaypointTypedForWaypoint:(id)a0 voiceLanguage:(id)a1;
- (void)_logBuiltDirectionsRequest:(id)a0;
- (id)_parameters;
- (void)_populateMiscFieldsInDirectionsRequest:(id)a0;
- (void)_populateOriginalWaypointRouteInDirectionsRequest:(id)a0;
- (void)_populateRouteAttributesInDirectionsRequest:(id)a0;
- (void)_populateWaypointTypedInDirectionsRequest:(id)a0;
- (id)_waypoints;
- (id)_waypointsFromCurrentLocationAndRoute;
- (id)buildDirectionsRequestWithParameters:(id)a0;
- (int)directionsRequestFeedbackPurpose;
- (id)geoOriginalWaypointRoute;
- (int)originalWaypointRoutePurpose;
- (void)setMiscFieldsInDirectionsRequest:(id)a0;
- (BOOL)shouldAllowTimepoint;
- (BOOL)shouldUseFullLegForOriginalWaypointRoute;
- (id)typedWaypointsForDirectionsRequest;
- (void)verifyWaypointsForDirectionsRequest:(id)a0;
- (id)waypointsForRoute;

@end
