@class GEOComposedRoute, GEOMapFeatureAccess, NSMutableSet, NSMutableArray;

@interface _MNLocationSimulationState_SearchingForOffRoute : _MNLocationSimulationState_FollowingRoute {
    GEOComposedRoute *_routeToOffRouteLocation;
    BOOL _shouldStartSearchOnNextLocation;
    GEOMapFeatureAccess *_mapFeatureAccess;
    NSMutableArray *_candidateRoads;
    NSMutableSet *_checkedRoads;
}

- (void).cxx_destruct;
- (long long)type;
- (void)_findFirstJunction:(id /* block */)a0;
- (void)_findOffRouteLocationWithMatchedSegments:(id)a0 stepFinishedHandler:(id /* block */)a1;
- (void)_findRouteToOffRouteLocation;
- (void)_findRouteToOffRouteLocation:(id)a0 stepFinishedHandler:(id /* block */)a1;
- (struct { double x0; double x1; double x2; })_nextOffRouteTarget;
- (id)_routeToFollow;
- (id)nextSimulatedLocationWithElapsedTime:(double)a0;
- (void)onEnterState;
- (void)updateWithRouteInfo:(id)a0 rerouteReason:(unsigned long long)a1;

@end
