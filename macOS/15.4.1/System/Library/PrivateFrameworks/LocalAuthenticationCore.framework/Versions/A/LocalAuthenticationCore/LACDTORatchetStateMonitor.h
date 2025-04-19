@class NSString, LACDTORatchetState, LACTimer, NSObject;
@protocol LACDTORatchetStateProvider, OS_dispatch_queue, LACDTOEventBus;

@interface LACDTORatchetStateMonitor : NSObject <LACDTORatchetStateProvider, LACDTOEventProducer, LACDTOEventHandler, LACDTOPolicyEvaluationControllerObserver> {
    id<LACDTORatchetStateProvider> _ratchetStateProvider;
    LACTimer *_timer;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly, nonatomic) LACDTORatchetState *ratchetState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<LACDTOEventBus> eventBus;

- (void).cxx_destruct;
- (void)_scheduleNextStatusCheck;
- (void)handleEvent:(id)a0 sender:(id)a1;
- (id)initWithRatchetStateProvider:(id)a0 workQueue:(id)a1;
- (void)policyController:(id)a0 didFinishPolicyEvaluation:(id)a1 result:(id)a2;
- (void)policyController:(id)a0 willStartPolicyEvaluation:(id)a1;
- (void)ratchetStateCompositeWithCompletion:(id /* block */)a0;
- (void)ratchetStateWithCompletion:(id /* block */)a0;
- (void)setRatchetState:(id)a0;

@end
