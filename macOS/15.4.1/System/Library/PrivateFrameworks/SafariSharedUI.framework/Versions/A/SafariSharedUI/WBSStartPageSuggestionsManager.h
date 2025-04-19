@class NSArray, NSString, NSMapTable, WBSStartPageSectionManager, NSMutableArray, NSSet;

@interface WBSStartPageSuggestionsManager : NSObject <WBSStartPageSuggestionsProviderDelegate> {
    NSMutableArray *_providers;
    NSMapTable *_providersToCachedSuggestions;
    NSMapTable *_cachedSuggestionsToProviders;
    NSSet *_defaultStartPageVisibleProviders;
}

@property (readonly, copy, nonatomic) WBSStartPageSectionManager *sectionManager;
@property (readonly, copy, nonatomic) NSArray *suggestions;
@property (readonly, copy, nonatomic) NSArray *highlights;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)registerProvider:(id)a0;
- (id)attributionViewForSuggestion:(id)a0;
- (id)fetchMetadataForSuggestion:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithSectionManager:(id)a0;
- (void)startPageSuggestionsProvider:(id)a0 didUpdateSuggestions:(id)a1;
- (id)_providerForSuggestion:(id)a0;
- (void)_recomputeCachedSuggestionsForcingReload:(BOOL)a0;
- (void)_sectionsDidChange:(id)a0;
- (void)_updateCachedSuggestionsForStartPageSuggestionsProvider:(id)a0 suggestions:(id)a1;
- (void)_updateDefaultStartPageVisibleProviders;
- (void)startPageSuggestionsProvider:(id)a0 forceReloadSuggestions:(id)a1;

@end
