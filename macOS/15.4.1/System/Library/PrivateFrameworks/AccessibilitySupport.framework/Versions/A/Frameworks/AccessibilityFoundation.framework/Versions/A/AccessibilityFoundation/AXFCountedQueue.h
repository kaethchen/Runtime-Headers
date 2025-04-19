@class AXFDispatchQueue, NSObject, NSString, AXFDispatchGroup, AXFDispatchSemaphore;
@protocol OS_dispatch_queue;

@interface AXFCountedQueue : NSObject <AXFDispatchQueue>

@property (readonly, nonatomic) AXFDispatchQueue *_workQueue;
@property (readonly, nonatomic) AXFDispatchQueue *_stagingQueue;
@property (readonly, nonatomic) AXFDispatchSemaphore *_semaphore;
@property (readonly, nonatomic) AXFDispatchGroup *_group;
@property (readonly) NSObject<OS_dispatch_queue> *underlyingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)wait;
- (BOOL)waitWithTimeout:(long long)a0;
- (void)executeAsynchronously:(unsigned long long)a0 block:(id /* block */)a1;
- (void)executeBlockAsynchronously:(id /* block */)a0;
- (void)executeBlockSynchronously:(id /* block */)a0;
- (void)executeSynchronously:(unsigned long long)a0 block:(id /* block */)a1;
- (void)executeWorkItemAsynchronously:(id)a0;
- (void)executeWorkItemSynchronously:(id)a0;
- (id)initWithCount:(long long)a0 label:(id)a1;
- (void)notifyWithQueue:(id)a0 block:(id /* block */)a1;
- (void)notifyWithQueue:(id)a0 workItem:(id)a1;

@end
