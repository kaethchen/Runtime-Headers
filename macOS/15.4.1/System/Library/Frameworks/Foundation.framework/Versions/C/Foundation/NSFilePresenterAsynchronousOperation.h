@interface NSFilePresenterAsynchronousOperation : NSOperation {
    id /* block */ _block;
    BOOL _isFinished;
    BOOL _isExecuting;
}

+ (id)operationWithBlock:(id /* block */)a0;

- (void)finish;
- (void)start;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;

@end
