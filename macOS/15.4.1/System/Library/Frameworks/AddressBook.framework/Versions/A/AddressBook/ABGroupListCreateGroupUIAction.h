@interface ABGroupListCreateGroupUIAction : ABAbstractGroupListAction

- (id)entryForCreatingGroups;
- (void)performWithSender:(id)a0;
- (BOOL)requiresAuthorizationBeforeExecution;
- (BOOL)validateWithMenuItem:(id)a0;

@end
