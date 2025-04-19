@class NSArray, PSISuggestionOptions, NSAttributedString, PSIDatabase;

@interface PSISuggestionQuery : NSObject

@property (readonly, nonatomic) PSIDatabase *photosEntityStore;
@property (nonatomic) BOOL cancelled;
@property (readonly, nonatomic) NSAttributedString *formattedSearchText;
@property (readonly, nonatomic) NSAttributedString *originalSearchtext;
@property (readonly, nonatomic) PSISuggestionOptions *suggestionOptions;
@property (readonly, nonatomic) NSArray *completionSuggestionTexts;
@property (readonly, nonatomic) NSArray *suggestionComponents;

+ (id)_suggestionCandidatesByContentStringFromSuggestionComponents:(id)a0;
+ (id)_suggestionCandidatesBySuggestionCategoriesTypeFromSuggestionComponents:(id)a0 assetIds:(struct __CFArray { } *)a1 collectionIds:(struct __CFArray { } *)a2;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithFormattedSearchText:(id)a0 originalSearchText:(id)a1 completionSuggestionTexts:(id)a2 suggestionOptions:(id)a3 suggestionComponents:(id)a4 photosEntityStore:(id)a5;
- (id)performQueryWithSearchResultAssetUUIDs:(id)a0 collectionUUIDs:(id)a1;
- (id)_generateCompletionSuggestionsForAssetUUIDs:(id)a0 collectionUUIDs:(id)a1;
- (id)_generateNextTokenSuggestionsForAssetUUIDs:(id)a0 collectionUUIDs:(id)a1;
- (BOOL)_groupIsValidForSuggestionGeneration:(id)a0 suggestionType:(unsigned long long)a1;
- (BOOL)_groupWithAssetCountMeetsAssetMatchThreshold:(unsigned long long)a0 assetSearchResultsCount:(unsigned long long)a1;
- (BOOL)_isEligibleIndexCategory:(unsigned long long)a0 forSuggestionWithType:(unsigned long long)a1;

@end
