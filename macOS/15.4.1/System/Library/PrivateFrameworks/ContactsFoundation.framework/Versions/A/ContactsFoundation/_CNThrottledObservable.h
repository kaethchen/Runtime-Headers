@class CNObservable;
@protocol NSLocking, CNCancelable, CNScheduler;

@interface _CNThrottledObservable : CNObservable

@property (readonly) CNObservable *observable;
@property (readonly) double interval;
@property (readonly) unsigned long long options;
@property (readonly) id<CNScheduler> observerScheduler;
@property (readonly) id<NSLocking> resourceLock;
@property (retain) id mostRecentResult;
@property (retain) id<CNCancelable> delayToken;
@property BOOL isCoalescing;

- (void)dealloc;
- (void).cxx_destruct;
- (id)subscribe:(id)a0;
- (id)initWithInterval:(double)a0 options:(unsigned long long)a1 observable:(id)a2 schedulerProvider:(id)a3;
- (void)observerScheduler_sendResultToObserver:(id)a0;

@end
