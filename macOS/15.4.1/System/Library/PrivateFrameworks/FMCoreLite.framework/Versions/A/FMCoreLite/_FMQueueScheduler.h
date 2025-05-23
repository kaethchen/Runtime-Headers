@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface _FMQueueScheduler : NSObject <FMScheduler>

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performBlock:(id /* block */)a0;
- (id)initWithQueue:(id)a0;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (id)performCancelableBlock:(id /* block */)a0;

@end
