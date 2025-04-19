@interface GKDelayOperation : NSOperation

@property (nonatomic) double delayInSec;
@property (copy, nonatomic) id /* block */ operation;

- (void).cxx_destruct;
- (void)main;
- (id)initWithDelay:(double)a0 andOperation:(id /* block */)a1;

@end
