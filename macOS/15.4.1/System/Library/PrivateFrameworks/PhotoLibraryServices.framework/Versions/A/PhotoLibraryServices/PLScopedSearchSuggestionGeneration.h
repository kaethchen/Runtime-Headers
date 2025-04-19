@interface PLScopedSearchSuggestionGeneration : NSObject

+ (double)suggestionScoreForIndexCategory:(unsigned long long)a0;
+ (id)_orderedSuggestionCategoryTypes;
+ (double)_averageGroupRankingScoreForSuggestion:(id)a0;
+ (unsigned long long)_characterLengthForSuggestion:(id)a0 suggestionQuery:(id)a1;
+ (unsigned long long)_countBasedPriorityForSuggestion:(id)a0 queryAssetCount:(unsigned long long)a1 queryCollectionCount:(unsigned long long)a2;
+ (double)_percentOverlapWithCompletionText:(id)a0 suggestionQuery:(id)a1 minPercentOverlapForPrioritization:(double)a2;
+ (id)_rankedSearchSuggestionsFromSuggestions:(id)a0 queryAssetCount:(unsigned long long)a1 queryCollectionCount:(unsigned long long)a2 suggestionType:(unsigned long long)a3 suggestionQuery:(id)a4;
+ (void)_rankedSuggestionsFromRankedSuggestionsBySuggestionCategoriesType:(id)a0 orderedSuggestionCategoriesTypes:(id)a1 maxSuggestions:(unsigned long long)a2 suggestionQuery:(id)a3 suggestionType:(unsigned long long)a4 rankedSuggestions:(id)a5 bestSuggestionIndex:(unsigned long long)a6 completion:(id /* block */)a7;
+ (id)_rankedSuggestionsFromSuggestions:(id)a0 queryAssetCount:(unsigned long long)a1 queryCollectionCount:(unsigned long long)a2;
+ (double)_scoreForSuggestion:(id)a0 queryAssetCount:(unsigned long long)a1 queryCollectionCount:(unsigned long long)a2;
+ (id)_suggestionsOrderedUserCategories;
+ (id)generateCompletionSuggestionsFromGroups:(id)a0 queryMatchedScopedAssetIds:(struct __CFArray { } *)a1 queryMatchedScopedCollectionIds:(struct __CFArray { } *)a2 searchResultTypes:(unsigned long long)a3 normalizedSearchText:(id)a4 delegate:(id)a5;
+ (id)generateNextTermSuggestionsForQueryMatchedScopedAssetIds:(struct __CFArray { } *)a0 queryMatchedScopedCollectionIds:(struct __CFArray { } *)a1 searchResultTypes:(unsigned long long)a2 delegate:(id)a3;
+ (double)initialSuggestionScoreForIndexCategory:(unsigned long long)a0;
+ (id)rankedSearchSuggestionsFromSuggestionCandidates:(id)a0 suggestionType:(unsigned long long)a1 queryAssetCount:(unsigned long long)a2 queryCollectionCount:(unsigned long long)a3 suggestionLimit:(unsigned long long)a4 suggestionQuery:(id)a5;
+ (id)rankedSuggestionsFromSuggestionCandidates:(id)a0 suggestionType:(unsigned long long)a1 queryAssetCount:(unsigned long long)a2 queryCollectionCount:(unsigned long long)a3 suggestionLimit:(unsigned long long)a4;
+ (id)sortedSuggestionsFromSuggestions:(id)a0;
+ (id)suggestionsQueryForSuggestionType:(unsigned long long)a0 suggestionLimit:(unsigned long long)a1 queryText:(id)a2 resultTypes:(unsigned long long)a3 libraryScope:(unsigned long long)a4 searchIndex:(id)a5;

@end
