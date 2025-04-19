@class NSString, NSOperationQueue;

@interface _NAOperationQueueScheduler : NSObject <NAScheduler> {
    NSOperationQueue *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performBlock:(id /* block */)a0;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (id)initWithMaxConcurrentOperationCount:(unsigned long long)a0;
- (id)performCancelableBlock:(id /* block */)a0;

@end
