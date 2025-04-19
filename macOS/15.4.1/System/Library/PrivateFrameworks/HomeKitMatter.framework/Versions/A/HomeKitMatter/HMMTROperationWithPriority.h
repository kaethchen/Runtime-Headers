@interface HMMTROperationWithPriority : NSOperation

@property (readonly, nonatomic) id /* block */ operationBlock;

- (void).cxx_destruct;
- (void)main;
- (id)initWithQueuePriority:(long long)a0 block:(id /* block */)a1;

@end
