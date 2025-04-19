@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PLBoundedConcurrentQueue : NSObject {
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    NSObject<OS_dispatch_queue> *_submissionQueue;
    NSObject<OS_dispatch_semaphore> *_bound;
}

- (void).cxx_destruct;
- (void)async:(id /* block */)a0;
- (void)sync:(id /* block */)a0;
- (id)initWithName:(id)a0 concurrencyLimit:(unsigned char)a1;

@end
