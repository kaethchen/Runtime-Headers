@class PXSyntheticAssetsDataSource, NSString, PXSectionedChangeDetailsCoalescer, NSMutableArray;

@interface PXSyntheticAssetsDataSourceManager : PXAssetsDataSourceManager <PXMutableSyntheticAssetsDataSourceManager> {
    PXSyntheticAssetsDataSource *_initialDataSource;
    BOOL _isPerformingDataSourceChanges;
    NSMutableArray *_nextAssetsBySection;
    NSMutableArray *_nextAssetCollections;
    PXSectionedChangeDetailsCoalescer *_changeDetailsCoalescer;
    BOOL _changeIsReload;
}

@property (readonly, nonatomic) PXSyntheticAssetsDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)removeItemAtIndexPath:(id)a0;
- (void)removeSectionAtIndex:(long long)a0;
- (id)createInitialDataSource;
- (id)pauseChangeDeliveryWithTimeout:(double)a0 identifier:(id)a1;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)a0;
- (void)setCurationEnabled:(BOOL)a0 forAssetCollection:(id)a1;
- (void)setCurationEnabledForAllCollections:(BOOL)a0 curationLength:(long long)a1 collectionsToDiff:(id)a2;
- (void)_appendIncrementalChangeDetails:(id)a0;
- (void)changeItemAtIndexPath:(id)a0 toAsset:(id /* block */)a1;
- (void)changeSectionAtIndex:(long long)a0 toAssetCollection:(id)a1;
- (id)initWithConfigurationBlock:(id /* block */)a0;
- (void)insertItemAtIndexPath:(id)a0 assetBlock:(id /* block */)a1;
- (void)insertSectionAtIndex:(long long)a0 count:(long long)a1 assetCollection:(id)a2 assetBlock:(id /* block */)a3;
- (void)markChangeAsReload;
- (void)performDataSourceChanges:(id /* block */)a0;

@end
