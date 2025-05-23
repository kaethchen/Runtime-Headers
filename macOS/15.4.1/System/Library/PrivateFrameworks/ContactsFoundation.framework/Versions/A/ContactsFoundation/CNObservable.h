@class NSString, NSObject;
@protocol OS_os_log;

@interface CNObservable : NSObject <CNObservable> {
    NSString *_pipelineDescription;
}

@property (class, readonly) NSObject<OS_os_log> *os_log;
@property (class, readonly) NSObject<OS_os_log> *os_log_protocol;

@property (readonly, nonatomic) NSString *debugPipelineDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)merge:(id)a0;
+ (id)timerWithDelay:(double)a0;
+ (id)emptyObservable;
+ (id)neverObservable;
+ (id)amb:(id)a0;
+ (id)asyncScannerResultsInString:(id)a0;
+ (id)binderTypeForResultType:(unsigned long long)a0;
+ (id)combineLatest:(id)a0;
+ (id)combineLatest:(id)a0 resultScheduler:(id)a1 schedulerProvider:(id)a2;
+ (id)combineLatest:(id)a0 schedulerProvider:(id)a1;
+ (id)concatenate:(id)a0;
+ (id)forkJoin:(id)a0 scheduler:(id)a1;
+ (id)merge:(id)a0 schedulerProvider:(id)a1;
+ (id)observableForKeyPath:(id)a0 ofObject:(id)a1 withOptions:(unsigned long long)a2;
+ (id)observableOnDarwinNotificationCenterWithName:(id)a0;
+ (id)observableOnDefaultNotificationCenterWithName:(id)a0 object:(id)a1;
+ (id)observableOnNotificationCenter:(id)a0 withName:(id)a1 object:(id)a2;
+ (id)observableWithAbsoluteTimestamps:(id)a0 schedulerProvider:(id)a1;
+ (id)observableWithBlock:(id /* block */)a0;
+ (id)observableWithEmailAddressesInString:(id)a0;
+ (id)observableWithError:(id)a0;
+ (id)observableWithFuture:(id)a0;
+ (id)observableWithFuture:(id)a0 schedulerProvider:(id)a1;
+ (id)observableWithFutures:(id)a0;
+ (id)observableWithFutures:(id)a0 schedulerProvider:(id)a1;
+ (id)observableWithInitialState:(id)a0 condition:(id /* block */)a1 nextState:(id /* block */)a2 resultSelector:(id /* block */)a3;
+ (id)observableWithInitialState:(id)a0 condition:(id /* block */)a1 nextState:(id /* block */)a2 resultSelector:(id /* block */)a3 delay:(id /* block */)a4 scheduler:(id)a5;
+ (id)observableWithInitialState:(id)a0 condition:(id /* block */)a1 nextState:(id /* block */)a2 resultSelector:(id /* block */)a3 scheduler:(id)a4;
+ (id)observableWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)observableWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 interval:(double)a1 scheduler:(id)a2;
+ (id)observableWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 scheduler:(id)a1;
+ (id)observableWithRelativeTimestamps:(id)a0 schedulerProvider:(id)a1;
+ (id)observableWithResult:(id)a0;
+ (id)observableWithResults:(id)a0;
+ (id)observableWithResults:(id)a0 interval:(double)a1 scheduler:(id)a2;
+ (id)observableWithResults:(id)a0 scheduler:(id)a1;
+ (id)observableWithScannerResultsInString:(id)a0;
+ (id)observableWithScannerResultsOfType:(unsigned long long)a0 inString:(id)a1;
+ (id)observableWithTimeInterval:(double)a0 scheduler:(id)a1;
+ (id)progressiveForkJoin:(id)a0 scheduler:(id)a1;
+ (id)scannerResultsInString:(id)a0;
+ (void)sendNextTimestampFromQueue:(id)a0 toObserver:(id)a1 untilCanceled:(id)a2 scheduler:(id)a3;
+ (id)timerWithDelay:(double)a0 scheduler:(id)a1;

- (void).cxx_destruct;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)timeInterval;
- (id)publish;
- (id)filter:(id /* block */)a0;
- (id)skip:(unsigned long long)a0;
- (id)subscribe:(id)a0;
- (id)buffer:(unsigned long long)a0;
- (id)doOnCompletion:(id /* block */)a0;
- (id)sample:(double)a0;
- (id)toArray;
- (id)onErrorHandler:(id /* block */)a0;
- (id)allObjects:(id *)a0;
- (id)ambWith:(id)a0;
- (id)any:(id /* block */)a0;
- (id)buffer:(unsigned long long)a0 interval:(double)a1;
- (id)buffer:(unsigned long long)a0 interval:(double)a1 scheduler:(id)a2;
- (id)bufferWithInterval:(double)a0;
- (id)bufferWithInterval:(double)a0 scheduler:(id)a1;
- (id)concatMap:(id /* block */)a0;
- (id)concatMap:(id /* block */)a0 schedulerProvider:(id)a1;
- (id)delay:(double)a0 scheduler:(id)a1;
- (id)delaySubscription:(double)a0 scheduler:(id)a1;
- (id)dematerialize;
- (id)distinct;
- (id)distinctUntilChanged;
- (id)doOnCancel:(id /* block */)a0;
- (id)doOnError:(id /* block */)a0;
- (id)doOnNext:(id /* block */)a0;
- (id)doOnSubscribe:(id /* block */)a0;
- (id)doOnTerminate:(id /* block */)a0;
- (id)flatMap:(id /* block */)a0;
- (id)flatMap:(id /* block */)a0 schedulerProvider:(id)a1;
- (id)ignoreElements;
- (id)map:(id /* block */)a0;
- (id)materialize;
- (id)observeOn:(id)a0;
- (id)onEmpty:(id)a0;
- (id)onError:(id)a0;
- (id)pipelineDescription:(id /* block */)a0;
- (id)pipelineDescriptionWithOperation:(id /* block */)a0 onObservable:(id)a1;
- (id)sample:(double)a0 scheduler:(id)a1;
- (id)sampleWithObservable:(id)a0;
- (id)scan:(id /* block */)a0;
- (id)scan:(id /* block */)a0 seed:(id)a1;
- (id)skipLast:(unsigned long long)a0;
- (id)skipUntil:(id)a0;
- (id)startWith:(id)a0;
- (id)startWith:(id)a0 scheduler:(id)a1;
- (id)subscribeOn:(id)a0;
- (id)switch;
- (id)switchMap:(id /* block */)a0;
- (id)switchMap:(id /* block */)a0 schedulerProvider:(id)a1;
- (id)switchWithSchedulerProvider:(id)a0;
- (id)take:(unsigned long long)a0;
- (id)takeLast:(unsigned long long)a0;
- (id)takeUntil:(id)a0;
- (id)throttle:(double)a0 options:(unsigned long long)a1 schedulerProvider:(id)a2;
- (id)throttle:(double)a0 schedulerProvider:(id)a1;
- (id)throttleFirst:(double)a0 scheduler:(id)a1;
- (id)throttleFirstAndLast:(double)a0 schedulerProvider:(id)a1;
- (id)timeIntervalWithScheduler:(id)a0;
- (id)timeoutAfterDelay:(double)a0 alternateObservable:(id)a1 schedule:(id)a2;
- (id)timestampWithScheduler:(id)a0;
- (id)using:(id /* block */)a0;

@end
