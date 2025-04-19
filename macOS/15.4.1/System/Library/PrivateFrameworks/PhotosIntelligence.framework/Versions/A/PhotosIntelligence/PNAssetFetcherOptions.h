@class NSArray, PFPseudoRandomNumberGenerator, CLSCurationContext;

@interface PNAssetFetcherOptions : NSObject <PNAssetFetcherOptionsWrapper> {
    void /* unknown type, empty encoding */ _sources;
    void /* unknown type, empty encoding */ _filters;
    void /* unknown type, empty encoding */ limiters;
    void /* unknown type, empty encoding */ minimumCurationQuality;
    void /* unknown type, empty encoding */ $__lazy_storage_$_curationContext;
}

@property (nonatomic, copy) NSArray *fetchSources;
@property (nonatomic, copy) NSArray *fetchFilters;
@property (nonatomic, copy) NSArray *fetchLimiters;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ limit;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ sampleBatchSize;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ fetchOptions;
@property (nonatomic, copy) NSArray *limiters;
@property (nonatomic) void /* unknown type, empty encoding */ seed;
@property (nonatomic, readonly) PFPseudoRandomNumberGenerator *randomGenerator;
@property (nonatomic, retain) CLSCurationContext *curationContext;

- (id)init;
- (void).cxx_destruct;
- (id)initFetchOptionsWithExcludeUUIDs:(id)a0 minimumSceneVersion:(short)a1 predicate:(id)a2;
- (id)curationPredicate;
- (id)initWithFetchOptions:(id)a0 limit:(long long)a1 sampleBatchSize:(long long)a2;
- (id)initWithPhotoLibrary:(id)a0 limit:(long long)a1 sampleBatchSize:(long long)a2;

@end
