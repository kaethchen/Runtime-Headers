@class NSIndexSet, PHFetchResult, PHAssetCollection;
@protocol PXFastEnumeration;

@interface PXEditCollectionAssetsAction : PXPhotosAction

@property (readonly, nonatomic) id<PXFastEnumeration> assetsToAdd;
@property (readonly, nonatomic) id<PXFastEnumeration> assetsToRemove;
@property (readonly, nonatomic) NSIndexSet *assetsToRemoveUndoIndexes;
@property (retain, nonatomic) PHFetchResult *assetCollectionUndoFetchResult;
@property (readonly, nonatomic) PHAssetCollection *assetCollection;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)initWithAssetCollection:(id)a0 assets:(id)a1;
- (id)actionNameLocalizationKey;

@end
