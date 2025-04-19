@interface MNWalkingTurnByTurnLocationTracker : MNTurnByTurnLocationTracker {
    int _detectedTransportType;
    struct { double latitude; double longitude; } _detectedTransportTypeOrigin;
}

- (int)transportType;
- (BOOL)_allowRerouteForLocation:(id)a0;
- (BOOL)_allowSwitchToTransportType:(int)a0 forLocation:(id)a1;
- (int)_detectedMotionForLocation:(id)a0;
- (id)_newMapMatcherForRoute:(id)a0;
- (void)_updateForReroute:(id)a0 rerouteReason:(unsigned long long)a1 request:(id)a2 response:(id)a3;
- (id)initWithNavigationSession:(id)a0;
- (void)startTrackingWithInitialLocation:(id)a0 targetLegIndex:(unsigned long long)a1;

@end
