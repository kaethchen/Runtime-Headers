@class NSObject;
@protocol OS_dispatch_queue;

@interface CalDispatchQueueAsyncBlockPerformer : NSObject <CalAsyncBlockPerformer>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (id)performAsync:(id /* block */)a0;
- (id)performAfterDelay:(double)a0 block:(id /* block */)a1;

@end
