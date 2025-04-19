@interface _GEODirectionsServiceRequestBuilder_Reroute : GEODirectionsServiceRequestBuilder

- (int)directionsRequestFeedbackPurpose;
- (int)originalWaypointRoutePurpose;
- (void)setMiscFieldsInDirectionsRequest:(id)a0;
- (void)verifyWaypointsForDirectionsRequest:(id)a0;
- (id)waypointsForRoute;

@end
