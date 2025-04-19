@class NSMutableArray, PFSerialQueue;

@interface PFLimitedConcurrencyQueueClass : PFConcurrentQueueClass {
    NSMutableArray *_slotQueues;
    unsigned long long _concurrencyLimit;
    PFSerialQueue *_serializer;
    NSMutableArray *_availableSlots;
    BOOL _usesBarrierBlocks;
    unsigned long long _suspendCount;
}

- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)dispatchAfter:(unsigned long long)a0 block:(id /* block */)a1;
- (void)dispatchAsync:(id /* block */)a0;
- (void)dispatchSync:(id /* block */)a0;
- (void)_allocateAllSlotQueues;
- (id)_allocateOneSlotQueue;
- (id)_extensionsForTargetingQueue;
- (void)_setupConcurrencyLimit:(unsigned long long)a0;
- (id)checkoutAvailableSlot;
- (unsigned long long)concurrencyLimit;
- (void)dispatchAsyncWithQOS:(unsigned int)a0 block:(id /* block */)a1;
- (void)dispatchBarrierAsync:(id /* block */)a0;
- (void)dispatchBarrierAsyncWithQOS:(unsigned int)a0 block:(id /* block */)a1;
- (void)dispatchBarrierSync:(id /* block */)a0;
- (void)dispatchGroup:(id)a0 async:(id /* block */)a1;
- (void)dispatchGroup:(id)a0 notify:(id /* block */)a1;
- (void)dropOneSlotQueue;
- (void)enqueueDelayedDrop;
- (void)slotQueueMightBeUnused:(id)a0;

@end
