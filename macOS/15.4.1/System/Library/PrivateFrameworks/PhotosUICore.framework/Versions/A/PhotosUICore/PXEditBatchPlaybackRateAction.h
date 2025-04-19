@interface PXEditBatchPlaybackRateAction : PXEditBatchAction

@property (nonatomic) float playbackRate;

- (void)performAction:(id /* block */)a0;
- (id)localizedProgressToastUndoTitle;
- (id)localizedProgressToastRedoTitle;
- (id)_playbackRateTitle;
- (void)_syncSetPlaybackRateDidFinishWithResults:(id)a0 didCancel:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)localizedActionName;
- (id)localizedProgressToastOngoingTitle;
- (id)localizedProgressToastSuccessTitle;

@end
