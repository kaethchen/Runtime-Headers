@class PHMemory, NSString, PHFetchResult, PHAsset, PHAssetCollection;

@interface PXMemoryInfo : NSObject <PXSelectionAssetContainer, NSCopying>

@property (readonly, nonatomic) BOOL px_isEmpty;
@property (readonly, nonatomic) BOOL px_isFavorite;
@property (readonly, nonatomic) BOOL px_canPerformFavoriteAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PHMemory *memory;
@property (readonly, nonatomic) PHAsset *prefetchedPrimaryAsset;
@property (readonly, nonatomic) NSString *localizedDateText;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) PHAsset *primaryAsset;
@property (readonly, nonatomic) BOOL isFavorite;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) PHFetchResult *keyAssetFetchResult;

+ (void)_updateTitleForMemoryInfo:(id)a0 withAssetCollection:(id)a1;
+ (id)fastMemoryInfoWithMemory:(id)a0;
+ (id)memoryInfoWithAssetCollection:(id)a0 keyAssetFetchResult:(id)a1;
+ (id)memoryInfoWithAssetCollection:(id)a0 prefetchedPrimaryAsset:(id)a1;
+ (id)memoryInfoWithMemory:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)memoryInfoWithUpdatedKeyAssetFetchResult:(id)a0;
- (id)px_fetchContainedAssets;

@end
