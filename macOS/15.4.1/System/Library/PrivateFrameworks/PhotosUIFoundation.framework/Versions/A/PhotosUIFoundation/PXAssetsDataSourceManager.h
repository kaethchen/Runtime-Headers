@class NSString, NSArray, NSPredicate, NSAttributedString, PXAssetsDataSource;

@interface PXAssetsDataSourceManager : PXSectionedDataSourceManager <PXMutableAssetsDataSourceManager>

@property (readonly, nonatomic) PXAssetsDataSource *dataSource;
@property (readonly, copy, nonatomic) NSString *localizedEmptyPlaceholderTitle;
@property (readonly, copy, nonatomic) NSAttributedString *localizedEmptyPlaceholderAttributedMessage;
@property (readonly, copy, nonatomic) NSString *localizedLoadingInitialDataSourceMessage;
@property (readonly, nonatomic) BOOL isLoadingInitialDataSource;
@property (readonly, nonatomic) BOOL isBackgroundFetching;
@property (readonly, nonatomic) BOOL supportsCurationToggling;
@property (readonly, nonatomic) BOOL supportsFiltering;
@property (readonly, nonatomic) NSPredicate *filterPredicate;
@property (readonly, nonatomic) BOOL includeOthersInSocialGroupAssets;
@property (readonly, copy, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) long long backgroundFetchOriginSection;
@property (nonatomic, getter=isReverseSortOrder) BOOL reverseSortOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setFilterPredicate:(id)a0;
- (void)registerChangeObserver:(id)a0 context:(void *)a1;
- (void)unregisterChangeObserver:(id)a0 context:(void *)a1;
- (id)mutableChangeObject;
- (void)ensureStartingSectionHasContent;
- (void)forceIncludeAssetsAtIndexPaths:(id)a0;
- (id)createDataSourceManagerForAsset:(id)a0;
- (id)createDataSourceManagerForAssetsInSectionOfAsset:(id)a0 usingNewTransientAssetCollection:(BOOL)a1;
- (id)createReverselySortedDataSourceManager;
- (void)ensureLastSectionHasContent;
- (void)excludeAssetsAtIndexPaths:(id)a0;
- (BOOL)forceAccurateAllSectionsIfNeeded;
- (BOOL)forceAccurateSection:(long long)a0 andSectionsBeforeAndAfter:(long long)a1;
- (BOOL)forceAccurateSectionsIfNeeded:(id)a0;
- (void)markContentAsViewed;
- (id)pauseChangeDeliveryWithTimeout:(double)a0 identifier:(id)a1;
- (void)refreshResultsForAssetCollection:(id)a0;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)a0;
- (void)setAllowedUUIDs:(id)a0;
- (void)setAllowedUUIDs:(id)a0 manualOrderUUIDs:(id)a1 forAssetCollections:(id)a2;
- (void)setCurationEnabled:(BOOL)a0 forAssetCollection:(id)a1;
- (void)setCurationEnabledForAllCollections:(BOOL)a0 curationLength:(long long)a1 collectionsToDiff:(id)a2;
- (void)setFilterPredicate:(id)a0 provideIncrementalChangeDetailsForAssetCollections:(id)a1;
- (void)setFilteringDisabled:(BOOL)a0 forAssetCollection:(id)a1;
- (void)setIncludeOthersInSocialGroupAssets:(BOOL)a0;
- (void)setIncludeOthersInSocialGroupAssets:(BOOL)a0 provideIncrementalChangeDetailsForAssetCollections:(id)a1;
- (void)startBackgroundFetchIfNeeded;
- (void)stopExcludingAssets:(id)a0;
- (void)stopForceIncludingAllAssets;
- (void)waitForAvailabilityOfAsset:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (void)_performIfStartingSectionIsEmpty:(id /* block */)a0;
- (void)waitForAvailabilityOfAsset:(id)a0 completionHandler:(id /* block */)a1;

@end
