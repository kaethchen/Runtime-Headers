@interface VRXTurnBasedInstrumentationEvent : VRXInstrumentationEvent

@property (readonly, nonatomic) BOOL requiresNewTurn;

- (void)emitWithTurnIdentifier:(id)a0;
- (void)emitWithTurnIdentifier:(id)a0 aceViewId:(id)a1;

@end
