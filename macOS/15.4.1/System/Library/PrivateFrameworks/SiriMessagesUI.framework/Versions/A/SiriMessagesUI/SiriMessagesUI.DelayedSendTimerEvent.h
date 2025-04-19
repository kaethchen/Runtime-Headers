@interface SiriMessagesUI.DelayedSendTimerEvent : VRXTurnBasedInstrumentationEvent {
    void /* unknown type, empty encoding */ actionType;
    void /* unknown type, empty encoding */ componentName;
}

@property (nonatomic, readonly) BOOL requiresNewTurn;

- (id)init;
- (void).cxx_destruct;
- (void)emitWithTurnIdentifier:(id)a0;
- (void)emitWithTurnIdentifier:(id)a0 aceViewId:(id)a1;

@end
