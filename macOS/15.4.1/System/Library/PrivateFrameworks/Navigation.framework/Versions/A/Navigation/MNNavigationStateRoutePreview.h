@class NSArray, MNNavigationSessionManager;

@interface MNNavigationStateRoutePreview : MNNavigationState {
    NSArray *_previewRoutes;
    unsigned long long _selectedRouteIndex;
    MNNavigationSessionManager *_navigationSessionManager;
}

- (void).cxx_destruct;
- (unsigned long long)type;
- (void)enterState;
- (unsigned long long)desiredLocationProviderType;
- (id)initWithStateManager:(id)a0 previewRoutes:(id)a1 selectedRouteIndex:(unsigned long long)a2;
- (void)leaveState;
- (void)pauseRealtimeUpdatesForSubscriber:(id)a0;
- (BOOL)requiresHighMemoryThreshold;
- (void)resumeRealtimeUpdatesForSubscriber:(id)a0;
- (void)setRoutesForPreview:(id)a0 selectedRouteIndex:(unsigned long long)a1;
- (BOOL)shouldClearStoredRoutes;
- (id)simulationLocationProvider;
- (void)startNavigationWithDetails:(id)a0 activeBlock:(id /* block */)a1;
- (void)stopNavigationWithReason:(unsigned long long)a0;
- (id)traceManager;

@end
