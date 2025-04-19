@interface PESupport : NSObject

+ (id)repairedAsShotCompositionController:(id)a0 forCurrentCompositionController:(id)a1 isLivePhoto:(BOOL)a2 metadata:(id)a3;
+ (void)syncMainThread:(id /* block */)a0;
+ (void)assetAudioMixMode:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
+ (BOOL)assetCanRenderStyles:(id)a0;
+ (void)assetHasDepthEnabled:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
+ (BOOL)assetHasUnsupportedOriginalAdjustments:(id)a0;
+ (void)assetPlaybackRate:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
+ (BOOL)canPerformEditOnAsset:(id)a0;
+ (id)originalAdjustmentVersionForAsset:(id)a0;
+ (id)pe_bundle;
+ (BOOL)photoLibraryIsEligibleForStylesSetupTip:(id)a0;
+ (BOOL)photoWasTakenWithoutFlashWithImageProperties:(id)a0;
+ (void)revertEditsForAsset:(id)a0 mediaDestination:(id)a1 currentCompositionController:(id)a2 completionHandler:(id /* block */)a3;
+ (BOOL)sharedPhotoLibraryIsEligibleForStylesSetupTip;

@end
