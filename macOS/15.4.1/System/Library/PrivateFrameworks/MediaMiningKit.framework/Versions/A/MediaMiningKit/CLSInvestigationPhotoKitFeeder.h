@class PHFetchResult, NSSet, PHFetchOptions, NSArray, PHAssetCollection, CLSCurationContext;

@interface CLSInvestigationPhotoKitFeeder : CLSInvestigationFeeder {
    unsigned long long _assetPrefetchOptions;
    PHFetchResult *_fetchResult;
    NSArray *_allItems;
    unsigned long long _numberOfAllPeople;
    CLSCurationContext *_curationContext;
}

@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) PHFetchResult *assetFetchResult;
@property (readonly, nonatomic) NSSet *shareParticipants;
@property (readonly, nonatomic) BOOL hasPeople;
@property (readonly, nonatomic) BOOL hasFavoritedAssets;
@property (readonly, nonatomic) BOOL hasBestScoringAssets;
@property (readonly, nonatomic) BOOL hasNonJunkAssets;
@property (readonly, nonatomic) unsigned long long numberOfShinyGemItems;
@property (readonly, nonatomic) unsigned long long numberOfRegularGemItems;
@property (readonly, nonatomic) double behavioralScore;
@property (readonly, nonatomic) unsigned long long numberOfAllPeople;
@property (readonly, copy, nonatomic) PHFetchOptions *assetFetchOptions;

+ (id)feederForAssetCollection:(id)a0 options:(id)a1 feederPrefetchOptions:(id)a2 curationContext:(id)a3;
+ (id)feederForAssetCollection:(id)a0 options:(id)a1 feederPrefetchOptions:(id)a2 curationContext:(id)a3 sharedLibraryEnabled:(BOOL)a4;

- (void).cxx_destruct;
- (id)itemAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfItems;
- (id)allItems;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (id)approximateLocation;
- (id)localEndDate;
- (id)localStartDate;
- (id)universalEndDate;
- (id)universalStartDate;
- (id)sharedItems;
- (void)_prefetchShareParticipants;
- (BOOL)_shouldPrefetchCurationInformation;
- (void)enumerateItemsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithAssetCollection:(id)a0 assetFetchOptions:(id)a1 feederPrefetchOptions:(id)a2 curationContext:(id)a3;
- (id)initWithAssetFetchResult:(id)a0 curationContext:(id)a1;
- (id)localEndDateComponents;
- (id)localStartDateComponents;
- (id)privateItems;

@end
