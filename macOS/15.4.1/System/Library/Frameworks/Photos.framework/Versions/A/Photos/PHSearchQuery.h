@class NSDate, CSUserQueryContext, NSAttributedString, CSUserQuery, PHSearchSuggestionOptions, PSISuggestionQuery, PHPhotoLibrary, PHSearchQueryOptions;

@interface PHSearchQuery : NSObject

@property (nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) CSUserQuery *spotlightQuery;
@property (readonly, nonatomic) CSUserQueryContext *spotlightQueryContext;
@property (readonly, nonatomic) PSISuggestionQuery *photosRetrievalSuggestionsQuery;
@property (readonly, nonatomic) PSISuggestionQuery *photosSuggestionsQuery;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (readonly, copy, nonatomic) NSAttributedString *queryStringSentToSpotlight;
@property (readonly, nonatomic) NSAttributedString *searchText;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) PHSearchQueryOptions *searchOptions;
@property (readonly, nonatomic) int queryIdentifier;
@property (readonly, nonatomic) int batchIdentifier;
@property (readonly, nonatomic) PHSearchSuggestionOptions *suggestionOptions;
@property (readonly, nonatomic) int suggestionQueryIdentifier;

+ (id)_attributeKeyForPropertyKey:(id)a0;
+ (id)_fetchAttributesForSortDescriptors:(id)a0;
+ (unsigned long long)_searchResultTypesFromSearchQueryResultTypes:(unsigned long long)a0;
+ (id)_spotlightQueryContextWithSearchOptions:(id)a0;
+ (void)performSearch:(id)a0 queryQueue:(id)a1 resultsHandler:(id /* block */)a2;
+ (void)performSuggestionsSearch:(id)a0 queryQueue:(id)a1 suggestionsHandler:(id /* block */)a2;
+ (void)suggestionsForSearchQuery:(id)a0 searchQueryResult:(id)a1 rangeOfSuggestionText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 queryQueue:(id)a3 suggestionsHandler:(id /* block */)a4;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (id)jsonDictionary;
- (id)_executePhotosEntityStoreSearchWithAssetUUIDs:(id)a0 collectionUUIDs:(id)a1 rangeOfSuggestionText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)_executeSpotlightSearchWithResultsHandler:(id /* block */)a0;
- (id)initWithSearchText:(id)a0 searchOptions:(id)a1 photoLibrary:(id)a2 queryIdentifier:(int)a3 batchIdentifier:(int)a4;
- (id)initWithText:(id)a0 suggestionOptions:(id)a1 photoLibrary:(id)a2 queryIdentifier:(int)a3;
- (id)redactedJSONDictionary;

@end
