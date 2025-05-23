@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface _BSServiceDispatchingQueueImpl : NSObject <BSServiceDispatchingQueue> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)assertBarrierOnQueue;
- (id)backingQueueIfExists;
- (void)performAsync:(id /* block */)a0;
- (void)performAsync:(id /* block */)a0 withHandoff:(id)a1;

@end
