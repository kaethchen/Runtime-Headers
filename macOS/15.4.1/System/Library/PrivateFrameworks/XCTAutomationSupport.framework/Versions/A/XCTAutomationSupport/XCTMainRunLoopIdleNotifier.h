@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface XCTMainRunLoopIdleNotifier : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSMutableArray *idleHandlers;
@property struct __CFRunLoopObserver { } *runLoopObserver;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)notifyWhenIdle:(id /* block */)a0;
- (void)_queue_setUpRunLoopObserver;
- (void)handleIdleObserved;

@end
