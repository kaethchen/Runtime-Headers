@interface HMMMappedDisplayReasonRadarRequestFilter : NSObject <HMMRadarRequestFilter> {
    void /* unknown type, empty encoding */ filtersByDisplayReason;
    void /* unknown type, empty encoding */ defaultRequestFilter;
}

- (id)init;
- (void).cxx_destruct;
- (void)radarRequestedForDisplayReason:(id)a0;
- (BOOL)shouldRequestRadarForDisplayReason:(id)a0;

@end
