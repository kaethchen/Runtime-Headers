@class NSDate, MNTraceRecorder, GEOMapFeatureAccess;

@interface MNRouteEditor : NSObject {
    GEOMapFeatureAccess *_mapFeatureAccess;
    double _maxDistanceFromRoads;
    MNTraceRecorder *_traceRecorder;
    BOOL _isTraceRecordingEnabled;
    NSDate *_sessionStartDate;
}

@property (readonly, nonatomic, getter=_traceRecorder) MNTraceRecorder *traceRecorder;

+ (void)_addressForRoute:(id)a0 traits:(id)a1 handler:(id /* block */)a2;
+ (void)_convertAnchorPointsToWaypoints:(id)a0 routeEditorRequest:(id)a1 finishedHandler:(id /* block */)a2;
+ (void)_fetchWaypointsFromRouteGeometry:(id)a0 routeEditorRequest:(id)a1 finishedHandler:(id /* block */)a2;
+ (void)_handleWaypointStepFinishedWithOrigin:(id)a0 destination:(id)a1 address:(id)a2 error:(id)a3 finishedHandler:(id /* block */)a4;
+ (void)_requestFinalizedRouteWithWaypoints:(id)a0 address:(id)a1 routeEditorRequest:(id)a2 finishedHandler:(id /* block */)a3;
+ (void)_waypointForAnchorPoint:(id)a0 traits:(id)a1 clientAttributes:(id)a2 handler:(id /* block */)a3;
+ (id)convertToNavigableRoute:(id)a0 finishedHandler:(id /* block */)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)endSession;
- (BOOL)_checkAnchorPointCount:(unsigned long long)a0 action:(unsigned long long)a1 finishedHandler:(id /* block */)a2;
- (void)_requestRouteGeometry:(id)a0 finishedHandler:(id /* block */)a1;
- (void)_validateAnchorPoints:(id)a0 finishedHandler:(id /* block */)a1;
- (void)_validateCountrySupportedForAnchorPoint:(id)a0 finishedHandler:(id /* block */)a1;
- (void)_validateRoadProximityForAnchorPoint:(id)a0 finishedHandler:(id /* block */)a1;
- (id)initWithTraceRecordingEnabled:(BOOL)a0;
- (id)requestRouteGeometry:(id)a0 finishedHandler:(id /* block */)a1;
- (void)validateAnchorPoint:(id)a0 handler:(id /* block */)a1;

@end
