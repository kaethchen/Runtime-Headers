@class NSDate;

@interface PXContentSyndicationDataSource : PXCollectionsDataSource

@property (readonly, copy, nonatomic) NSDate *mostRecentlyAddedDate;

- (id)assetCollectionAtItemIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)allAssetsFetchResult;
- (id)collectionAtIndexPath:(id)a0;
- (id)collectionListForSection:(long long)a0;
- (id)contentSyndicationItemAtItemIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)countForCollection:(id)a0;
- (id)indexPathForCollection:(id)a0;

@end
