@class ATXActionPredictionBlacklist, ATXDigitalHealthBlacklist;

@interface ATXCandidateRelevanceModelConfigMinimalAction : ATXCandidateRelevanceModelConfig

@property (retain, nonatomic) ATXDigitalHealthBlacklist *appDigitalHealthBlacklist;
@property (retain, nonatomic) ATXActionPredictionBlacklist *actionBlacklist;

- (id)init;
- (void).cxx_destruct;
- (BOOL)candidateIsStillValidToSuggest:(id)a0;
- (id)candidatePublisherFromStartTime:(double)a0;
- (id)datasetGenerator;
- (id)heuristicSuggestionsForContext:(id)a0 currentSuggestionExecutableIds:(id)a1;
- (id)proactiveSuggestionForCandidate:(id)a0 prediction:(float)a1;

@end
