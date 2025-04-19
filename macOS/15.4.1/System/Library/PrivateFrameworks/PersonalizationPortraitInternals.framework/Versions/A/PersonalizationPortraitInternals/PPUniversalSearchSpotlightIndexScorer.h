@class _PASLazyPurgeableResult;

@interface PPUniversalSearchSpotlightIndexScorer : NSObject {
    _PASLazyPurgeableResult *_cachedPortraitTopicScores;
}

- (void).cxx_destruct;
- (double)computeSpotlightIndexScoreFromPortraitExtractions:(id)a0;
- (double)computeSpotlightIndexTopicScoreComponentFromDocumentTopicVector:(id)a0;
- (double)computeSpotlightIndexTopicSubscoreFromPortraitExtractions:(id)a0;
- (id)initWithLocalTopicStore:(id)a0;
- (id)topicAlgorithmWeights;

@end
