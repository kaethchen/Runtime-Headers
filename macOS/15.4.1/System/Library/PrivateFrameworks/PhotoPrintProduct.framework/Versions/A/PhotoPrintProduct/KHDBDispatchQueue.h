@class NSObject;
@protocol OS_dispatch_queue;

@interface KHDBDispatchQueue : NSObject {
    int _count;
}

@property (nonatomic) long long maxConcurrentOperationCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *runQueue;

- (void)dealloc;
- (id)init;
- (void)addOperation:(id)a0;
- (unsigned long long)count;
- (void)waitUntilAllOperationsAreFinished;
- (void)addBlock:(id /* block */)a0;

@end
