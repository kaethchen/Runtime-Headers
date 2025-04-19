@interface SnippetUI.UEIKeyboardInvocationEvent : VRXTurnBasedInstrumentationEvent {
    void /* unknown type, empty encoding */ instrumentationClient;
}

@property (nonatomic, readonly) BOOL requiresNewTurn;

- (id)init;
- (void).cxx_destruct;
- (void)emitWithTurnIdentifier:(id)a0;
- (void)emitWithTurnIdentifier:(id)a0 aceViewId:(id)a1;

@end
