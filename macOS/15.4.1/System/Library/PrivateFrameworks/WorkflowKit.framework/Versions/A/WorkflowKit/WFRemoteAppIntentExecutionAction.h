@interface WFRemoteAppIntentExecutionAction : WFAction

@property (nonatomic, readonly) BOOL approvedForPublicShortcutsDrawer;

- (id)init;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (id)outputVariableWithVariableProvider:(id)a0 UUIDProvider:(id)a1;
- (BOOL)isApprovedForPublicShortcutsDrawer;

@end
