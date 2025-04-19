@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PXLIFOQueue : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableArray *_internalQueue_pendingBlocks;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;

- (void).cxx_destruct;
- (id)initWithTargetQueue:(id)a0;
- (void)dispatchAsync:(id /* block */)a0;
- (void)_executeNextPendingBlock;

@end
