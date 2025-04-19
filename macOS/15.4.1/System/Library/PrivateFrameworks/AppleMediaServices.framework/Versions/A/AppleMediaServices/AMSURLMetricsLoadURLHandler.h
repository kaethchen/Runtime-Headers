@class NSString;

@interface AMSURLMetricsLoadURLHandler : NSObject <AMSURLProtocolDelegate>

@property (readonly) Class metricsClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMetrics:(Class)a0;
- (void)_enqueueLoadURLEvent:(id)a0 forContext:(id)a1;
- (id)_reportMetricsForContext:(id)a0;
- (void)reportMetricsForContext:(id)a0;

@end
