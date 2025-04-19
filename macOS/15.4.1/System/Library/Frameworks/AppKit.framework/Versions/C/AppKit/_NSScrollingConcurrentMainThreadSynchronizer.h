@class NSScrollingBehaviorConcurrentVBL, _NSScrollingConcurrentConstantData, _NSScrollingConcurrentSharedData, NSObject;
@protocol OS_dispatch_source;

@interface _NSScrollingConcurrentMainThreadSynchronizer : NSObject {
    NSObject<OS_dispatch_source> *_dispatchSource;
    _NSScrollingConcurrentSharedData *_sharedData;
    _NSScrollingConcurrentConstantData *_constantData;
    NSScrollingBehaviorConcurrentVBL *_scrollingBehavior;
    id /* block */ _preCommitHandler;
    id /* block */ _completionHandler;
    BOOL _isSuspended;
    struct { unsigned char isSynchronizing : 1; unsigned char unexpectedScrollDetected : 1; unsigned int reserved : 30; } _flags;
    struct CGPoint { double x; double y; } _lastSetOrigin;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (void)signal:(unsigned long long)a0;
- (void)suspend;
- (BOOL)_doIdlePrefetch;
- (void)_scrollToCanonicalOrigin;
- (void)_synchronize:(unsigned long long)a0 preCommitHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)_updateSharedData;
- (id)initWithSharedData:(id)a0 constantData:(id)a1 scrollingBehavior:(id)a2;
- (void)scrollView:(id)a0 boundsChangedForClipView:(id)a1;
- (void)signal:(unsigned long long)a0 preCommitHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
