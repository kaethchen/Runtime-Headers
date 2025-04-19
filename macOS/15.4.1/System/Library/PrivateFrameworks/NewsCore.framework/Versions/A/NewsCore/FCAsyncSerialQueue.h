@class NSOperationQueue;

@interface FCAsyncSerialQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *serialOperationQueue;
@property (nonatomic) BOOL suspended;
@property (readonly, nonatomic) NSOperationQueue *underlyingOperationQueue;

- (id)init;
- (void).cxx_destruct;
- (id)initWithQualityOfService:(long long)a0;
- (void)enqueueOperation:(id)a0;
- (void)enqueueBlock:(id /* block */)a0;
- (void)cancelAllBlocks;
- (void)enqueueBlockForMainThread:(id /* block */)a0;
- (void)withQualityOfService:(long long)a0 enqueueBlockForMainThread:(id /* block */)a1;
- (id)initWithUnderlyingQueue:(id)a0 qualityOfService:(long long)a1;
- (void)withQualityOfService:(long long)a0 enqueueBlock:(id /* block */)a1;

@end
