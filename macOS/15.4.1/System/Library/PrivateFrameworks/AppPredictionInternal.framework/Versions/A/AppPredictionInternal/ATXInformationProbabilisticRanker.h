@interface ATXInformationProbabilisticRanker : NSObject <ATXInformationRankerProtocol>

- (double)_standardUniformDistribution;
- (double)_tieBreakingScoreForSuggestion:(id)a0;
- (id)_groupSuggestionsByConfidenceLevel:(id)a0;
- (id)_rankNumbersProbabilistically:(id)a0;
- (id)_rankSuggestionsProbabilistically:(id)a0;
- (id)_smooth:(id)a0;
- (id)_tieBreakingScoresForSuggestions:(id)a0;
- (id)sortFeaturizedSuggestions:(id)a0 withFeatureWeights:(id)a1;

@end
