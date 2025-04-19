@class _PASLock, TRIExperimentDeployment;

@interface TRIExperimentBaseTask : TRIBaseTask <TRIMetricsProviding> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) TRIExperimentDeployment *experiment;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)tags;
- (id)metrics;
- (id)dimensions;
- (void)addMetric:(id)a0;
- (id)trialSystemTelemetry;
- (void)mergeTelemetry:(id)a0;
- (void)addDimension:(id)a0;
- (id)containerForFirstNamespaceInExperimentWithContext:(id)a0;
- (id)initWithExperiment:(id)a0;
- (void)logAsRollout:(BOOL)a0;
- (id)nextTasksForRunStatus:(int)a0;

@end
