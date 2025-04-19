@interface PXDeleteAssetsAction : PXDestructiveAssetsAction

- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)actionNameLocalizationKey;

@end
