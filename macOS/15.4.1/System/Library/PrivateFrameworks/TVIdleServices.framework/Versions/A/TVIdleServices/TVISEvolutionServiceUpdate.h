@class NSProgress, NSMutableArray;

@interface TVISEvolutionServiceUpdate : TVISProgressTracking

@property (readonly, nonatomic) NSProgress *beginExecutionProgress;
@property (readonly, nonatomic) NSProgress *endExecutionProgress;
@property (readonly, nonatomic) unsigned long long traits;
@property (readonly, copy, nonatomic) NSMutableArray *barrierTasks;
@property (readonly, nonatomic) unsigned long long context;
@property (readonly, nonatomic) BOOL canAccessNetworkQueue;

+ (id)_lock;

- (id)description;
- (void).cxx_destruct;
- (id)initWithContext:(unsigned long long)a0;
- (void)cancel;
- (void)addTraits:(unsigned long long)a0;
- (void)addBarrierTask:(id /* block */)a0;
- (void)beginExecution;
- (void)endExecution;
- (void)tryAcquiringExecutionLockWithCompletion:(id /* block */)a0;

@end
