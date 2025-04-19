@class NSOperationQueue;

@interface SCWAsyncSerialQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *serialOperationQueue;
@property (getter=isSuspended) BOOL suspended;

- (void).cxx_destruct;
- (void)waitUntilEmpty;
- (id)initWithQualityOfService:(long long)a0;
- (void)enqueueBlock:(id /* block */)a0;

@end
