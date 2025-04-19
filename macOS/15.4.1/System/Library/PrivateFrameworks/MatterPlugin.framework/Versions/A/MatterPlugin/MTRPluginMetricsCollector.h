@class HMFTimer, MTRPluginMetricsObserver, NSString, HMMCoreAnalyticsLogEventObserver, NSMutableSet, HMMLogEventDispatcher;

@interface MTRPluginMetricsCollector : NSObject <HMFTimerDelegate>

@property (retain) HMMLogEventDispatcher *metricDispatcher;
@property (retain) HMMCoreAnalyticsLogEventObserver *eventObserver;
@property (retain) MTRPluginMetricsObserver *transformMetrics;
@property (retain) NSMutableSet *metricCounter;
@property (retain) HMFTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (void)collectMetric:(id)a0;
- (void)collectMetric:(id)a0 error:(id)a1;
- (void)countMetric:(id)a0;

@end
