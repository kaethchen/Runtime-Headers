@class NSArray, PHFetchResult, PHAssetCollection;

@interface PXImportFilesAction : PXPhotosAction {
    NSArray *_fileURLs;
    PHAssetCollection *_assetCollection;
    NSArray *_importedAssetsIdentifiers;
    PHFetchResult *_importedAssets;
}

@property (readonly, nonatomic) PHFetchResult *importedAssets;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)actionNameLocalizationKey;
- (id)initWithPhotoLibrary:(id)a0 fileURLs:(id)a1 assetCollection:(id)a2;

@end
