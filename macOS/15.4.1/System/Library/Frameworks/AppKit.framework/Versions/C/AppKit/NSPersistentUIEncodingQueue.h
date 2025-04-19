@class NSOperationQueue;

@interface NSPersistentUIEncodingQueue : NSObject

@property (readonly) NSOperationQueue *operationQueue;

- (id)init;
- (void).cxx_destruct;
- (void)finishEnqueuedImmediatelyWithCompletionHandler:(id /* block */)a0;
- (void)finishEnqueuedWithCompletionHandler:(id /* block */)a0;

@end
