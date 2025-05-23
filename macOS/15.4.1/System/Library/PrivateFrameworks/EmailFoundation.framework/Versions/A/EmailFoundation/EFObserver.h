@interface EFObserver : NSObject

+ (id)observerWithCompletionHandler:(id /* block */)a0;
+ (id)observerWithResultBlock:(id /* block */)a0;
+ (id)observerWithResultBlock:(id /* block */)a0 completionBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;

@end
