@class BGSystemTaskScheduler;

@interface ULBGSystemTaskManager : NSObject

@property (retain, nonatomic) BGSystemTaskScheduler *scheduler;

- (id)init;
- (void).cxx_destruct;
- (void)deregisterAndCancelTaskWithIdentifier:(id)a0;
- (void)registerAndSubmitTaskWithRequest:(id)a0 usingQueue:(id)a1 launchHandler:(id /* block */)a2;

@end
