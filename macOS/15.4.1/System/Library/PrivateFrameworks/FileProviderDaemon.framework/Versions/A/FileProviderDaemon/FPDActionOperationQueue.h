@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface FPDActionOperationQueue : NSObject <FPCancellable> {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _maxLength;
    NSMutableArray *_fifo;
    NSObject<OS_dispatch_semaphore> *_enqueueSema;
    NSObject<OS_dispatch_semaphore> *_dequeueSema;
    BOOL _finishedEnqueuing;
    BOOL _cancelled;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)enqueue:(id)a0;
- (id)dequeue;
- (void)dumpStateTo:(id)a0;
- (void)finishedEnqueuing;
- (id)initWithMoveInfo:(id)a0;

@end
