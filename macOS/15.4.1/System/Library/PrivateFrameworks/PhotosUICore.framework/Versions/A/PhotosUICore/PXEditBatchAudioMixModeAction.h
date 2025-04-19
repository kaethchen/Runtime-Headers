@class NSString;

@interface PXEditBatchAudioMixModeAction : PXEditBatchAction {
    NSString *_audioMixModeTitle;
}

@property (retain, nonatomic) NSString *audioMixMode;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)localizedProgressToastUndoTitle;
- (id)localizedProgressToastRedoTitle;
- (void)_syncSetAudioMixModeDidFinishWithResults:(id)a0 didCancel:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)audioMixModeTitle;
- (id)localizedActionName;
- (id)localizedProgressToastOngoingTitle;
- (id)localizedProgressToastSuccessTitle;

@end
