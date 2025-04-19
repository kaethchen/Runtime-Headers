@interface SnippetUI.RFSnippetRenderingContext : VRXTurnBasedInstrumentationEvent {
    void /* unknown type, empty encoding */ event;
    void /* unknown type, empty encoding */ instrumentationClient;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithEvent:(long long)a0;
- (void)emitWithTurnIdentifier:(id)a0;
- (void)emitWithTurnIdentifier:(id)a0 aceViewId:(id)a1;

@end
