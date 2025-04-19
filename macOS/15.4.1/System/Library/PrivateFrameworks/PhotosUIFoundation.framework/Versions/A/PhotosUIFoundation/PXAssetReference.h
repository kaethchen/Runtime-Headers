@protocol PXDisplayAssetCollection, PXDisplayAsset;

@interface PXAssetReference : PXSectionedObjectReference

@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> assetCollection;

@end
