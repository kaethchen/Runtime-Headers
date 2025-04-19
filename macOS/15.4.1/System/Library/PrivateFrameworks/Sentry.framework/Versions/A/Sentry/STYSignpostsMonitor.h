@class STYSignpostStreamingStatistics, STYGeneralSignpostMonitorHelper, STYSpecialAppLaunchSignpostMonitorHelper, STYWorkflowResponsivenessMonitorHelper, NSDate, NSObject, SignpostSupportObjectExtractor;
@protocol OS_dispatch_queue;

@interface STYSignpostsMonitor : NSObject

@property (retain) NSObject<OS_dispatch_queue> *monitorQueue;
@property (retain) SignpostSupportObjectExtractor *signpostExtractor;
@property (retain) STYSignpostStreamingStatistics *streamingStatistics;
@property (retain) NSDate *timeOfLastExtractorFailure;
@property unsigned int successiveExtractorFailureCount;
@property unsigned int eventCount;
@property (retain) STYGeneralSignpostMonitorHelper *generalSignpostHelper;
@property (retain) STYSpecialAppLaunchSignpostMonitorHelper *specialAppLaunchSignpostHelper;
@property (retain) STYWorkflowResponsivenessMonitorHelper *workflowResponsivenessHelper;

+ (id)sharedMonitor;

- (id)init;
- (void).cxx_destruct;
- (void)disable;
- (void)checkMonitoring:(BOOL)a0;
- (void)forEachEnabledHelper:(id /* block */)a0;
- (void)forEachHelper:(id /* block */)a0;
- (BOOL)monitorAppLaunchSignposts;
- (BOOL)monitorSignposts:(BOOL)a0;
- (BOOL)monitorWorkflowsWithDailyLogLimit:(int)a0 perPeriodLogLimit:(int)a1 periodLengthSec:(int)a2;
- (BOOL)needsEnablementChange;
- (void)reportLatencyToReceiveSignposts:(id)a0;
- (void)setupRetryAfterFailure;
- (void)stopMonitoringAppLaunchSignposts;
- (void)stopMonitoringSignposts;
- (void)stopMonitoringWorkflows;

@end
