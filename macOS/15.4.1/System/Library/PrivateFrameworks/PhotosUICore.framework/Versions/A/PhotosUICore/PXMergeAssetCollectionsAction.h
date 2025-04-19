@class PXDeleteCollectionsAction, PHAssetCollection, PXAddAssetsToAssetCollectionAction;
@protocol PXFastEnumeration;

@interface PXMergeAssetCollectionsAction : PXPhotosAction

@property (retain, nonatomic) PXAddAssetsToAssetCollectionAction *addAssetsToCollectionAction;
@property (retain, nonatomic) PXDeleteCollectionsAction *deleteCollectionsAction;
@property (readonly, nonatomic) id<PXFastEnumeration> sourceAssetCollections;
@property (readonly, nonatomic) PHAssetCollection *targetAssetCollection;

+ (BOOL)canPerformOnCollection:(id)a0;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)actionNameLocalizationKey;
- (id)initWithSourceAssetCollections:(id)a0 targetAssetCollection:(id)a1;

@end
