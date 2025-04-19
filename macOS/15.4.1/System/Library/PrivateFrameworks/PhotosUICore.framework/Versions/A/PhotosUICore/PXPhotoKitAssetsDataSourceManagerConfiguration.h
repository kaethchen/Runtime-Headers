@class NSArray, PHFetchResult, NSPredicate;

@interface PXPhotoKitAssetsDataSourceManagerConfiguration : NSObject

@property (retain, nonatomic) PHFetchResult *existingAssetsFetchResult;
@property (retain, nonatomic) PHFetchResult *existingKeyAssetsFetchResult;
@property (retain, nonatomic) NSArray *fetchPropertySets;
@property (retain, nonatomic) NSPredicate *basePredicate;
@property (nonatomic) unsigned long long options;
@property (nonatomic) BOOL ignoreSharedLibraryFilters;
@property (nonatomic) BOOL reverseSortOrder;
@property (nonatomic) BOOL canIncludeUnsavedSyndicatedAssets;

- (void).cxx_destruct;

@end
