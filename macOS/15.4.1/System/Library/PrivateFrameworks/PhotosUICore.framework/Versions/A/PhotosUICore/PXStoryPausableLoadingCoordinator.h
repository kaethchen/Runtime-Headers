@class NSObject;
@protocol OS_os_log, OS_dispatch_group;

@interface PXStoryPausableLoadingCoordinator : NSObject <PXStoryLoadingCoordinator> {
    NSObject<OS_dispatch_group> *_timelineWorkGroup;
    long long _pauseCount;
    unsigned long long _pausedSignpostID;
}

@property (readonly, nonatomic) NSObject<OS_os_log> *log;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)dispatchTimelineWorkAsyncOnQueue:(id)a0 block:(id /* block */)a1;
- (void)pauseTimelineWork;
- (void)resumeTimelineWork;

@end
