@class TRITaskQueue, TRIXPCServerContextPromise, TRIXPCActivityManager, TRIServerContext, NSObject;
@protocol OS_dispatch_queue;

@interface TRIDServer : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    TRIServerContext *_context;
    TRITaskQueue *_taskQueue;
    TRIXPCServerContextPromise *_promise;
    TRIXPCActivityManager *_xpcActivityManager;
}

@property (readonly, nonatomic) BOOL isRunning;

+ (id)sharedServer;
+ (id)_triPath;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (id)initWithPath:(id)a0;
- (void)_asyncStartWithMetrics:(id)a0;
- (void)_dispatchWhenUnlocked:(id /* block */)a0;
- (void)_excludeUserLevelTrialFromTimeMachineBackups;
- (unsigned long long)_getDiskUsageInBytes;
- (void)_logMetrics:(id)a0;
- (void)_registerExternalParamChangeHandler;
- (void)_registerSetupAssistantFetchActivityOnce;
- (void)_registerXpcStreamEventHandler;

@end
