@class PFDispatchQueueExtensionManager, PFSerialQueue, PFDispatchQueue;

@interface PFExtendedDispatchQueue : PFDispatchQueue <PFDispatchQueueRunBlock> {
    PFDispatchQueue *_queue;
    PFSerialQueue *_requestSerializer;
    PFDispatchQueueExtensionManager *_extensionManager;
    unsigned long long _suspendCount;
}

- (id)description;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)resume;
- (const char *)label;
- (void)setTargetQueue:(id)a0;
- (void)suspend;
- (unsigned int)qualityOfService;
- (id)initWithQueue:(id)a0;
- (BOOL)assertOnQueue;
- (void)dispatchAfter:(unsigned long long)a0 block:(id /* block */)a1;
- (void)addExtensions:(id)a0;
- (void)runBlock:(id /* block */)a0;
- (void)dispatchAsync:(id /* block */)a0;
- (void)dispatchSync:(id /* block */)a0;
- (id)_dispatchQueueForSetTargetQueue;
- (BOOL)onQueue;
- (void)suspendRequests;
- (id)_extensionManager;
- (id)_extensionsForTargetingQueue;
- (void)_invoke:(id /* block */)a0 extensionDataArray:(id)a1;
- (void)_performAsyncNotify:(id)a0 enqueueBlock:(id /* block */)a1;
- (BOOL)assertNotOnQueue;
- (BOOL)assertQueueBarrier;
- (void)disableExtension:(id)a0;
- (void)dispatchAfterDelay:(unsigned long long)a0 block:(id /* block */)a1;
- (void)dispatchAfterInterval:(double)a0 block:(id /* block */)a1;
- (void)dispatchAsyncWithQOS:(unsigned int)a0 block:(id /* block */)a1;
- (void)dispatchBarrierAsync:(id /* block */)a0;
- (void)dispatchBarrierAsyncWithQOS:(unsigned int)a0 block:(id /* block */)a1;
- (void)dispatchBarrierSync:(id /* block */)a0;
- (id)dispatchCancellable:(id /* block */)a0;
- (id)dispatchCancellableAfterDelay:(unsigned long long)a0 block:(id /* block */)a1;
- (id)dispatchCancellableAfterInterval:(double)a0 block:(id /* block */)a1;
- (id)dispatchCancellableGroup:(id)a0 notify:(id /* block */)a1;
- (void)dispatchGroup:(id)a0 async:(id /* block */)a1;
- (void)dispatchGroup:(id)a0 notify:(id /* block */)a1;
- (void)enableExtension:(id)a0;
- (id)extensionMatching:(id /* block */)a0;
- (void *)getSpecific:(void *)a0;
- (void)removeAllQueuedBlocks;
- (void)removeAllQueuedBlocksAndWait;
- (void)resumeRequests;
- (void)setSpecific:(void *)a0 forKey:(void *)a1;
- (id)wrappedQueue;

@end
