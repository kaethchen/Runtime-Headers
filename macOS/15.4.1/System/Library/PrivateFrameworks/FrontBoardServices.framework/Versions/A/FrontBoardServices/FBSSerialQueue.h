@class NSString;

@interface FBSSerialQueue : NSObject <BSServiceDispatchingQueue>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_queueWithSerialDispatchQueue:(id)a0;
+ (id)mainDispatchQueue;
+ (id)queueWithDispatchQueue:(id)a0;
+ (id)queueWithMainRunLoopModes:(id)a0;

- (id)init;
- (void)assertBarrierOnQueue;
- (void)assertOnQueue;
- (id)backingQueueIfExists;
- (void)performAfter:(double)a0 withBlock:(id /* block */)a1;
- (void)performAsync:(id /* block */)a0;
- (void)performAsync:(id /* block */)a0 withHandoff:(id)a1;

@end
