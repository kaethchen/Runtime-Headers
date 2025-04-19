@class PHAsset, NUComposition, NSString;

@interface PESmartPasteablePreset : PEPasteablePreset {
    NSString *_expAndWBDebugDescription;
}

@property (retain, nonatomic) PHAsset *sourceAsset;
@property (nonatomic) unsigned long long sourceAssetSceneCharacteristics;
@property (nonatomic) BOOL shouldBypassGating;
@property (copy, nonatomic) NUComposition *sourceAssetComposition;

+ (BOOL)isAssetTypeEligibleForSmartPaste:(id)a0;
+ (BOOL)isCompositionControllerEligibleForSmartPaste:(id)a0;

- (void).cxx_destruct;
- (long long)actionType;
- (id)sceneCharacteristicDescription:(unsigned long long)a0;
- (unsigned long long)_imageClassificationsForAsset:(id)a0;
- (void)_loadResourcesForSourceAssetWithPhotoLibrary:(id)a0 completion:(id /* block */)a1;
- (BOOL)_shouldPerformSmartPasteOnAsset:(id)a0;
- (void)applyToCompositionController:(id)a0 asset:(id)a1 editSource:(id)a2 completion:(id /* block */)a3;
- (void)applyToLoadResult:(id)a0 completion:(id /* block */)a1;
- (id)expAndWBAdjustmentsDebugDescription;
- (id)initWithPasteablePreset:(id)a0;
- (void)triggerLegacyPasteFallbackOnCompositionController:(id)a0 editSource:(id)a1 asset:(id)a2 reviewPayload:(id)a3 completion:(id /* block */)a4;

@end
