@interface PXNoOpAction : PXAction

- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;

@end
