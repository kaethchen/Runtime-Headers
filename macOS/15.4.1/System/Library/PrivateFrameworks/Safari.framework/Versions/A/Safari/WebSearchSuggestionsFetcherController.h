@class WBSOpenSearchURLTemplate, NSMutableDictionary, WBSCompletionQuery, NSMutableSet, NSTimer;

@interface WebSearchSuggestionsFetcherController : NSObject <WebSearchSuggestionsFetcherDelegate> {
    struct WebSearchSuggestionsFetcherControllerClient { void /* function */ **x0; } *_client;
    NSMutableDictionary *_fetchersBySuggestionsURLTemplate;
    NSMutableSet *_suggestionsURLTemplates;
    WBSOpenSearchURLTemplate *_defaultSearchProviderURLTemplate;
    NSMutableDictionary *_searchSuggestionCachesByURLTemplate;
    NSTimer *_clearSearchSuggestionsCacheTimer;
}

@property (retain, nonatomic) WBSCompletionQuery *completionQuery;
@property (retain, nonatomic) WBSCompletionQuery *completionQueryForQuickWebsiteSearch;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithClient:(struct WebSearchSuggestionsFetcherControllerClient { void /* function */ **x0; } *)a0;
- (BOOL)isFetching;
- (void)clearSearchSuggestionsCacheSoon;
- (void)_cancelClearSearchSuggestionsCacheTimer;
- (void)_clearSearchSuggestionsCache;
- (id)_fetcherForSuggestionsURLTemplate:(id)a0;
- (void)addSuggestionsURLTemplate:(id)a0 forDefaultSearchProvider:(BOOL)a1;
- (void)clearFetchers;
- (void)clearSuggestionsURLTemplates;
- (void)fetcher:(id)a0 didReceiveResponse:(id)a1 originalQuery:(id)a2;
- (void)startFetching;
- (void)stopFetching;

@end
