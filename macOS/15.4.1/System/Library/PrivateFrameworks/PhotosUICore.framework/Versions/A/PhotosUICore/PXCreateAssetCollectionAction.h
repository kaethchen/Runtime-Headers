@class NSString, PHCollectionList, NSArray, PHAsset, PHAssetCollection, PXContentSyndicationPhotoKitAssetGroup;
@protocol PXFastEnumeration;

@interface PXCreateAssetCollectionAction : PXPhotosAction

@property (readonly, nonatomic) id<PXFastEnumeration> selectedAssets;
@property (readonly, nonatomic) PHAsset *keyAsset;
@property (readonly, nonatomic) PXContentSyndicationPhotoKitAssetGroup *assetGroup;
@property (copy, nonatomic) NSString *createdCollectionIdentifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) PHCollectionList *parentCollectionList;
@property (readonly, nonatomic) NSArray *userLibraryAssets;
@property (readonly, nonatomic) NSArray *unsavedSyndicatedAssets;
@property (readonly, nonatomic) PHAssetCollection *createdAssetCollection;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)assets;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)actionNameLocalizationKey;
- (id)initWithTitle:(id)a0 parentCollectionList:(id)a1 selectedAssets:(id)a2 keyAsset:(id)a3;
- (void)performRedo:(id /* block */)a0;

@end
