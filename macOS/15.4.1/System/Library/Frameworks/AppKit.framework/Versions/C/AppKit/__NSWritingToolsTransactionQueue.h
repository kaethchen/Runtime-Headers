@class NSOperationQueue, NSMutableArray, NSWritingToolsCoordinator;

@interface __NSWritingToolsTransactionQueue : NSObject {
    NSWritingToolsCoordinator *_coordinator;
}

@property (class, readonly) NSOperationQueue *queue;

@property (readonly) NSMutableArray *transactions;

- (void).cxx_destruct;
- (void)popTransaction;

@end
