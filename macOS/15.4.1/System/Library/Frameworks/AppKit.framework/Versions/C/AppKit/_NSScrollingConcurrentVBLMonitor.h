@class _NSScrollingConcurrentVBLPreprocessFilter, _NSScrollingConcurrentConstantData, _NSScrollingConcurrentSharedData, _NSScrollingConcurrentMainThreadSynchronizer, NSLock;
@protocol _NSScrollStateEventListener;

@interface _NSScrollingConcurrentVBLMonitor : NSObject {
    NSLock *_syncLock;
    BOOL *_isCancelledPtr;
    struct { unsigned char isCursorInTarget : 1; unsigned int reserved : 31; } _flags;
    struct work_interval_instance { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; struct work_interval_data { unsigned int x0; unsigned int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; } x7; } *_currentWorkIntervalInstance;
}

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cursorTargetFrame;
@property (nonatomic) id<_NSScrollStateEventListener> scrollStateDelegate;
@property (retain) _NSScrollingConcurrentSharedData *sharedData;
@property (retain) _NSScrollingConcurrentConstantData *constantData;
@property (retain) _NSScrollingConcurrentVBLPreprocessFilter *preprocessFilter;
@property (retain) _NSScrollingConcurrentMainThreadSynchronizer *mainThreadSynchronizer;

- (void)dealloc;
- (void)resume;
- (void)suspend;
- (void)remove;
- (void)_checkCursorTargeting;
- (void)_updateScrollAnimation;
- (id)initWithConstantData:(id)a0;

@end
