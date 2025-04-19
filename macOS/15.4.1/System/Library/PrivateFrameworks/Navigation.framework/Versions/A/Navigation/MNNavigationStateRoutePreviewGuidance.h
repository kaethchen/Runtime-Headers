@interface MNNavigationStateRoutePreviewGuidance : MNNavigationStateGuidance

- (unsigned long long)type;
- (void)enterState;
- (id)initWithStateManager:(id)a0 navigationSessionManager:(id)a1 startDetails:(id)a2;
- (void)setGuidanceType:(unsigned long long)a0;
- (void)stopNavigationWithReason:(unsigned long long)a0;

@end
