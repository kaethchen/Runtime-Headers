@interface AMPDispatchQueueTaskScheduler : NSObject <AMPTaskScheduler> {
    void /* unknown type, empty encoding */ queue;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)schedule:(id /* block */)a0;

@end
