@class AMSMutablePromise;

@interface AMSBinaryPromise : NSObject

@property (retain, nonatomic) AMSBinaryPromise *retainedSelf;
@property (readonly, nonatomic) AMSMutablePromise *backingPromise;

+ (id)promiseWithError:(id)a0;
+ (id)promiseWithAny:(id)a0;
+ (id)promiseWithAll:(id)a0;
+ (id)promiseWithFlattenedPromises:(id)a0;
+ (id)promiseWithPromise:(id)a0;
+ (id)promiseWithSuccess;

- (id)init;
- (void).cxx_destruct;
- (void)waitUntilFinished;
- (BOOL)cancel;
- (BOOL)resultWithError:(id *)a0;
- (BOOL)finishWithError:(id)a0;
- (void)addFinishBlock:(id /* block */)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (id /* block */)completionHandlerAdapter;
- (BOOL)resultWithTimeout:(double)a0 error:(id *)a1;
- (id)continueWithBlock:(id /* block */)a0;
- (id)catchWithBlock:(id /* block */)a0;
- (void)addErrorBlock:(id /* block */)a0;
- (id)catchWithPromiseBlock:(id /* block */)a0 successValue:(id)a1;
- (id)continueWithPromiseBlock:(id /* block */)a0;
- (BOOL)finishWithPromise:(id)a0;
- (BOOL)finishWithSuccess;
- (BOOL)finishWithSuccess:(BOOL)a0 error:(id)a1;
- (id)initWithBackingPromise:(id)a0;
- (id)promiseAdapter;
- (void)resultWithCompletion:(id /* block */)a0;
- (void)resultWithTimeout:(double)a0 completion:(id /* block */)a1;
- (void)stopRetainingSelf;
- (id)thenWithBlock:(id /* block */)a0;
- (id)thenWithPromiseBlock:(id /* block */)a0;
- (void)waitUntilFinishedWithTimeout:(double)a0;

@end
