@class MTRPluginMetricsTransformer, NSString;

@interface MTRPluginMetricsObserver : NSObject <HMMLogEventObserver>

@property (retain) MTRPluginMetricsTransformer *metricsTransformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;

@end
