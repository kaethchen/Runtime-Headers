@class NSOperation, NSObject;
@protocol CoalesceableBookmarksOperation, BookmarksOperationCoalescingTimerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface BookmarksOperationCoalescingTimer : NSObject {
    NSObject<OS_dispatch_source> *_coalescingDispatchSource;
}

@property (readonly, nonatomic) NSOperation<CoalesceableBookmarksOperation> *currentOperation;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak) id<BookmarksOperationCoalescingTimerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)coalesceCurrentOperationWithOperation:(id)a0;
- (id)initWithOperation:(id)a0 queue:(id)a1;

@end
