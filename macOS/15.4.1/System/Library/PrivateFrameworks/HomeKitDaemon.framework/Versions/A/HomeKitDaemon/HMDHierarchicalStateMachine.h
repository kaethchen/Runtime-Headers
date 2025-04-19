@class CUStateMachine, HMDHierarchicalStateMachineState, NSString, NSObject, CUStateEvent;
@protocol OS_dispatch_queue;

@interface HMDHierarchicalStateMachine : HMFObject <HMFLogging>

@property (retain, nonatomic) CUStateMachine *cuStateMachine;
@property (readonly, nonatomic) BOOL allowSelfStateTransitions;
@property (readonly, nonatomic, getter=hasStarted) BOOL started;
@property (retain, nonatomic) CUStateEvent *eventCausingStateTransition;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak) HMDHierarchicalStateMachineState *currentHSMState;
@property (retain, nonatomic) HMDHierarchicalStateMachineState *initialState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)setStates:(id)a0;
- (id)stateWithName:(id)a0;
- (void)dispatchEvent:(id)a0;
- (void)dispatchEvent:(id)a0 userInfo:(id)a1;
- (void)setInitialState:(id)a0;
- (void)transitionToState:(id)a0;
- (void)transitionToState:(id)a0 withEvent:(id)a1;
- (id)initialState;
- (void)_start;
- (void)currentHSMStateWithCompletion:(id /* block */)a0;
- (void)dispatchEvent:(id)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (id)initWithQueue:(id)a0 allowSelfStateTransitions:(BOOL)a1;
- (void)setHSMInternalCurrentState:(id)a0;

@end
