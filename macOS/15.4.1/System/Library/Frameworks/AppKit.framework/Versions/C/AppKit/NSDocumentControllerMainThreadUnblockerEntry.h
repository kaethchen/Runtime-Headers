@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NSDocumentControllerMainThreadUnblockerEntry : NSObject {
    id /* block */ _unblocker;
    NSMutableArray *_pendingInterrupters;
    NSMutableArray *_pendingInterrupterCompletionBlocks;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _waitingForInterrupterCompletion;
}

@property BOOL suspended;

+ (id)entryWithUnblocker:(id /* block */)a0 queue:(id)a1;

- (void).cxx_destruct;
- (void)_invokeInterrupter:(id /* block */)a0;
- (void)enqueueBlockingInterrupter:(id /* block */)a0;
- (void)transferBlockingInterruptersToUnblocker:(id)a0;
- (void)whenPendingInterruptersHaveCompletedInvokeBlock:(id /* block */)a0;

@end
