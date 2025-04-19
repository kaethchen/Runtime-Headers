@class HKSPStateMachineState, NSArray, NSString, HKSPStateMachineContext;
@protocol HKSPStateMachineInfoProvider, NAScheduler, HKSPStateMachineDelegate;

@interface HKSPStateMachine : NSObject <HKSPStateMachineDelegate, HKSPStateMachineInfoProvider, HKSPStateMachineEventHandler>

@property (readonly, nonatomic) BOOL initialized;
@property (readonly, nonatomic) NSArray *allStates;
@property (readonly, weak, nonatomic) id<HKSPStateMachineDelegate> delegate;
@property (readonly, weak, nonatomic) id<HKSPStateMachineInfoProvider> infoProvider;
@property (readonly, nonatomic) HKSPStateMachineState *currentState;
@property (readonly, nonatomic) NSString *currentStateIdentifier;
@property (readonly, nonatomic) HKSPStateMachineContext *currentContext;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_contextKey;

- (void).cxx_destruct;
- (void)updateState;
- (void)setInitialState:(id)a0;
- (unsigned long long)loggingCategory;
- (void)enterState:(id)a0;
- (id)initWithDelegate:(id)a0 infoProvider:(id)a1;
- (id)stateMachineName;
- (void)notifyDelegateWithBlock:(id /* block */)a0;
- (void)perform:(id /* block */)a0 withContext:(id)a1;

@end
