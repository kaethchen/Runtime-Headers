@class NSString, SGSMMutableSearchState, NSCache;
@protocol SGSuggestionsServiceEventsProtocol;

@interface SGSMFeedbackListener : NSObject <SFFeedbackListener> {
    SGSMMutableSearchState *_searchState;
    SGSMMutableSearchState *_previousState;
    id<SGSuggestionsServiceEventsProtocol> _suggestionsService;
    NSCache *_eventLastInteractionTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_resetState;
- (void)didEngageCardSection:(id)a0;
- (void)didEngageResult:(id)a0;
- (void)didEngageSuggestion:(id)a0;
- (void)didRankSections:(id)a0;
- (void)resultsDidBecomeVisible:(id)a0;
- (void)searchViewDidDisappear:(id)a0;
- (id)_eventIdentifierFromSearchResult:(id)a0;
- (void)_restoreStateIfUnset;
- (void)_saveAndUnsetState;

@end
