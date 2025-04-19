@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface PXPreloadScheduler : NSObject {
    NSObject<OS_dispatch_queue> *_defaultQueue;
    NSObject<OS_dispatch_queue> *_utilityQueue;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_group> *_pendingUtilityTasks;
    NSMutableArray *_pendingBlocks;
    struct __CFRunLoopObserver { } *_runloopObserver;
}

@property (class, readonly, nonatomic) PXPreloadScheduler *sharedScheduler;

@property (nonatomic, setter=_setActive:) BOOL _isActive;
@property BOOL didFinishExtendedLaunch;
@property BOOL waitForExtendedLaunch;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_activateQueues;
- (void)_updateIsActive;
- (void)_activateQueuesIfAllowed;
- (void)_didExecuteTaskWithQoS:(unsigned long long)a0;
- (void)_runLoopWillStartWaiting;
- (BOOL)_shouldExecutePendingBlock;
- (void)_willScheduleTaskWithQoS:(unsigned long long)a0;
- (void)applicationDidFinishExtendedLaunch;
- (void)scheduleDeferredMainQueueTask:(id /* block */)a0;
- (void)scheduleDeferredTaskWithQoS:(unsigned long long)a0 block:(id /* block */)a1;
- (void)scheduleMainQueueTask:(id /* block */)a0;
- (void)scheduleMainQueueTaskAndWait:(id /* block */)a0;
- (void)scheduleTaskAfterCATransactionCommits:(id /* block */)a0;
- (void)scheduleTaskWithQoS:(unsigned long long)a0 block:(id /* block */)a1;

@end
