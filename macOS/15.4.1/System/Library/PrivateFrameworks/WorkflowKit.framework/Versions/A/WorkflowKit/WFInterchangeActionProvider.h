@interface WFInterchangeActionProvider : WFActionProvider

- (id)actionWithInterchangeAction:(id)a0 serializedParameters:(id)a1;
- (id)availableActionIdentifiers;
- (void)createActionsForRequests:(id)a0 forceLocalActionsOnly:(BOOL)a1;

@end
