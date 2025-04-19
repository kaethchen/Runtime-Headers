@class ATXContextHeuristics, ATXContextHeuristicsScheduler;

@interface ATXContextHeuristicsServer : NSObject <ATXContextHeuristicsDelegate> {
    ATXContextHeuristics *_heuristics;
    ATXContextHeuristicsScheduler *_sportsScheduler;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)initWithHeuristics:(id)a0;
- (void)contextHeuristics:(id)a0 didUpdateSuggestions:(id)a1;
- (id)_cachedContextsFromSuggestions:(id)a0;
- (id)_contextHeuristicsClientModel;
- (id)_retrieveOldContextHeuristicsSuggestions;
- (void)_updateBlendingLayerWithSuggestionsFromContextHeuristics:(id)a0;
- (void)_updateBlendingLayerWithSuggestionsFromSpotlightRecents:(id)a0;
- (void)_updateContextHeuristicsBiomeStreamWithNewSuggestions:(id)a0 oldSuggestions:(id)a1;
- (void)contextHeuristics:(id)a0 didUpdateSpotlightRecents:(id)a1;

@end
