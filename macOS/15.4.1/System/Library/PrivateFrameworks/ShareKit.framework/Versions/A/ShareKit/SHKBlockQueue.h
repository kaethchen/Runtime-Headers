@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SHKBlockQueue : NSObject {
    NSMutableArray *_blockUUIDTuples;
    NSObject<OS_dispatch_queue> *_queue;
}

@property unsigned long long maxSize;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)size;
- (id)initWithQueue:(id)a0;
- (void)addBlock:(id /* block */)a0;
- (id)initWithMaxSize:(unsigned long long)a0;
- (void)addBlock:(id /* block */)a0 uuid:(id)a1;
- (id)initWithMaxSize:(unsigned long long)a0 queue:(id)a1;
- (void)removeAndExecuteBlock;
- (void)removeAndExecuteBlockWithCompletionBlock:(id /* block */)a0;
- (void)removeAndExecuteBlockWithUUID:(id)a0 completionBlock:(id /* block */)a1;
- (void)removeAndExecuteBlockWithUUID:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completionBlock:(id /* block */)a2;
- (id /* block */)removeBlock;
- (id /* block */)removeBlockWithUUID:(id)a0;

@end
