@class CUTPromise;

@interface CUTPromiseSeal : NSObject

@property (retain, nonatomic) CUTPromise *promise;

- (void).cxx_destruct;
- (void)failWithError:(id)a0;
- (id)initWithQueue:(id)a0;
- (void)fulfillWithValue:(id)a0;

@end
