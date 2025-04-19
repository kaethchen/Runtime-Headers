@class SCWAsyncSerialQueue;

@interface SCWStartupQueue : NSObject

@property (retain, nonatomic) SCWAsyncSerialQueue *startupTaskQueue;
@property (nonatomic) long long startupTaskDepth;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } startupTaskDepthLock;

- (void).cxx_destruct;
- (void)enqueueStartupBlock:(id /* block */)a0;
- (void)executeAfterStartup:(id /* block */)a0;
- (id)initWithDeferredStartup:(BOOL)a0;

@end
