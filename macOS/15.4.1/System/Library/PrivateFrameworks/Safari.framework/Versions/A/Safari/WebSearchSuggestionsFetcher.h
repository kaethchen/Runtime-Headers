@class WBSCompletionQuery, WBSOpenSearchURLTemplate, WBSSearchSuggestionsFetcher;
@protocol WebSearchSuggestionsFetcherDelegate;

@interface WebSearchSuggestionsFetcher : NSObject {
    WBSSearchSuggestionsFetcher *_fetcher;
}

@property (weak, nonatomic) id<WebSearchSuggestionsFetcherDelegate> delegate;
@property (retain, nonatomic) WBSCompletionQuery *completionQuery;
@property (readonly, nonatomic, getter=isFetching) BOOL fetching;
@property (readonly, nonatomic) WBSOpenSearchURLTemplate *suggestionsURLTemplate;

- (void).cxx_destruct;
- (void)_fetch;
- (void)fetch;
- (void)_stopLoading;
- (void)cancelFetching;
- (void)disconnectFromSearchHelper;
- (id)initWithSuggestionsURLTemplate:(id)a0 delegate:(id)a1;

@end
