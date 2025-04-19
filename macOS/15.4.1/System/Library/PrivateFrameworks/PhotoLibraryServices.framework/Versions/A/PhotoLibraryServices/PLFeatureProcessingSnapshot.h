@class NSDictionary, NSDate;

@interface PLFeatureProcessingSnapshot : NSObject <NSCopying>

@property (nonatomic) double fractionOfAllAssetsAnalyzedForScenes;
@property (nonatomic) double fractionOfAllAssetsWithSceneAnalysisInSearchIndex;
@property (nonatomic) double fractionOfAllAssetsWithMediaAnalysisInSearchIndex;
@property (nonatomic) double fractionOfAllAssetsWithCaptions;
@property (nonatomic) double fractionOfCuratedAssetsWithSceneAnalysisInSearchIndex;
@property (nonatomic) double fractionOfCuratedAssetsWithEmbeddingsInVectorIndex;
@property (nonatomic) double fractionOfCuratedAssetsIndexedInVUClustering;
@property (nonatomic) double fractionOfCuratedAssetsWithCaptions;
@property (nonatomic) double fractionOfHighlightsEnriched;
@property (nonatomic) BOOL photosKnowledgeGraphIsReady;
@property (nonatomic) BOOL vuIndexIsFullClustered;
@property (retain, nonatomic) NSDate *lastFullVUIndexClusterDate;
@property (nonatomic) unsigned long long totalAssetCount;
@property (nonatomic) unsigned long long totalCuratedAssetCount;
@property (nonatomic) unsigned long long totalAssetForScenesCount;
@property (nonatomic) unsigned long long totalCuratedAssetForScenesCount;
@property (nonatomic) unsigned long long mediaAnalysisImageVersion;
@property (nonatomic) BOOL hasConsistentMediaAnalysisImageVersion;
@property (retain, nonatomic) NSDate *dateComputed;
@property (readonly, nonatomic) NSDictionary *dictionary;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)resetSearchIndexState;

@end
