@class NSString;

@interface WFRunnerRunningState : WFRunnerState <WFState, WFTimedState>

@property (readonly, nonatomic) long long environment;
@property (readonly, nonatomic) BOOL isPersonalAutomation;
@property (copy, nonatomic) id /* block */ timeoutHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)stage;
- (void)cancel;
- (double)timeoutDuration;
- (BOOL)shouldStartTimer;
- (id)initWithEnvironment:(long long)a0 isPersonalAutomation:(BOOL)a1;

@end
