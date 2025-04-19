@class NSString, NSHashTable;
@protocol WBSStartPageSuggestionsProvider;

@interface WBSStartPageSuggestionsProviderBroadcaster : NSObject <WBSStartPageSuggestionsProviderDelegate> {
    NSHashTable *_proxies;
}

@property (readonly, nonatomic) BOOL providerSupportsAttributionViews;
@property (readonly, weak, nonatomic) id<WBSStartPageSuggestionsProvider> suggestionsProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createSuggestionProviderProxy;
- (id)initWithSuggestionsProvider:(id)a0;
- (void)startPageSuggestionsProvider:(id)a0 didUpdateSuggestions:(id)a1;
- (void)startPageSuggestionsProvider:(id)a0 forceReloadSuggestions:(id)a1;

@end
