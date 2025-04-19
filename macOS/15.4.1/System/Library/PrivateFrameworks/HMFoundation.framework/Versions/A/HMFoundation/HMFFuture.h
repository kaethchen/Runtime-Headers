@interface HMFFuture : NSObject

@property (readonly) struct _HMFFutureBlockOutcome { long long x0; id x1; } outcomeIfSettled;
@property (readonly, getter=isPending) BOOL pending;

+ (id)all:(id)a0;
+ (id)any:(id)a0;
+ (id)futureWithError:(id)a0;
+ (id)allSettled:(id)a0;
+ (id)anySettled:(id)a0;
+ (id)futureForOperation:(id)a0;
+ (id)futureWithDelay:(double)a0;
+ (id)futureWithNoValue;
+ (id)futureWithPromise:(id *)a0;
+ (id)futureWithValue:(id)a0;
+ (id)inContext:(id)a0 perform:(id /* block */)a1;

- (id)description;
- (id)then:(id /* block */)a0;
- (id)timeout:(double)a0;
- (id)recover:(id /* block */)a0;
- (id)inContext:(id)a0 then:(id /* block */)a1;
- (id)then:(id /* block */)a0 orRecover:(id /* block */)a1;
- (id)finally:(id /* block */)a0;
- (void)getResultWithCompletion:(id /* block */)a0;
- (id)ignoreErrors;
- (id)ignoreOutcome;
- (id)ignoreResult;
- (id)inContext:(id)a0 finally:(id /* block */)a1;
- (id)inContext:(id)a0 recover:(id /* block */)a1;
- (id)inContext:(id)a0 then:(id /* block */)a1 orRecover:(id /* block */)a2;
- (BOOL)waitForResult:(id *)a0 orError:(id *)a1 withTimeout:(double)a2;

@end
