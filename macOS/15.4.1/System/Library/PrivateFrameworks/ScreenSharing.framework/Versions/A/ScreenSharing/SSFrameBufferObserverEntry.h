@class NSThread;
@protocol SSFrameBufferObserver;

@interface SSFrameBufferObserverEntry : NSObject {
    id<SSFrameBufferObserver> _observer;
    NSThread *_thread;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithObserver:(id)a0 withThread:(id)a1;

@end
