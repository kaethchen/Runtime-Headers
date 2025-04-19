@interface AMSMutableLazyPromise : AMSLazyPromise

- (BOOL)cancel;
- (id)initWithBlock:(id /* block */)a0;
- (BOOL)finishWithError:(id)a0;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (BOOL)finishWithResult:(id)a0;
- (id)initWithTimeout:(double)a0 block:(id /* block */)a1;
- (BOOL)finishWithPromise:(id)a0;

@end
