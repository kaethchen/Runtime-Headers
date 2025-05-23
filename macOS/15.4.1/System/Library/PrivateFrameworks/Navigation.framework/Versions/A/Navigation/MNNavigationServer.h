@class NSXPCListener, NSString, MNNavigationDetails, NSMutableSet, MNNavigationServiceLocalProxy;

@interface MNNavigationServer : NSObject <GEOPListStateCapturing, NSXPCListenerDelegate, MNNavigationServiceClientInterface> {
    NSXPCListener *_listener;
    NSMutableSet *_peers;
    NSMutableSet *_unEntitledPeers;
    MNNavigationDetails *_details;
    MNNavigationServiceLocalProxy *_localProxy;
    unsigned long long _stateCaptureHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedServer;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (void)_defaultsDidChange;
- (void)_enumerateRemoteObjectsWithHandler:(id /* block */)a0;
- (id)_peerDescriptions;
- (void)_peerDidDisconnect:(id)a0;
- (void)_resetDetails;
- (void)navigationServiceProxy:(id)a0 didActivateAudioSession:(BOOL)a1;
- (void)navigationServiceProxy:(id)a0 didArriveAtWaypoint:(id)a1 endOfLegIndex:(unsigned long long)a2;
- (void)navigationServiceProxy:(id)a0 didChangeFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (void)navigationServiceProxy:(id)a0 didChangeNavigationState:(int)a1;
- (void)navigationServiceProxy:(id)a0 didDismissTrafficIncidentAlert:(id)a1;
- (void)navigationServiceProxy:(id)a0 didEnableGuidancePrompts:(BOOL)a1;
- (void)navigationServiceProxy:(id)a0 didEnterPreArrivalStateForWaypoint:(id)a1 endOfLegIndex:(unsigned long long)a2;
- (void)navigationServiceProxy:(id)a0 didFailRerouteWithError:(id)a1;
- (void)navigationServiceProxy:(id)a0 didFailWithError:(id)a1;
- (void)navigationServiceProxy:(id)a0 didInvalidateTrafficIncidentAlert:(id)a1;
- (void)navigationServiceProxy:(id)a0 didProcessSpeechEvent:(id)a1;
- (void)navigationServiceProxy:(id)a0 didReceiveRealtimeUpdates:(id)a1;
- (void)navigationServiceProxy:(id)a0 didReceiveRouteSignalStrength:(unsigned long long)a1;
- (void)navigationServiceProxy:(id)a0 didReceiveTrafficIncidentAlert:(id)a1;
- (void)navigationServiceProxy:(id)a0 didReceiveTransitAlert:(id)a1;
- (void)navigationServiceProxy:(id)a0 didRerouteWithRoute:(id)a1 withLocation:(id)a2 withAlternateRoutes:(id)a3 rerouteReason:(unsigned long long)a4;
- (void)navigationServiceProxy:(id)a0 didResumeNavigatingFromWaypoint:(id)a1 endOfLegIndex:(unsigned long long)a2 reason:(unsigned long long)a3;
- (void)navigationServiceProxy:(id)a0 didSendNavigationServiceCallback:(id)a1;
- (void)navigationServiceProxy:(id)a0 didStartSpeakingPrompt:(id)a1;
- (void)navigationServiceProxy:(id)a0 didSwitchToNewTransportType:(int)a1 newRoute:(id)a2;
- (void)navigationServiceProxy:(id)a0 didUpdateAlternateRoutes:(id)a1;
- (void)navigationServiceProxy:(id)a0 didUpdateDisplayedStepIndex:(unsigned long long)a1 segmentIndex:(unsigned long long)a2;
- (void)navigationServiceProxy:(id)a0 didUpdateDistanceUntilManeuver:(double)a1 timeUntilManeuver:(double)a2 forStepIndex:(unsigned long long)a3;
- (void)navigationServiceProxy:(id)a0 didUpdateDistanceUntilSign:(double)a1 timeUntilSign:(double)a2 forStepIndex:(unsigned long long)a3;
- (void)navigationServiceProxy:(id)a0 didUpdateETAResponseForRoute:(id)a1;
- (void)navigationServiceProxy:(id)a0 didUpdateHeading:(double)a1 accuracy:(double)a2;
- (void)navigationServiceProxy:(id)a0 didUpdateMotionType:(unsigned long long)a1 confidence:(unsigned long long)a2;
- (void)navigationServiceProxy:(id)a0 didUpdateNavigationDetails:(id)a1;
- (void)navigationServiceProxy:(id)a0 didUpdatePreviewRoutes:(id)a1 withSelectedRouteIndex:(unsigned long long)a2;
- (void)navigationServiceProxy:(id)a0 didUpdateProceedToRouteDistance:(double)a1 displayString:(id)a2 closestStepIndex:(unsigned long long)a3;
- (void)navigationServiceProxy:(id)a0 didUpdateRouteWithNewRideSelection:(id)a1;
- (void)navigationServiceProxy:(id)a0 didUpdateTracePlaybackDetails:(id)a1;
- (void)navigationServiceProxy:(id)a0 didUpdateTrafficIncidentAlert:(id)a1;
- (void)navigationServiceProxy:(id)a0 displayManeuverAlertForAnnouncementStage:(unsigned long long)a1;
- (void)navigationServiceProxy:(id)a0 displayPrimaryStep:(id)a1 instructions:(id)a2 shieldType:(int)a3 shieldText:(id)a4 drivingSide:(int)a5 maneuverStepIndex:(unsigned long long)a6 isSynthetic:(BOOL)a7;
- (void)navigationServiceProxy:(id)a0 displaySecondaryStep:(id)a1 instructions:(id)a2 shieldType:(int)a3 shieldText:(id)a4 drivingSide:(int)a5;
- (void)navigationServiceProxy:(id)a0 hideJunctionViewForId:(id)a1;
- (void)navigationServiceProxy:(id)a0 hideLaneDirectionsForId:(id)a1;
- (void)navigationServiceProxy:(id)a0 isApproachingEndOfLeg:(unsigned long long)a1;
- (void)navigationServiceProxy:(id)a0 newGuidanceEventFeedback:(id)a1;
- (void)navigationServiceProxy:(id)a0 showJunctionView:(id)a1;
- (void)navigationServiceProxy:(id)a0 showLaneDirections:(id)a1;
- (void)navigationServiceProxy:(id)a0 triggerHaptics:(int)a1;
- (void)navigationServiceProxy:(id)a0 updateSignsWithARInfo:(id)a1;
- (void)navigationServiceProxy:(id)a0 updateSignsWithInfo:(id)a1;
- (void)navigationServiceProxy:(id)a0 updatedGuidanceEventFeedback:(id)a1;
- (void)navigationServiceProxy:(id)a0 usePersistentDisplay:(BOOL)a1;
- (void)navigationServiceProxy:(id)a0 willAnnounce:(unsigned long long)a1 inSeconds:(double)a2;
- (void)navigationServiceProxy:(id)a0 willChangeFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (void)navigationServiceProxy:(id)a0 willProcessSpeechEvent:(id)a1;
- (void)navigationServiceProxy:(id)a0 willRequestRealtimeUpdatesForRouteIDs:(id)a1;
- (void)navigationServiceProxyBeginGuidanceUpdate:(id)a0;
- (void)navigationServiceProxyDidArrive:(id)a0;
- (void)navigationServiceProxyDidCancelReroute:(id)a0;
- (void)navigationServiceProxyDidEnterPreArrivalState:(id)a0;
- (void)navigationServiceProxyDidFinishLocationUpdate:(id)a0;
- (void)navigationServiceProxyEndGuidanceUpdate:(id)a0;
- (void)navigationServiceProxyHideSecondaryStep:(id)a0;
- (void)navigationServiceProxyWillPauseNavigation:(id)a0;
- (void)navigationServiceProxyWillReroute:(id)a0;
- (void)navigationServiceProxyWillResumeFromPauseNavigation:(id)a0;

@end
