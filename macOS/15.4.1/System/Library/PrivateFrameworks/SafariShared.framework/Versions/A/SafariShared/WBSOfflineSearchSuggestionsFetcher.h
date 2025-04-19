@class WBSCompletionQuery;
@protocol WBSOfflineSearchSuggestionsFetcherDelegate;

@interface WBSOfflineSearchSuggestionsFetcher : NSObject {
    unsigned long long _offlineSuggestionsStatus;
}

@property (retain, nonatomic) WBSCompletionQuery *currentQuery;
@property (weak, nonatomic) id<WBSOfflineSearchSuggestionsFetcherDelegate> delegate;
@property (readonly, nonatomic, getter=areOfflineSearchSuggestionsAvailable) BOOL offlineSuggestionsAvailable;

- (void)dealloc;
- (void).cxx_destruct;
- (void)updateAvailability;
- (void)_checkForRemoteDisablement:(id /* block */)a0;
- (void)_logOfflineSuggestionStatus;
- (id)_searchHelperProxy;
- (id)initWithMaximumSuggestionsToFetch:(unsigned long long)a0;

@end
