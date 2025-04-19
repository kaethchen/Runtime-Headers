@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GpuAppMetrics : NSObject {
    double fStartTime;
    double fLastFlushTime;
    NSObject<OS_dispatch_queue> *fQueue;
    struct IONotificationPort { } *fDeviceNotifyPort;
    NSObject<OS_dispatch_source> *fSampleTimer;
    NSObject<OS_dispatch_source> *fFlushTimer;
}

@property (retain) NSMutableArray *fAppsArray;

- (void)dealloc;
- (void)considerFlushToCoreAnalytics:(BOOL)a0;
- (void)daemonExit;
- (void)flushToCoreAnalytics;
- (id)initWithSampleBlock:(id /* block */)a0;

@end
