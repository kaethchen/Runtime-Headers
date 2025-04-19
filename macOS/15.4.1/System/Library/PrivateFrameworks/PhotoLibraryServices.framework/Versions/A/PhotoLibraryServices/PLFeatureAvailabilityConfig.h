@class NSDictionary;

@interface PLFeatureAvailabilityConfig : NSObject

@property (nonatomic) double fractionOfAllAssetsWithMediaAnalysisInSearchIndexThreshold;
@property (nonatomic) double fractionOfCuratedAssetsWithSceneAnalysisInSearchIndexThreshold;
@property (nonatomic) double fractionOfCuratedAssetsWithCaptionsThreshold;
@property (nonatomic) double fractionOfCuratedAssetsWithEmbeddingsInVectorIndexThreshold;
@property (nonatomic) double fractionOfHighlightsEnrichedThreshold;
@property (nonatomic) BOOL needsPhotosKnowledgeGraph;
@property (nonatomic) unsigned long long minimumNumberOfCuratedAssets;
@property (readonly, nonatomic) NSDictionary *dictionary;

- (id)init;
- (id)initWithFeature:(unsigned long long)a0;

@end
