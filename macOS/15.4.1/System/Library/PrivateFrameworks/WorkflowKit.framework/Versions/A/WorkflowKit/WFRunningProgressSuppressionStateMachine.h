@interface WFRunningProgressSuppressionStateMachine : WFStateMachine {
    void /* unknown type, empty encoding */ initialDialogAttribution;
    void /* unknown type, empty encoding */ waitingCancellable;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)init;
- (void).cxx_destruct;
- (void)decideRunningProgressIsAllowed:(BOOL)a0 withReason:(id)a1;
- (void)startedRunningAction:(id)a0 inShortcut:(id)a1;
- (void)startedRunningShortcut:(id)a0 withDialogAttribution:(id)a1;

@end
