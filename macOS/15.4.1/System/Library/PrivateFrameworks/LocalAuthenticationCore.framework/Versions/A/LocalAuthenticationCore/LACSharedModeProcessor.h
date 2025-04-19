@class NSString, NSObject;
@protocol LACSharedModePolicyTraitsManager, LACSharedModePolicyCoordinator, OS_dispatch_queue, LACSharedModeDataSource;

@interface LACSharedModeProcessor : NSObject <LACEvaluationRequestProcessor> {
    NSObject<OS_dispatch_queue> *_replyQueue;
    id<LACSharedModeDataSource> _dataSource;
    id<LACSharedModePolicyCoordinator> _policyCoordinator;
    id<LACSharedModePolicyTraitsManager> _policyTraitsManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_processRequest:(id)a0 completion:(id /* block */)a1;
- (BOOL)canProcessRequest:(id)a0;
- (id)initWithReplyQueue:(id)a0 dataSource:(id)a1 policyTraitsManager:(id)a2 policyCoordinator:(id)a3;
- (void)processRequest:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;

@end
