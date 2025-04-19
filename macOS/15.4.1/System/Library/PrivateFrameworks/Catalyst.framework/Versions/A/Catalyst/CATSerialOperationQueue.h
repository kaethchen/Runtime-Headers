@class NSOperation;

@interface CATSerialOperationQueue : CATOperationQueue {
    NSOperation *mLastOperation;
}

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)addOperation:(id)a0;

@end
