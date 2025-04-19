@class NSObject;
@protocol OS_dispatch_queue, LACConcurrentEvaluationManaging;

@interface LACConcurrentEvaluationManager : NSObject <LACConcurrentEvaluationManaging, LACConcurrentIdleUIHandling, LACConcurrentIdleUIXPCHandling> {
    id<LACConcurrentEvaluationManaging> _model;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

- (void).cxx_destruct;
- (id)model;
- (id)replyQueue;
- (void)addObserver:(id)a0 forRequest:(id)a1;
- (void)cancelRequestsForContextID:(id)a0;
- (void)connectIdleUI:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)connectionInvalidatedForIdentifier:(id)a0;
- (void)idleUIGotFocus:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (id)initWithReplyQueue:(id)a0;
- (id)makeModel;
- (void)registerRequest:(id)a0;
- (void)removeObserver:(id)a0 forRequest:(id)a1;
- (BOOL)restartRequestsForContextID:(id)a0;
- (void)stashRequest:(id)a0 acceptsIdleUI:(BOOL)a1;
- (void)unregisterRequest:(id)a0;

@end
