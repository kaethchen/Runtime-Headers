@class NSString, LACSharedModeDataSourceTaskDecoratorRuntime, NSObject;
@protocol OS_dispatch_queue;

@interface LACSharedModeService : NSObject <LACSharedModeService> {
    NSObject<OS_dispatch_queue> *_replyQueue;
    LACSharedModeDataSourceTaskDecoratorRuntime *_runtime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_dataSource;
- (id)processor;
- (id)_policyCoordinator;
- (id)_policyTraitsManager;
- (id)initWithReplyQueue:(id)a0;

@end
