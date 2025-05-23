@class NSString, NSObject;
@protocol OS_dispatch_queue, NAScheduler;

@interface _MTSerialQueueScheduler : NSObject <MTScheduler>

@property (readonly, nonatomic) id<NAScheduler> internalScheduler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performBlock:(id /* block */)a0;
- (id)initWithQueue:(id)a0;
- (void)performSyncBlock:(id /* block */)a0;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (id)performCancelableBlock:(id /* block */)a0;

@end
