@interface PXEditBatchRevertAction : PXEditBatchAction

- (void)performAction:(id /* block */)a0;
- (id)localizedProgressToastUndoTitle;
- (id)localizedProgressToastRedoTitle;
- (id)localizedActionName;
- (id)localizedProgressToastOngoingTitle;
- (id)localizedProgressToastSuccessTitle;

@end
