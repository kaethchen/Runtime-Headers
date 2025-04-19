@interface CNObserver : NSObject

+ (id)blockObserverOfClass:(Class)a0 withResultBlock:(id /* block */)a1 completionBlock:(id /* block */)a2 failureBlock:(id /* block */)a3;
+ (id)observerWithCompletionHandler:(id /* block */)a0;
+ (id)observerWithResultBlock:(id /* block */)a0;
+ (id)observerWithResultBlock:(id /* block */)a0 completionBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
+ (id)observerWithWeakTarget:(id)a0 resultSelector:(SEL)a1;
+ (void)sendArray:(id)a0 error:(id)a1 toObserver:(id)a2;
+ (void)sendArray:(id)a0 error:(id)a1 toObserver:(id)a2 untilCanceled:(id)a3;
+ (void)sendObserver:(id)a0 resultsOfBlock:(id /* block */)a1;
+ (void)sendResult:(id)a0 error:(id)a1 toObserver:(id)a2;

@end
