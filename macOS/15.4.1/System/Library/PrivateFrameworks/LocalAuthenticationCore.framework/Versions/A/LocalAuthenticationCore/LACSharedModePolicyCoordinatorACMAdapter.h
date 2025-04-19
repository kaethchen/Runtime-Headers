@class NSString, LACSharedModePolicyCoordinatorACMStorageRequestFactory, NSObject;
@protocol OS_dispatch_queue, LACSharedModePolicyCoordinatorACMStorage;

@interface LACSharedModePolicyCoordinatorACMAdapter : NSObject <LACSharedModePolicyCoordinator> {
    NSObject<OS_dispatch_queue> *_replyQueue;
    id<LACSharedModePolicyCoordinatorACMStorage> _storage;
    LACSharedModePolicyCoordinatorACMStorageRequestFactory *_requestFactory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithReplyQueue:(id)a0 storageRequestFactory:(id)a1 storage:(id)a2;
- (void)updatePolicyEvaluationWithTraits:(long long)a0 completion:(id /* block */)a1;

@end
