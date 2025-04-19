@class CUTResult, NSMutableArray, NSRecursiveLock;

@interface _CUTLockingPromise : CUTPromise

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) BOOL done;
@property (retain, nonatomic) CUTResult *result;
@property (retain, nonatomic) NSMutableArray *resultBlocks;

- (id)init;
- (void).cxx_destruct;
- (void)_fulfillWithResult:(id)a0;
- (void)registerResultBlock:(id /* block */)a0;

@end
