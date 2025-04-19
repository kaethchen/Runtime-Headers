@class MNNavigationSessionManager, MNStartNavigationDetails;

@interface MNNavigationStateGuidance : MNNavigationState {
    MNNavigationSessionManager *_navigationSessionManager;
    MNStartNavigationDetails *_startDetails;
}

+ (id)guidanceStateForStartDetails:(id)a0 stateManager:(id)a1 navigationSessionManager:(id)a2;

- (void).cxx_destruct;
- (void)enterState;
- (void)setDisplayedStepIndex:(unsigned long long)a0;
- (void)setIsConnectedToCarplay:(BOOL)a0;
- (id)currentDestination;
- (void)insertWaypoint:(id)a0;
- (void)repeatCurrentGuidanceWithReply:(id /* block */)a0;
- (void)acceptReroute:(BOOL)a0 forTrafficIncidentAlert:(id)a1;
- (void)advanceToNextLeg;
- (void)changeTransportType:(int)a0 route:(id)a1;
- (id)clParameters;
- (unsigned long long)desiredLocationProviderType;
- (void)disableNavigationCapability:(unsigned long long)a0;
- (void)enableNavigationCapability:(unsigned long long)a0;
- (void)forceReroute;
- (id)initWithStateManager:(id)a0 navigationSessionManager:(id)a1 startDetails:(id)a2;
- (void)leaveState;
- (void)pauseRealtimeUpdatesForSubscriber:(id)a0;
- (void)postEnterState;
- (void)preEnterState;
- (void)recordPedestrianTracePath:(id)a0;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)a0;
- (void)removeWaypointAtIndex:(unsigned long long)a0;
- (void)repeatCurrentTrafficAlertWithReply:(id /* block */)a0;
- (BOOL)requiresHighMemoryThreshold;
- (void)rerouteWithWaypoints:(id)a0;
- (void)resumeOriginalDestination;
- (void)resumeRealtimeUpdatesForSubscriber:(id)a0;
- (void)setIsDisplayingNavigationTray:(BOOL)a0;
- (void)setJunctionViewImageWidth:(double)a0 height:(double)a1;
- (void)setRideIndex:(unsigned long long)a0 forSegmentIndex:(unsigned long long)a1;
- (void)setSimulationPosition:(double)a0;
- (void)setSimulationSpeedMultiplier:(double)a0;
- (void)setSimulationSpeedOverride:(double)a0;
- (void)setTraceIsPlaying:(BOOL)a0;
- (void)setTracePlaybackSpeed:(double)a0;
- (void)setTracePosition:(double)a0;
- (void)setVoiceGuidanceLevelOverride:(unsigned long long)a0;
- (BOOL)shouldClearStoredRoutes;
- (id)simulationLocationProvider;
- (void)stopCurrentGuidancePrompt;
- (void)stopNavigationWithReason:(unsigned long long)a0;
- (void)switchToDestinationRoute;
- (void)switchToRoute:(id)a0;
- (id)traceManager;
- (void)updateDestination:(id)a0;
- (void)vibrateForPrompt:(unsigned long long)a0 withReply:(id /* block */)a1;

@end
