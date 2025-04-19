@class NSArray, NSMutableArray;

@interface PLCombinedAssetSearchResult : PLAssetSearchResult {
    unsigned long long _assetCount;
    NSArray *_assetUUIDs;
}

@property (retain, nonatomic) NSMutableArray *assetSearchResults;
@property (nonatomic) BOOL resultsCanOverlap;
@property (readonly, nonatomic) NSArray *groupResults;

- (void).cxx_destruct;
- (unsigned long long)assetCount;
- (id)assetUUIDs;
- (void)addAssetSearchResult:(id)a0 isMainSearchResult:(BOOL)a1;
- (unsigned long long)categoryMask;
- (id)groupDescription;
- (id)initWithAssetSearchResult:(id)a0;
- (id)initWithAssetSearchResults:(id)a0 canOverlap:(BOOL)a1;

@end
