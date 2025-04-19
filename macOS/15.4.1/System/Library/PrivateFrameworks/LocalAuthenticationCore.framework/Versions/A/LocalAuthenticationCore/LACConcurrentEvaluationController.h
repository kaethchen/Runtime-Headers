@class NSObject;
@protocol OS_dispatch_queue, LACConcurrentEvaluationManaging, LACConcurrentEvaluationControlling;

@interface LACConcurrentEvaluationController : NSObject <LACConcurrentEvaluationControlling, LACEvaluationRequestProcessor> {
    id<LACConcurrentEvaluationManaging> _manager;
    id<LACConcurrentEvaluationControlling> _model;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

- (void).cxx_destruct;
- (id)manager;
- (id)model;
- (id)replyQueue;
- (BOOL)canProcessRequest:(id)a0;
- (id)initWithManager:(id)a0 replyQueue:(id)a1;
- (id)makeModel;
- (void)postProcessRequest:(id)a0 result:(id)a1 completion:(id /* block */)a2;
- (void)processRequest:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;

@end
