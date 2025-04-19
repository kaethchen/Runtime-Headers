@interface MONSOperationQueue : NSOperationQueue

- (void)cancelAllOperationsWithContext:(id)a0;
- (void)addOperation:(id)a0 context:(id)a1 identifier:(id)a2 queuePriority:(long long)a3;
- (void)cancelAllOperationsWithContext:(id)a0 andIdentifier:(id)a1;
- (void)cancelAllOperationsWithIdentifier:(id)a0;

@end
