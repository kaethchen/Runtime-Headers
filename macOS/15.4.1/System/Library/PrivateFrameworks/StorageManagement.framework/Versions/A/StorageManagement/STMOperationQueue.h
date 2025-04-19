@interface STMOperationQueue : NSOperationQueue

+ (id)concurrentBackgroundQueue;
+ (id)serialBackgroundQueue;

- (void)addOperation:(id)a0;
- (void)addOperations:(id)a0;

@end
