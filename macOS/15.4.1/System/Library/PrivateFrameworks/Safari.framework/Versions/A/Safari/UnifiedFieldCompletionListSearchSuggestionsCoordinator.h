@class NSMutableSet, NSMutableDictionary;

@interface UnifiedFieldCompletionListSearchSuggestionsCoordinator : NSObject {
    NSMutableSet *_expectedSources;
    NSMutableSet *_sourcesThatFailed;
    NSMutableDictionary *_suggestionsBySource;
    NSMutableDictionary *_fallbackSuggestionsBySource;
    NSMutableDictionary *_postFixSuggestionsBySource;
}

- (id)init;
- (void).cxx_destruct;
- (void)didFailToReceiveSuggestionsFromSource:(int)a0;
- (BOOL)didSourceFail:(int)a0;
- (void)expectSuggestionsFromSource:(int)a0;
- (BOOL)hasSufficientSuggestionsToDisplayCompletionList;
- (BOOL)isExpectingSuggestionsFromSource:(int)a0;
- (id)postFixSuggestionsFromSource:(int)a0;
- (void)removeAllSuggestions;
- (void)setFallbackSuggestions:(id)a0 fromSource:(int)a1;
- (void)setPostFixSuggestions:(id)a0 fromSource:(int)a1;
- (void)setSuggestions:(id)a0 fromSource:(int)a1;
- (id)suggestionsFromSource:(int)a0;

@end
