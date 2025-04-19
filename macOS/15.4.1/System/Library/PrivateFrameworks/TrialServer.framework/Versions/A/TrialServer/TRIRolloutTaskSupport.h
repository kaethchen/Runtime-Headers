@class TRIRolloutDeployment, _PASLock;

@interface TRIRolloutTaskSupport : NSObject <TRIMetricsProviding> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) TRIRolloutDeployment *rolloutDeployment;

- (void).cxx_destruct;
- (id)tags;
- (id)metrics;
- (id)dimensions;
- (void)addMetric:(id)a0;
- (id)trialSystemTelemetry;
- (void)mergeTelemetry:(id)a0;
- (void)addDimension:(id)a0;
- (id)initWithRolloutDeployment:(id)a0;

@end
