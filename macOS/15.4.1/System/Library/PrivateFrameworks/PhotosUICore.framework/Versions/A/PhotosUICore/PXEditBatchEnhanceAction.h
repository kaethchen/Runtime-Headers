@interface PXEditBatchEnhanceAction : PXEditBatchAction

@property (nonatomic) BOOL enabled;

- (void)performAction:(id /* block */)a0;
- (id)localizedProgressToastUndoTitle;
- (id)localizedProgressToastRedoTitle;
- (void)_syncEnhanceDidFinishWithResults:(id)a0 didCancel:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithPresetManager:(id)a0 syncProgress:(id)a1 asyncProgress:(id)a2 asyncLoadingStatusManager:(id)a3 forAssets:(id)a4;
- (id)localizedActionName;
- (id)localizedProgressToastOngoingTitle;
- (id)localizedProgressToastSuccessTitle;

@end
