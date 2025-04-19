@class NSLock, NSMutableArray;

@interface KHDBBlockQueue : KHDBDispatchQueue {
    NSLock *_addLock;
    NSLock *_waitLock;
    NSMutableArray *_blockedAdds;
}

- (void)dealloc;
- (id)init;
- (void)addBlock:(id /* block */)a0;
- (void)waitUntilAllBlocksAreFinished;
- (unsigned long long)blockedCount;
- (void)waitForOutstandingBlocks;
- (void)waitForOutstandingOperations;

@end
