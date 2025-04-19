@interface PHSearchUtility : NSObject

+ (unsigned long long)PHSearchEntityCategoryTypeFromPHSearchSuggestionCategoriesType:(unsigned long long)a0;
+ (id)CSAttributedEntityKeyFromPHSearchEntityCategoryType:(unsigned long long)a0;
+ (unsigned long long)PHSearchEntityCategoryTypeFromCSAttributedEntityType:(id)a0;
+ (id)CSAttributedEntityKeyFromIndexCategoryType:(unsigned long long)a0;
+ (long long)CSSceneTypeFromIndexCategoryType:(unsigned long long)a0;
+ (unsigned long long)PHSearchEntityCategoryTypeFromStringValue:(id)a0;
+ (BOOL)_locationExists:(unsigned long long)a0 forString:(id)a1;
+ (id)_parsedAttributedTokensFromQueryText:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfTokenInQueryString:(id)a0;
+ (id)_searchQueryAnnotationFromRankedGroup:(id)a0 matchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (BOOL)_shouldOfferCompletionSuggestionsInQueryString:(id)a0 atLocation:(unsigned long long)a1 parsedQueryTokens:(id)a2;
+ (BOOL)_tokenHasSuggestion:(id)a0;
+ (id)allTokenNGramsFromString:(id)a0;
+ (id)completionSuggestionTextsForQueryString:(id)a0 locationInQueryString:(unsigned long long)a1;
+ (id)extractAssetUUIDsForLocationDisambiguationsInQueryString:(id)a0;
+ (id)generateTripAnnotationWithTripUUIDs:(id)a0;
+ (id)insertSpacingIfNeededBetweenAnnotationsAndPlainTextInQueryString:(id)a0;
+ (BOOL)locationDisambiguationSpansFullLengthOfString:(id)a0;
+ (unsigned long long)numberOfInsertedSpacesBetweenAnnotationsAndPlainTextInQueryString:(id)a0 beforeLocation:(unsigned long long)a1;
+ (id)queryTokensFromQueryText:(id)a0 limitToSuggestionCategories:(id)a1;
+ (BOOL)rangeExists:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forString:(id)a1;
+ (id)sceneIdFromIndexCategoryType:(unsigned long long)a0 lookupIdentifier:(id)a1;
+ (id)stringValueForPHSearchEntityCategoryType:(unsigned long long)a0;
+ (id)suggestionComponentsInQueryString:(id)a0;
+ (unsigned long long)suggestionTypeForQueryString:(id)a0 locationInQueryStringForSuggestionGeneration:(unsigned long long)a1;
+ (id)tagRangeWithSpotlightAttributedTypeForLocationTripQueryString:(id)a0;
+ (id)updateInitialSearchQueryStringWithSearchAnnotations:(id)a0;

@end
