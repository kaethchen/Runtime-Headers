@class NSObject;
@protocol OS_dispatch_queue;

@interface LACPreboardLauncher : NSObject {
    id /* block */ _launchCompletion;
    NSObject<OS_dispatch_queue> *_workQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)_finishLaunchingWithError:(id)a0;
- (void)launchPreboardWithCompletion:(id /* block */)a0;

@end
