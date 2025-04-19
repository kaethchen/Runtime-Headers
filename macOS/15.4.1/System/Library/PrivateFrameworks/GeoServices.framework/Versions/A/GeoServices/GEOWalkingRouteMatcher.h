@class NSArray, NSMutableArray, _GEOWalkingRouteMatcherTurnAroundManeuverInfo;

@interface GEOWalkingRouteMatcher : GEORouteMatcher {
    unsigned long long _newStepProgressions;
    struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int index; float offset; } start; struct PolylineCoordinate { unsigned int index; float offset; } end; } _expectedCoordinateRange;
    struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int index; float offset; } start; struct PolylineCoordinate { unsigned int index; float offset; } end; } _possibleCoordinateRange;
    struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int index; float offset; } start; struct PolylineCoordinate { unsigned int index; float offset; } end; } _tolerableCoordinateRange;
    struct PolylineCoordinate { unsigned int index; float offset; } _lastReferenceCoordinate;
    NSArray *_turnAroundManeuverInfos;
    _GEOWalkingRouteMatcherTurnAroundManeuverInfo *_nearbyTurnAroundManeuverInfo;
    NSMutableArray *_recentLocations;
    NSMutableArray *_candidateMatchesForSecondPass;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_updateNearbyTurnAroundManeuver;
- (void)_addRecentLocation:(id)a0 isOnRoute:(BOOL)a1;
- (id)_candidateForSegment:(id)a0 location:(id)a1 previousRouteMatch:(id)a2;
- (void)_considerCandidateMatch:(id)a0;
- (id)_contiguousSegmentsForCandidates:(id)a0;
- (id)_courseScoreInfoForSegment:(id)a0 location:(id)a1 currentRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a2;
- (double)_distanceFromRouteForLocation:(id)a0 withinRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a1 outRouteCoordinate:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)a2;
- (id)_distanceScoreInfoForSegment:(id)a0 location:(id)a1 distanceFromSegment:(double)a2;
- (id)_distanceTraveledScoreInfoForSegment:(id)a0 location:(id)a1 currentRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a2;
- (void)_finishRouteMatch:(id)a0 previousRouteMatch:(id)a1 forLocation:(id)a2;
- (id)_firstTimeOnRouteScoreInfoForSegment:(id)a0 location:(id)a1 currentRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a2;
- (double)_followingRouteScoreForRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0;
- (double)_maxMatchDistance:(double)a0 routeCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 previousMatchGood:(BOOL)a2;
- (id)_nearStartOfStepScoreInfoForSegment:(id)a0 location:(id)a1 currentRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a2;
- (id)_nearTurnAroundManeuverScoreInfoForSegment:(id)a0 location:(id)a1 currentRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a2;
- (void)_resetExpectedCoordinateRange;
- (void)_resetExpectedCoordinateRangeIfNecessary;
- (double)_scoreForCandidateWithScoreInfos:(id)a0;
- (void)_startRouteMatch;
- (BOOL)_supportsSnapping;
- (id)_topRouteMatchCandidate;
- (id)initWithRoute:(id)a0 auditToken:(id)a1;

@end
