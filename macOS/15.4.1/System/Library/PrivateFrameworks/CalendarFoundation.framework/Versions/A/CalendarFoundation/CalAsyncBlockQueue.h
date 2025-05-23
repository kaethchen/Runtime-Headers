@class NSMutableSet;
@protocol CalAsyncBlockPerformer;

@interface CalAsyncBlockQueue : NSObject

@property (readonly, nonatomic) id<CalAsyncBlockPerformer> blockPerformer;
@property (readonly, nonatomic) NSMutableSet *pendingBlocks;

- (void).cxx_destruct;
- (void)performAsync:(id /* block */)a0;
- (void)cancelAllPendingBlocks;
- (id)initWithBlockPerformer:(id)a0;
- (void)performAfterDelay:(double)a0 block:(id /* block */)a1;

@end
