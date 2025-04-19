@protocol PXDisplayAssetFetchResult;

@interface PXStoryAssetsConfiguration : NSObject

@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> keyAsset;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> curatedAssets;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> allAssets;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithKeyAsset:(id)a0 curatedAssets:(id)a1 allAssets:(id)a2;

@end
