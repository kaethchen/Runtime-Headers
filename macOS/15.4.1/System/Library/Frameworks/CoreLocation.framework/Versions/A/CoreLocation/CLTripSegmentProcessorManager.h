@class NSObject;
@protocol OS_dispatch_queue;

@interface CLTripSegmentProcessorManager : NSObject {
    NSObject<OS_dispatch_queue> *fQueue;
}

- (void)dealloc;
- (id)init;
- (void)clearMapHelperMemoryAndExitCleanly;
- (id)errorObject:(long long)a0 description:(id)a1;
- (void)processTripSegmentData:(id)a0 outputHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)processTripSegmentData:(id)a0 withOptions:(id)a1 outputHandler:(id /* block */)a2;
- (void)processTripSegmentData:(id)a0 withOptions:(id)a1 outputHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;

@end
