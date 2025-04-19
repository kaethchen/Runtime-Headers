@class BookmarksSearcher, NSMutableDictionary;

@interface SiriSuggestionsStartPageBookmarksDataSource : WBSForYouRecommendationMediatorDataSource {
    BookmarksSearcher *_searcher;
    NSMutableDictionary *_topicsCache;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_bookmarksDidChange:(id)a0;
- (void)_pruneCache;
- (void)retrieveRecommendationsMatchingTopic:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
