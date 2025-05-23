@class NSString, PHAssetCollection, PXAddAssetsToAssetCollectionAction;

@interface PXAddAssetsToLastUsedAssetCollectionAction : PXAssetsAction

@property (class, readonly, nonatomic) NSString *placeholderCommandTitle;

@property (readonly, nonatomic) PXAddAssetsToAssetCollectionAction *underlyingAction;
@property (readonly, nonatomic) PHAssetCollection *targetAssetCollection;

+ (id)commandTitleWithPhotoLibrary:(id)a0;
+ (void)configureToast:(id)a0 withAlbumName:(id)a1;
+ (id)targetAssetCollectionInPhotoLibrary:(id)a0 error:(id *)a1;
+ (void)userDidAddAssetsToAssetCollection:(id)a0;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;
- (id)initWithAssets:(id)a0;
- (id)initWithAssets:(id)a0 error:(id *)a1;
- (id)localizedActionName;
- (void)performRedo:(id /* block */)a0;

@end
