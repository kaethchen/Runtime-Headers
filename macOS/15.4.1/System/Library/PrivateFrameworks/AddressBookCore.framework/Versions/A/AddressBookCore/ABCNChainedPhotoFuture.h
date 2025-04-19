@class ABCNChainedFutureQueue;

@interface ABCNChainedPhotoFuture : CNFuture {
    ABCNChainedFutureQueue *_futureQueue;
}

+ (id)chainedFutureWithFutures:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)start;
- (void)didCancel;
- (void)nextWithResult:(id)a0;
- (void)addCompletionBlocksToFuture:(id)a0;
- (void)addCompletionBlocksToSelf;
- (void)cancelCurrentAndRemainingFutures;
- (id)initWithFutures:(id)a0;
- (BOOL)resultDataIsEmpty:(id)a0;
- (void)runNextFuture;

@end
