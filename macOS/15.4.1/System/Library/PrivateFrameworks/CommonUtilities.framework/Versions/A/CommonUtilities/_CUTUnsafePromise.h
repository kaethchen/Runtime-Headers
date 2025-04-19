@class NSMutableArray, CUTResult;

@interface _CUTUnsafePromise : CUTUnsafePromise

@property (nonatomic) BOOL done;
@property (retain, nonatomic) CUTResult *result;
@property (retain, nonatomic) NSMutableArray *resultBlocks;

- (id)init;
- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (void)_fulfillWithResult:(id)a0;
- (void)registerResultBlock:(id /* block */)a0;

@end
