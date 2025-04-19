@class NSDate;

@interface PHFeatureAvailability : NSObject

@property (nonatomic) unsigned long long feature;
@property (nonatomic) BOOL isAvailable;
@property (nonatomic) double fractionOfAllAssetsAnalyzedForScenes;
@property (nonatomic) double fractionOfAllAssetsWithCaptions;
@property (nonatomic) double fractionOfAllAssetsWithSceneAnalysisInSearchIndex;
@property (nonatomic) double fractionOfAllAssetsWithMediaAnalysisInSearchIndex;
@property (nonatomic) double fractionOfCuratedAssetsWithSceneAnalysisInSearchIndex;
@property (nonatomic) double fractionOfCuratedAssetsWithEmbeddingsInVectorIndex;
@property (nonatomic) double fractionOfCuratedAssetsIndexedInVUClustering;
@property (nonatomic) double fractionOfCuratedAssetsWithCaptions;
@property (nonatomic) double fractionOfHighlightsEnriched;
@property (nonatomic) BOOL photosKnowledgeGraphIsReady;
@property (nonatomic) BOOL vuIndexIsFullClustered;
@property (retain, nonatomic) NSDate *lastFullVUIndexClusterDate;
@property (nonatomic) BOOL libraryHasEnoughCuratedAssets;
@property (nonatomic) BOOL libraryHasEnoughCuratedAssetsWithEmbeddingsInVectorIndex;
@property (nonatomic) BOOL libraryHasEnoughCuratedAssetsIndexedInVUClustering;
@property (nonatomic) unsigned long long numberOfAssets;
@property (nonatomic) unsigned long long numberOfCuratedAssets;
@property (nonatomic) unsigned long long mediaAnalysisImageVersion;
@property (nonatomic) BOOL hasConsistentMediaAnalysisImageVersion;
@property (readonly, nonatomic) BOOL wasComputed;
@property (retain, nonatomic) NSDate *dateComputed;

- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initForFeature:(unsigned long long)a0;
- (id)initForFeature:(unsigned long long)a0 withPLFeatureAvailability:(id)a1;

@end
