@class TRIClient;
@protocol TRIExperimentCountProviding;

@interface TRIActiveExperimentsMetricRecorder : NSObject

@property (readonly, nonatomic) id<TRIExperimentCountProviding> experimentCountProvider;
@property (readonly, nonatomic) TRIClient *client;

- (void).cxx_destruct;
- (id)loggableMetrics;
- (BOOL)_isValidCount:(long long)a0;
- (id)initWithExperimentCountProvider:(id)a0 client:(id)a1;
- (id)initWithServerContext:(id)a0;
- (void)recordMetric;

@end
