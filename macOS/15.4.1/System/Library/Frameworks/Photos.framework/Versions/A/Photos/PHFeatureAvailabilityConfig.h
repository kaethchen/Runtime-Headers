@interface PHFeatureAvailabilityConfig : NSObject

@property (readonly, nonatomic) double fractionOfAllAssetsWithMediaAnalysisInSearchIndexThreshold;
@property (readonly, nonatomic) double fractionOfCuratedAssetsWithSceneAnalysisInSearchIndexThreshold;
@property (readonly, nonatomic) double fractionOfCuratedAssetsWithCaptionsThreshold;
@property (readonly, nonatomic) double fractionOfCuratedAssetsWithEmbeddingsInVectorIndexThreshold;
@property (readonly, nonatomic) double fractionOfHighlightsEnrichedThreshold;
@property (readonly, nonatomic) BOOL needsPhotosKnowledgeGraph;
@property (readonly, nonatomic) unsigned long long minimumNumberOfCuratedAssets;

- (id)init;
- (id)initWithFeature:(unsigned long long)a0;

@end
