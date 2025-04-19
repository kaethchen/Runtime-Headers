@class NSString;

@interface _TtCC11WorkflowKit38RunningProgressSuppressionStateMachineP33_D75DF74A866BF93BDD94A2803CD087FC5State : NSObject <WFState, WFTimedState> {
    void /* unknown type, empty encoding */ stage;
    void /* unknown type, empty encoding */ timeout;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (double)timeoutDuration;
- (BOOL)canTransitionToState:(id)a0;
- (BOOL)shouldStartTimer;

@end
