@class NSObject;
@protocol OS_dispatch_queue;

@interface FBSDispatchSerialQueue : FBSSerialQueue {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _main;
}

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)assertBarrierOnQueue;
- (id)backingQueueIfExists;
- (void)performAfter:(double)a0 withBlock:(id /* block */)a1;
- (void)performAsync:(id /* block */)a0;
- (void)performAsync:(id /* block */)a0 withHandoff:(id)a1;

@end
