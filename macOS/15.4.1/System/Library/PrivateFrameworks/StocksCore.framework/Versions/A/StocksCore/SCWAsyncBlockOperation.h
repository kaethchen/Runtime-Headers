@interface SCWAsyncBlockOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
}

@property (readonly, copy, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (void)start;
- (id)initWithBlock:(id /* block */)a0;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;

@end
