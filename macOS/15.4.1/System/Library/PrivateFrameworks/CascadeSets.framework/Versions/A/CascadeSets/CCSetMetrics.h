@interface CCSetMetrics : NSObject

+ (id)_computeMetricsForSet:(id)a0 error:(id *)a1;
+ (double)_populationStandardDeviation:(struct shared_ptr<std::vector<unsigned short>> { void *x0; struct __shared_weak_count *x1; })a0 mean:(double)a1;
+ (void)computeAndReportMetricsForAllSets:(id)a0 shouldDefer:(id /* block */)a1;
+ (void)reportAnalyticsEvent:(id)a0 withName:(id)a1;
+ (BOOL)shouldReportAnalyticsEventWithName:(id)a0;

- (id)init;

@end
