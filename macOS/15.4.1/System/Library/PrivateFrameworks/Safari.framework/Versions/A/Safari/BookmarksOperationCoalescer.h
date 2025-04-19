@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, BookmarksOperationCoalescerDelegate;

@interface BookmarksOperationCoalescer : NSObject <BookmarksOperationCoalescingTimerDelegate> {
    NSMutableArray *_timers;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (weak) id<BookmarksOperationCoalescerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
