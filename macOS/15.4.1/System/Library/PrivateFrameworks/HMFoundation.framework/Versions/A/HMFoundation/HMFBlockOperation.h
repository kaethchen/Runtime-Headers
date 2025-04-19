@class NSArray;

@interface HMFBlockOperation : HMFOperation

@property (readonly, copy) NSArray *executionBlocks;

+ (id)blockOperationWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (void)addExecutionBlock:(id /* block */)a0;
- (void)main;
- (id)initWithTimeout:(double)a0;

@end
