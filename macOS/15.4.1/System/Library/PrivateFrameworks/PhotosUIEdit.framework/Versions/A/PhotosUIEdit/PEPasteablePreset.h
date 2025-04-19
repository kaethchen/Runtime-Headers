@class PEResourceManager;
@protocol PEAdjustmentPresetAutoDelegate;

@interface PEPasteablePreset : PEAdjustmentPreset {
    PEResourceManager *_resourceManager;
}

@property (weak, nonatomic) id<PEAdjustmentPresetAutoDelegate> autoDelegate;

+ (BOOL)hasValidAdjustmentsInCompositionController:(id)a0;
+ (void)sanitizeCompositionController:(id)a0;

- (void).cxx_destruct;
- (id)resourceManager;
- (long long)actionType;
- (id)sourceAssetUUID;
- (BOOL)isEligibleForAsyncProcessingOnAsset:(id)a0;
- (BOOL)_isSmart;
- (void)_runAutoCalculatorForCompositionController:(id)a0;
- (void)applyToCompositionController:(id)a0 asset:(id)a1 editSource:(id)a2 invalidAdjustmentKeys:(id)a3 completion:(id /* block */)a4;
- (id)expAndWBAdjustmentsDebugDescription;
- (id)initWithCompositionController:(id)a0 asset:(id)a1 isSmart:(BOOL)a2;
- (BOOL)isEligibleForSmartPasteWithPhotoLibrary:(id)a0;
- (BOOL)isEligibleForSmartPasteWithPhotoLibrary:(id)a0 fallbackPayload:(id *)a1;

@end
