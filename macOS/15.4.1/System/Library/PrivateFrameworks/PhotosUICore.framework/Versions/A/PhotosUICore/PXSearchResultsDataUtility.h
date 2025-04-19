@interface PXSearchResultsDataUtility : NSObject

+ (id)_bestParentWordEmbeddingsWithWordEmbeddings:(id)a0 sceneAncestoryInformation:(id)a1;
+ (id)imageForSearchUserCategory:(unsigned long long)a0 useSearchFieldStyle:(BOOL)a1;
+ (BOOL)sectionIsHighlightsSection:(id)a0;
+ (id)sectionTitleFromSearchResultSection:(id)a0 shouldCombineAssetsSections:(BOOL)a1;
+ (id)sortedWordEmbeddingsForCurrentQueryFromSubstitutions:(id)a0;
+ (id)stringWithStartDate:(id)a0 endDate:(id)a1 calendar:(id)a2 dateComponents:(id)a3 dateIntervalFormatter:(id)a4;
+ (id)subtitleForSearchResult:(id)a0;
+ (void)suggestionsDisplayDataFromSuggestion:(id)a0 searchText:(id)a1 matchedColor:(id)a2 remainingColor:(id)a3 isTextCompletion:(BOOL)a4 completion:(id /* block */)a5;
+ (void)suggestionsDisplayDataFromToken:(id)a0 orSuggestion:(id)a1 searchText:(id)a2 matchedColor:(id)a3 remainingColor:(id)a4 isTextCompletion:(BOOL)a5 completion:(id /* block */)a6;
+ (void)suggestionsDisplayDataFromToken:(id)a0 searchText:(id)a1 matchedColor:(id)a2 remainingColor:(id)a3 isTextCompletion:(BOOL)a4 completion:(id /* block */)a5;
+ (id)titleForSearchResult:(id)a0;
+ (id)wordEmbeddingSubstitutionsForSearchText:(id)a0 wantsSubstitutedString:(BOOL)a1 sceneAncestoryInformation:(id)a2 substitutions:(id)a3;

@end
