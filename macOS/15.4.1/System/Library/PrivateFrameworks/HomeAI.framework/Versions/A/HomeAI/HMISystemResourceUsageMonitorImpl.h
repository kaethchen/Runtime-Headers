@class HMISystemResourceUsage, NSObject;
@protocol HMISystemResourceUsageMonitorProtocol, OS_dispatch_queue, HMISystemResourceUsageMonitorDelegate;

@interface HMISystemResourceUsageMonitorImpl : HMFObject <HMISystemResourceUsageMonitorProtocol>

@property (readonly) id<HMISystemResourceUsageMonitorProtocol> resourceUsageMonitor;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMISystemResourceUsage *currentSystemResourceUsage;
@property (readonly) unsigned long long maxNumberOfAnalyzers;
@property (readonly) float maxAnalysisFPS;
@property (weak) id<HMISystemResourceUsageMonitorDelegate> delegate;

- (void).cxx_destruct;
- (void)start;
- (id)getCurrentSystemResourceUsage;
- (id)initWithProductClass:(long long)a0 workQueue:(id)a1;

@end
