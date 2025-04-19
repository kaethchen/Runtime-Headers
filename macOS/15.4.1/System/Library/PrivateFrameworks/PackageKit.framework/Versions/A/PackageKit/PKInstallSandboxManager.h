@class NSObject;
@protocol OS_dispatch_queue;

@interface PKInstallSandboxManager : NSObject {
    NSObject<OS_dispatch_queue> *_repoQueue;
    NSObject<OS_dispatch_queue> *_sandboxRemoveQueue;
}

- (void)dealloc;
- (id)init;

@end
