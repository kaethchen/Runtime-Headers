@protocol ULScheduler;

@interface ULScheduler : NSObject

@property (class, readonly) id<ULScheduler> immediateScheduler;
@property (class, readonly) id<ULScheduler> globalAsyncScheduler;

+ (id)dispatchQueueSchedulerWithQueue:(id)a0;

@end
