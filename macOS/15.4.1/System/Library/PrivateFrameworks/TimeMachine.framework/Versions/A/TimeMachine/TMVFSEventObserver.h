@class NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;

@interface TMVFSEventObserver : NSObject {
    NSObject<OS_dispatch_queue> *_eventMonitorQueue;
    NSObject<OS_dispatch_source> *_eventMonitor;
    NSObject<OS_dispatch_semaphore> *_eventMonitorStoppedSemaphore;
    BOOL _isMonitoring;
    struct __DASession { } *_daSession;
}

@property (copy, nonatomic) NSDictionary *lastMountedVolumesMap;
@property (readonly) NSMutableDictionary *volumeTransactions;
@property (copy) id /* block */ diskPeekBlock;
@property (copy) id /* block */ diskWillAppearBlock;
@property (copy) id /* block */ diskAppearedBlock;
@property (copy) id /* block */ diskDisappearedBlock;

- (id)init;
- (void).cxx_destruct;
- (void)startObserving;
- (void)stopObserving;
- (id)_copyMountedVolumesMap;
- (void)_handleDiskEvents:(unsigned long long)a0;
- (void)startObservingOnQueue:(id)a0;

@end
