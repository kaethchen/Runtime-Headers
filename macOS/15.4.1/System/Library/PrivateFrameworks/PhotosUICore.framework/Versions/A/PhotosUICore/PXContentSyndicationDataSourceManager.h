@class PXContentSyndicationDataSource;
@protocol PXDisplayAssetFetchResult;

@interface PXContentSyndicationDataSourceManager : PXCollectionsDataSourceManager

@property (readonly, nonatomic) PXContentSyndicationDataSource *dataSource;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> allAssetsFetchResult;

+ (id)createCountsController;

- (void).cxx_destruct;
- (id)imageProvider;
- (id)assetFetchResultProvider;
- (id)createAssetsDataSourceManager;
- (id)socialLayerHighlightProvider;

@end
