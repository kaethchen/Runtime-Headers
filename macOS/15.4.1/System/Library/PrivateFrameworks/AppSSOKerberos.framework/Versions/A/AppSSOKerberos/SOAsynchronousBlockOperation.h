@interface SOAsynchronousBlockOperation : SOAsynchronousOperation

@property (copy) id /* block */ block;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (void)main;

@end
