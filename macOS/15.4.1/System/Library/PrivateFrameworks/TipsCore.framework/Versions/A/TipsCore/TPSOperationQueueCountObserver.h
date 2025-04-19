@class TPSOperationQueue;

@interface TPSOperationQueueCountObserver : NSObject

@property (nonatomic) unsigned long long lastOperationCount;
@property (weak, nonatomic) TPSOperationQueue *operationQueue;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithQueue:(id)a0;

@end
