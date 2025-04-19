@interface SiriMessagesUI.OnSnippetInteractionPerformed : VRXTurnBasedInstrumentationEvent {
    void /* unknown type, empty encoding */ actionName;
    void /* unknown type, empty encoding */ interactionType;
    void /* unknown type, empty encoding */ componentName;
}

- (id)init;
- (void).cxx_destruct;
- (void)emitWithTurnIdentifier:(id)a0;
- (void)emitWithTurnIdentifier:(id)a0 aceViewId:(id)a1;

@end
