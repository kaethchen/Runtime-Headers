@class NSCache, NSObject, PXSuggestionsDataSource, NSString, PHAssetCollection, PXSuggestionsDataSourceManager;
@protocol OS_dispatch_queue;

@interface PXFeaturedPhotosAssetsDataSourceManager : PXPhotoKitAssetsDataSourceManager <PXSectionedDataSourceManagerObserver>

@property (readonly, nonatomic) PXSuggestionsDataSourceManager *suggestionsDataSourceManager;
@property (retain, nonatomic) PXSuggestionsDataSource *suggestionsDataSource;
@property (retain, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) NSCache *keyAssetBySuggestionIdentifierCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithSuggestionsDataSourceManager:(id)a0 assetCollection:(id)a1;
- (BOOL)supportsFiltering;
- (void)updateDataSourceWithNewSuggestions:(id)a0 changeDetails:(id)a1 assetCollection:(id)a2 cache:(id)a3;

@end
