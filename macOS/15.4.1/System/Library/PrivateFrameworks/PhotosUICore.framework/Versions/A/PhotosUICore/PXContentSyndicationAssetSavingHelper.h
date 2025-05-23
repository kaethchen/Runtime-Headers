@protocol PXDisplayAssetCollection, PXPresentationEnvironment;

@interface PXContentSyndicationAssetSavingHelper : NSObject

@property (readonly, nonatomic) id<PXDisplayAssetCollection> assetCollection;
@property (nonatomic) BOOL userCanContinueAfterSavingSyndicatedAssets;
@property (nonatomic) BOOL allowSkippingUnsavedAssets;
@property (nonatomic) BOOL skipUserPromptForSavingAssets;
@property (retain, nonatomic) id<PXPresentationEnvironment> presentationEnvironment;

+ (id)assetSavingHelperFromAssetCollectionActionPerformer:(id)a0;

- (void).cxx_destruct;
- (id)initWithAssetCollection:(id)a0;
- (void)_handleAlertResponseForUnsavedSyndicatedAssets:(id)a0 helperResult:(unsigned long long)a1 error:(id)a2 completionHandler:(id /* block */)a3;
- (void)performSaveActionIfNeededOnUnsavedSyndicatedAssetsWithCompletion:(id /* block */)a0;
- (void)presentSaveAlertForUnsavedSyndicatedAssets:(id)a0 canContinueAfterSaving:(BOOL)a1 allowSkippingUnsavedAssets:(BOOL)a2 withCompletion:(id /* block */)a3;
- (void)saveUnsavedSyndicatedAssetsWithCompletion:(id /* block */)a0;

@end
