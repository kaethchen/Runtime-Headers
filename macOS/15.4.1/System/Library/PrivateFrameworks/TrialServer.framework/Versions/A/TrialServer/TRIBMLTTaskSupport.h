@class _PASLock, TRIBMLTDeployment;

@interface TRIBMLTTaskSupport : NSObject <TRIMetricsProviding> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) TRIBMLTDeployment *bmltDeployment;

- (void).cxx_destruct;
- (id)tags;
- (id)metrics;
- (id)dimensions;
- (void)addMetric:(id)a0;
- (id)trialSystemTelemetry;
- (void)mergeTelemetry:(id)a0;
- (void)addDimension:(id)a0;
- (id)initWithBMLTDeployment:(id)a0;

@end
