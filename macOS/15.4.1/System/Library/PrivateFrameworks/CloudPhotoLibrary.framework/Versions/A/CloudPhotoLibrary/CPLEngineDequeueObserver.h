@interface CPLEngineDequeueObserver : NSObject

@property (readonly, copy, nonatomic) id /* block */ clientWillAcknowledgeBatchBlock;
@property (readonly, copy, nonatomic) id /* block */ clientDidAcknowledgeBatchBlock;
@property (readonly, copy, nonatomic) id /* block */ changePipeDidRemoveChanges;

- (void).cxx_destruct;
- (id)initWithClientDidAcknowledgeBatchBlock:(id /* block */)a0;
- (id)initWithClientWillAcknowledgeBatchBlock:(id /* block */)a0 clientDidAcknowledgeBatchBlock:(id /* block */)a1 changePipeDidRemoveChanges:(id /* block */)a2;
- (id)initWithDequeueSignalBlock:(id /* block */)a0;

@end
