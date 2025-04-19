@class NSArray, NSString, SGTSearchQuerySuggesterReserved;

@interface SGTSearchQuerySuggester : SGTSuggester <SGTSearchQueryCollectorDelegate> {
    SGTSearchQuerySuggesterReserved *_reserved2;
}

@property (copy) NSArray *searchScope;
@property (copy) NSArray *excludeSearchScope;
@property (copy) NSArray *includeSearchBundle;
@property (readonly) NSArray *attributeNames;
@property (copy) NSArray *additionalAttributeNames;
@property (copy) NSArray *sortingAttributeNames;
@property BOOL matchesFinderFilesOnly;
@property BOOL matchesSupportFiles;
@property (copy) NSString *baseQuery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultSortingAttributeNames;
+ (id)suggesterForFiles;
+ (id)suggesterForMails;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_performBlock:(id /* block */)a0;
- (id)_findBestDidYouMeanSuggestionFromSuggestions:(id)a0 rawInput:(id)a1;
- (void)_incrementQueryID;
- (void)_performBlockOnMainThread:(id /* block */)a0;
- (unsigned long long)_queryID;
- (id)additionalSuggestionsForInput:(id)a0;
- (void)becomesIdle;
- (id)collector;
- (void)didFinishProcessingResultsForInput:(id)a0;
- (id)filterSuggestion:(id)a0 fromItem:(id)a1 forInput:(id)a2;
- (id)filterSuggestions:(id)a0 forInput:(id)a1;
- (id)initWithAttributeNames:(id)a0;
- (id)rankingQueriesForQuery:(id)a0;
- (void)scheduleWarmingQueryIfNeeded;
- (void)searchQueryCollector:(id)a0 didFailWithError:(id)a1 context:(id)a2;
- (void)searchQueryCollector:(id)a0 processQueryResults:(id)a1 processSuggestions:(id)a2 context:(id)a3 intermediateResults:(BOOL)a4;
- (void)setImagesForTags:(id)a0;
- (void)setInput:(id)a0 withGroup:(id)a1;
- (void)setRunWarmingQuery:(BOOL)a0;
- (void)willStartProcessingResultsForInput:(id)a0;
- (void)willStartSearchingSuggestionsForInput:(id)a0;

@end
