@class NSOperationQueue;

@interface RCAsyncSerialQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *serialOperationQueue;
@property (nonatomic) BOOL suspended;

- (id)init;
- (void).cxx_destruct;
- (id)initWithQualityOfService:(long long)a0;
- (void)enqueueOperation:(id)a0;
- (void)enqueueBlock:(id /* block */)a0;
- (void)cancelAllBlocks;
- (void)enqueueBlockForMainThread:(id /* block */)a0;
- (void)withQualityOfService:(long long)a0 enqueueBlockForMainThread:(id /* block */)a1;

@end
