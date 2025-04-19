@interface FCTaskScheduler : NSObject

+ (id)lowPriorityOperationQueue;
+ (id)postLaunchQueue;
+ (id)backgroundDownloadOperationQueue;
+ (void)boostBackgroundDownloads;
+ (void)disableOptionalPrefetching;
+ (void)enableBackgroundDownloadsInSpiteOfHighPriorityTasks;
+ (void)executeOptionalPrefetchBlock:(id /* block */)a0;
+ (id)lowPriorityQueue;
+ (void)popHighPriorityTaskInFlight;
+ (void)pushHighPriorityTaskInFlight;
+ (void)scheduleBackgroundDownloadOperation:(id)a0;
+ (void)scheduleLowPriorityAsyncBlock:(id /* block */)a0;
+ (void)scheduleLowPriorityBlock:(id /* block */)a0;
+ (void)scheduleLowPriorityBlockForMainThread:(id /* block */)a0;
+ (void)scheduleLowPriorityOperation:(id)a0;
+ (void)scheduleOptionalPrefetchBlock:(id /* block */)a0;
+ (void)schedulePostLaunchBlockForMainThread:(id /* block */)a0;

@end
