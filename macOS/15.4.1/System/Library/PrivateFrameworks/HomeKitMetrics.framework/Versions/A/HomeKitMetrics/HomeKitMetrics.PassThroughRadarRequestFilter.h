@interface HomeKitMetrics.PassThroughRadarRequestFilter : NSObject <HMMRadarRequestFilter>

- (id)init;
- (void)radarRequestedForDisplayReason:(id)a0;
- (BOOL)shouldRequestRadarForDisplayReason:(id)a0;

@end
