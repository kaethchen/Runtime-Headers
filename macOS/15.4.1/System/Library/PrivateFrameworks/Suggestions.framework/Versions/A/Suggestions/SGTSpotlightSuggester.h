@class NSArray, NSString, SGTSpotlightSuggesterReserved;

@interface SGTSpotlightSuggester : SGTSuggester {
    SGTSpotlightSuggesterReserved *_reserved2;
}

@property (copy) NSArray *searchScope;
@property (readonly) NSArray *attributeNames;
@property (copy) NSArray *additionalAttributeNames;
@property (copy) NSArray *sortingAttributeNames;
@property BOOL matchesFinderFilesOnly;
@property BOOL matchesSupportFiles;
@property (copy) NSString *baseQuery;

+ (id)defaultSortingAttributeNames;
+ (id)suggesterForFiles;
+ (id)suggesterForMails;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setInput:(id)a0;
- (void)_performBlock:(id /* block */)a0;
- (void)_discardWarmingQuery;
- (id)_findBestDidYouMeanSuggestionFromSuggestions:(id)a0 rawInput:(id)a1;
- (void)_forceQueryResults:(struct __MDQuery { } *)a0;
- (void)_getCurrentQueryAttributeNames:(id *)a0 inputString:(id *)a1;
- (void)_incrementQueryID;
- (void)_launchWarmingQuery;
- (void)_performBlockOnMainThread:(id /* block */)a0;
- (void)_processQueryResults:(struct __MDQuery { } *)a0 intermediateResults:(BOOL)a1 suggestionsCount:(long long *)a2;
- (void)_queryDidFinish:(id)a0;
- (unsigned long long)_queryID;
- (void)_reallyScheduleWarmingQuery;
- (void)_setCurrentQuery:(struct __MDQuery { } *)a0;
- (void)_warmingQueryDidFinish:(id)a0;
- (id)additionalSuggestionsForInput:(id)a0;
- (void)becomesIdle;
- (void)didFinishProcessingResultsForInput:(id)a0;
- (id)filterSuggestion:(id)a0 fromItem:(id)a1 forInput:(id)a2;
- (id)filterSuggestions:(id)a0 forInput:(id)a1;
- (id)initWithAttributeNames:(id)a0;
- (void)scheduleWarmingQuery;
- (void)setImagesForTags:(id)a0;
- (void)setRunWarmingQuery:(BOOL)a0;
- (void)willStartProcessingResultsForInput:(id)a0;
- (void)willStartSearchingSuggestionsForInput:(id)a0;

@end
