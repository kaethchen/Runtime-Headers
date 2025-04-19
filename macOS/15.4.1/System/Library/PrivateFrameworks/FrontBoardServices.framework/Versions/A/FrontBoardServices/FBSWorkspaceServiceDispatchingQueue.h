@class NSString, FBSSerialQueue, NSObject;
@protocol OS_dispatch_queue;

@interface FBSWorkspaceServiceDispatchingQueue : NSObject <BSServiceDispatchingQueue> {
    NSObject<OS_dispatch_queue> *_targetQueue;
    FBSSerialQueue *_callOutQueue;
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
