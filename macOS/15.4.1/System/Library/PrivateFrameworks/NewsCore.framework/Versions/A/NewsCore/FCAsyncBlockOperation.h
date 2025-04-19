@interface FCAsyncBlockOperation : NSOperation {
    _Atomic BOOL _executing;
    _Atomic BOOL _finished;
}

@property (readonly, copy, nonatomic) id /* block */ block;

+ (id)asyncBlockOperationWithBlock:(id /* block */)a0;
+ (id)asyncBlockOperationWithMainThreadBlock:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (id)initWithBlock:(id /* block */)a0;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;

@end
