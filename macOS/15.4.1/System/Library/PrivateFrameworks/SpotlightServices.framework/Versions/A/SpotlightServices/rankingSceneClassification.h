@class SSTokenizedString, NSArray, SSPommesPhotosRanker, NSDictionary, NSNumber;

@interface rankingSceneClassification : NSObject

@property (retain, nonatomic) SSTokenizedString *label;
@property (retain, nonatomic) NSArray *synonyms;
@property double confidence;
@property (retain, nonatomic) NSArray *boundingBox;
@property (retain, nonatomic) NSNumber *identifier;
@property double boundingBoxRatio;
@property double matchedBoundingBoxScore;
@property double matchedConfidenceScore;
@property double matchedSceneLabelRatio;
@property double matchedSceneSynonymsRatio;
@property BOOL exactSceneMatch;
@property unsigned long long totalLabels;
@property unsigned long long totalSynonyms;
@property (retain, nonatomic) SSPommesPhotosRanker *rankerReference;
@property (weak, nonatomic) NSDictionary *sceneReferenceDictionary;
@property int sceneMatchedType;
@property (retain, nonatomic) NSArray *synonymsIndexes;

- (void).cxx_destruct;
- (id)convertToLabelIndexWithSynonymCount:(id)a0 synonymsIndex:(id)a1;
- (void)matchScoreFromMatchInfo:(id)a0 userQueryToken:(id)a1;
- (void)matchScoreWhenLabelMatched:(id)a0 userQueryToken:(id)a1;
- (void)matchScoreWhenSynonymsMatched:(id)a0 userQueryToken:(id)a1;

@end
