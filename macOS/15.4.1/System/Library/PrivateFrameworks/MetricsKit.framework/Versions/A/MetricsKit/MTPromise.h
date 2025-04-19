@class NSConditionLock, MTPromiseCompletionBlocks, MTPromiseResult;

@interface MTPromise : NSObject

@property (retain) MTPromiseCompletionBlocks *completionBlocks;
@property (retain) MTPromiseResult *promiseResult;
@property (retain) NSConditionLock *stateLock;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly, getter=isFinished) BOOL finished;

+ (id)promiseWithError:(id)a0;
+ (id)promiseWithResult:(id)a0;
+ (id)promiseWithAny:(id)a0;
+ (id)promiseWithAll:(id)a0;
+ (BOOL)_errorIsCanceledError:(id)a0;
+ (void)_configureAllPromise:(id)a0 withResults:(id)a1 promises:(id)a2 currentPromiseIndex:(unsigned long long)a3;
+ (void)_configureAnyPromise:(id)a0 withPromises:(id)a1 currentPromiseIndex:(unsigned long long)a2;
+ (id)_findUnfinishedPromise:(id)a0;
+ (void)_finishPromise:(id)a0 withPromise:(id)a1;
+ (id)_globalPromiseStorage;
+ (id)_globalPromiseStorageAccessQueue;
+ (id)_resultOfComposition:(id)a0 errors:(id)a1;
+ (void)_setupCompositePromise:(id)a0 composition:(id)a1;
+ (void)cancelPromisesInComposition:(id)a0;
+ (id)promiseWithComposition:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)waitUntilFinished;
- (BOOL)cancel;
- (id)resultWithError:(id *)a0;
- (BOOL)finishWithError:(id)a0;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (void)addFinishBlock:(id /* block */)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (id /* block */)completionHandlerAdapter;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (BOOL)finishWithResult:(id)a0;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (id)resultWithTimeout:(double)a0 error:(id *)a1;
- (BOOL)_isFinished;
- (id)catchWithBlock:(id /* block */)a0;
- (void)addErrorBlock:(id /* block */)a0;
- (id /* block */)boolCompletionHandlerAdapter;
- (id /* block */)nilValueCompletionHandlerAdapter;
- (id)thenWithBlock:(id /* block */)a0;
- (void)waitUntilFinishedWithTimeout:(double)a0;
- (void)_addBlock:(id /* block */)a0 orCallWithResult:(id /* block */)a1;

@end
