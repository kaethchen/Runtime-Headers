@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IMDispatchQueue : NSObject {
    unsigned long long _fifo;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lockQueue;
@property (retain, nonatomic) struct __CFBinaryHeap { } *heap;
@property (retain, nonatomic) NSMutableDictionary *dispatchQueueBlocks;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (nonatomic, getter=isSuspended) BOOL suspended;

+ (id)serialQueueWithDispatchPriority:(long long)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addBlock:(id /* block */)a0;
- (BOOL)containsOutstandingBlockForKey:(id)a0;
- (id)_initWithDispatchAttr:(id)a0 dispatchPriority:(long long)a1;
- (void)addBlock:(id /* block */)a0 withQueuePriority:(long long)a1;
- (void)addBlock:(id /* block */)a0 withQueuePriority:(long long)a1 forKey:(id)a2;
- (id)allKeysOfOutstandingBlocks;
- (long long)queuePriorityOfOutstandingBlockForKey:(id)a0;
- (void)removeAllOutstandingBlocks;
- (void)removeOutstandingBlockForKey:(id)a0;
- (void)setQueuePriority:(long long)a0 ofOutstandingBlockForKey:(id)a1;

@end
