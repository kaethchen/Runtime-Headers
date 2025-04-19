@class TRIClient;

@interface TRIExperimentPostLaunchLogger : NSObject <TRIExperimentPostLaunchLogging>

@property (readonly, nonatomic) TRIClient *client;

- (void).cxx_destruct;
- (id)initWithClient:(id)a0;
- (id)_metricForEvent:(id)a0;
- (void)logExperimentPostLaunchEvent:(id)a0;

@end
