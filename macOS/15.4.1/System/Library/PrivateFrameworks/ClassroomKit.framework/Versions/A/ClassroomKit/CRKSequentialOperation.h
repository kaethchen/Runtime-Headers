@class NSArray, CATOperation, CATOperationQueue;

@interface CRKSequentialOperation : CATOperation

@property (nonatomic) unsigned long long frontOfQueue;
@property (readonly, nonatomic) NSArray *operations;
@property (readonly, nonatomic) CATOperationQueue *queue;
@property (retain, nonatomic) CATOperation *failedOperation;

+ (id)sequentialOperationWithOperations:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)isAsynchronous;
- (void)main;
- (void)enqueueFront;
- (void)frontOperationDidFinish:(id)a0;
- (id)initWithSequentialOperations:(id)a0 queue:(id)a1;

@end
