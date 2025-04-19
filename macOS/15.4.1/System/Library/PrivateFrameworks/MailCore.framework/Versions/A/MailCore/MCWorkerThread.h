@interface MCWorkerThread : NSObject

+ (void)initialize;
+ (void)addInvocationToQueue:(id)a0;
+ (void)runInvocationOnQueueSynchronously:(id)a0;
+ (void)test_cancelAllInvocations;
+ (void)test_waitUntilAllOperationsAreFinished;

@end
