@interface FMScheduler : NSObject

+ (id)globalAsyncScheduler;
+ (id)immediateScheduler;
+ (id)mainThreadScheduler;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(long long)a0;
+ (id)serialDispatchQueueSchedulerWithName:(id)a0;
+ (id)schedulerWithDispatchQueue:(id)a0;

@end
