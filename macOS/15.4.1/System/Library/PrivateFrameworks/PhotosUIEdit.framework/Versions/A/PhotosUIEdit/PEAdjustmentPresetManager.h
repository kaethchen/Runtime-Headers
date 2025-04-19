@class NSString, PEEditActionBatch, PEEditActionEventBuilder, NSObject, PEPasteablePreset, NSPasteboard, PEResourceManager;
@protocol OS_dispatch_queue, PELoadingStatusDelegate;

@interface PEAdjustmentPresetManager : NSObject <PEEditActionBatchDelegate, PEEditActionAnalyticsEventBuilderDelegate>

@property (class, readonly, nonatomic) PEAdjustmentPresetManager *sharedPresetManager;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *loadingQueue;
@property (readonly, nonatomic) PEResourceManager *resourceManager;
@property (retain, nonatomic) PEEditActionEventBuilder *editActionEventBuilder;
@property (retain) NSPasteboard *pasteboard;
@property (weak, nonatomic) id<PELoadingStatusDelegate> asyncLoadingStatusManager;
@property (readonly, nonatomic) BOOL hasPresetOnPasteboard;
@property (readonly, nonatomic) PEEditActionBatch *currentBatchAction;
@property (readonly, nonatomic) BOOL isBusyWithBatchAction;
@property (readonly, nonatomic) PEPasteablePreset *presetFromPasteboard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)clearPasteboard;
- (void)setAudioMixModeOnAssets:(id)a0 audioMixMode:(id)a1 async:(BOOL)a2 progress:(id)a3 completion:(id /* block */)a4;
- (void)setPlaybackRateOnAssets:(id)a0 playbackRate:(float)a1 async:(BOOL)a2 progress:(id)a3 completion:(id /* block */)a4;
- (void)autoEnhanceAssets:(id)a0 enabled:(BOOL)a1 async:(BOOL)a2 progress:(id)a3 completion:(id /* block */)a4;
- (void)cancelCurrentBatchAction;
- (void)pastePreset:(id)a0 onAssets:(id)a1 async:(BOOL)a2 progress:(id)a3 completion:(id /* block */)a4;
- (void)replacePresets:(id)a0 onAssets:(id)a1 async:(BOOL)a2 progress:(id)a3 completion:(id /* block */)a4;
- (void)revertAdjustmentsOnAssets:(id)a0 async:(BOOL)a1 progress:(id)a2 completion:(id /* block */)a3;
- (void)rotateAssets:(id)a0 direction:(long long)a1 async:(BOOL)a2 progress:(id)a3 completion:(id /* block */)a4;
- (void)copyPresetFromAsset:(id)a0 removeCrop:(BOOL)a1;
- (BOOL)_assetHasVisibleAdjustments:(id)a0 shouldConsiderOpaqueAdjustments:(BOOL)a1;
- (void)_copyPreset:(id)a0;
- (id)_editActionEventBuilderForAction:(id)a0 assets:(id)a1;
- (void)_sendAnalyticsForCopyActionOnAsset:(id)a0 copiedCompositionController:(id)a1 configurationAnalyticsPayload:(id)a2;
- (void)_sendAnalyticsForCurrentEditAction;
- (void)apply:(id)a0 onCompositionController:(id)a1 editSource:(id)a2 asset:(id)a3 completion:(id /* block */)a4;
- (BOOL)assetHasCopyableAdjustments:(id)a0 removeCrop:(BOOL)a1;
- (BOOL)assetHasRevertibleAdjustments:(id)a0;
- (void)batch:(id)a0 didCancelAction:(long long)a1;
- (void)batch:(id)a0 didCompleteAction:(long long)a1 hasError:(BOOL)a2;
- (void)batch:(id)a0 willStartAction:(long long)a1;
- (void)copyPresetFromCompositionController:(id)a0 sourceAsset:(id)a1 smartCopyEnabled:(BOOL)a2;
- (void)copyPresetFromCompositionController:(id)a0 sourceAsset:(id)a1 smartCopyEnabled:(BOOL)a2 configurationAnalyticsPayload:(id)a3;
- (void)executeAction:(id)a0 onAssets:(id)a1 async:(BOOL)a2 progress:(id)a3 completion:(id /* block */)a4;
- (void)updateAnalyticsEventBuilderActionType:(id)a0 forAssets:(id)a1;

@end
