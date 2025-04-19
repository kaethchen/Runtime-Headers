@class NSArray;

@interface PLInitialSuggestionsManager : NSObject

@property (retain, nonatomic) NSArray *cachedInitialSuggestions;
@property (nonatomic) unsigned long long cachedTotalNumberOfIndexedAssets;

+ (id)sharedManager;
+ (id)_dateTemplateCandidatesFromTemplates:(id)a0 assetIdsByDateFilter:(id)a1 scopedAssetIds:(struct __CFArray { } *)a2 minResultCountPerSuggestion:(unsigned long long)a3 suggestionStyleType:(unsigned long long)a4;
+ (id)_fetchAssetIdsForDateFilters:(id)a0 psiDatabase:(id)a1;
+ (BOOL)_groupIsMePerson:(id)a0 mePersonUUID:(id)a1;
+ (id)_mePersonUUIDForPhotoLibrary:(id)a0;
+ (id)_rankedGroupsFromPSIDatabase:(id)a0 photoLibrary:(id)a1 assetIds:(struct __CFArray { } *)a2 templateProvider:(id)a3 mePersonUUID:(id)a4 minResultCountPerSuggestion:(unsigned long long)a5;
+ (id)_singleEntitySearchCandidatesFromRankedGroups:(id)a0 minAssetResultCountPerSuggestion:(unsigned long long)a1 locale:(id)a2;
+ (id)_templateCandidatesForFirstRankedGroup:(id)a0 secondRankedGroup:(id)a1 allTemplates:(id)a2 assetIdsByDateFilter:(id)a3 scopedAssetIdsCount:(unsigned long long)a4 templateProvider:(id)a5 mePersonExists:(BOOL)a6 minResultCountPerSuggestion:(unsigned long long)a7;
+ (id)_templateCandidatesFromRankedGroups:(id)a0 assetIdsByDateFilter:(id)a1 scopedAssetIds:(struct __CFArray { } *)a2 templateProvider:(id)a3 mePersonExists:(BOOL)a4 minResultCountPerSuggestion:(unsigned long long)a5 suggestionStyleType:(unsigned long long)a6;
+ (id)_updatedCandidateFromCandidate:(id)a0 firstGroup:(id)a1 secondGroup:(id)a2 firstGroupDisplayString:(id)a3 secondGroupDisplayString:(id)a4 dateFilter:(id)a5 todayDate:(id)a6 locale:(id)a7 minResultCountPerSuggestion:(unsigned long long)a8 suggestionStyleType:(unsigned long long)a9;
+ (id)_updatedGroupFromGroup:(id)a0 psiDatabase:(id)a1;
+ (void)generateInitialSuggestionsForPhotoLibrary:(id)a0;
+ (void)generateInitialSuggestionsForPhotoLibrary:(id)a0 styleType:(unsigned long long)a1;
+ (id)rankedGroupCandidatesForInitialSuggestionsForPhotoLibrary:(id)a0;
+ (unsigned long long)recentAssetLimitForInitialSuggestionGenerationForIndexedAssetCount:(unsigned long long)a0;
+ (unsigned long long)scaledMinimumNumberOfResultsPerSuggestion:(unsigned long long)a0;
+ (id)validateInitialSuggestions:(id)a0 minResultCountPerSuggestion:(unsigned long long)a1 psiDatabase:(id)a2 suggestionStyleType:(unsigned long long)a3;

- (void).cxx_destruct;
- (id)fetchInitialSuggestionsWithLimit:(unsigned long long)a0 minimumResultCountPerSuggestion:(unsigned long long)a1 suggestionStyleType:(unsigned long long)a2 photoLibrary:(id)a3 psiDatabase:(id)a4;
- (void)_generateSuggestionsWithLimitOfMostRecentAssets:(unsigned long long)a0 minimumNumberOfResultsPerSuggestion:(unsigned long long)a1 photoLibrary:(id)a2 psiDatabase:(id)a3 minResultCountPerSuggestion:(unsigned long long)a4 locale:(id)a5 suggestionStyleType:(unsigned long long)a6;
- (id)_preGeneratedInitialSuggestionsForPhotoLibrary:(id)a0 minResultCountPerSuggestion:(unsigned long long)a1 suggestionLimit:(unsigned long long)a2 psiDatabase:(id)a3 locale:(id)a4 suggestionStyleType:(unsigned long long)a5;

@end
