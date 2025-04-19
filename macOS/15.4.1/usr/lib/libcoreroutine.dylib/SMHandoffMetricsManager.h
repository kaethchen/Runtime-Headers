@class NSString;

@interface SMHandoffMetricsManager : RTMetric <RTMetricProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { char *x0; })event;
+ (id)supportedMetricKeys;

- (id)init;
- (void)addMetricErrorCode:(long long)a0;
- (void)addMetricErrorDomain:(id)a0;
- (void)addMetricForLatencyEligibilityChecks:(double)a0;
- (void)addMetricForLatencyFetchActiveSessionDetailsCK:(double)a0;
- (void)addMetricForLatencyHandoffCriteria:(double)a0;
- (void)addMetricForLatencyHandoffEndToEnd:(double)a0;
- (void)addMetricForLatencyWriteActiveSessionDetailsCK:(double)a0;
- (void)addMetricHandoffReason:(long long)a0;
- (void)addMetricSucceeded:(BOOL)a0;
- (void)resetMetrics;
- (void)startMetricsCollection;

@end
