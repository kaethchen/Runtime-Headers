@interface HomeKitMetrics.MinimumTimeIntervalRadarRequestFilter : NSObject <HMMRadarRequestFilter> {
    void /* unknown type, empty encoding */ minimumRequestInterval;
    void /* unknown type, empty encoding */ filterStorage;
    void /* unknown type, empty encoding */ dateFactory;
}

- (id)init;
- (void).cxx_destruct;
- (void)radarRequestedForDisplayReason:(id)a0;
- (BOOL)shouldRequestRadarForDisplayReason:(id)a0;

@end
