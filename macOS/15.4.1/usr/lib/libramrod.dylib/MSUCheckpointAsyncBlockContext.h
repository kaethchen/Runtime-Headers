@class NSObject;
@protocol OS_dispatch_queue;

@interface MSUCheckpointAsyncBlockContext : MSUCheckpointAsyncContext

@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (copy) id /* block */ workBlock;

- (void)dealloc;
- (BOOL)wait;
- (BOOL)waitUntilDate:(id)a0;
- (id)initWithQueue:(id)a0 block:(id /* block */)a1;
- (void)runForCheckpoint:(void *)a0;
- (void)runSynchronousForCheckpoint:(void *)a0;

@end
