@class NSString, SafariWebBookmarkList, TopSitesController, NSArray, NSSet, TouchIconCache;
@protocol WBSStartPageSuggestionsProviderDelegate;

@interface CombinedFavoritesController : NSObject <WBSStartPageSuggestionsProvider> {
    NSSet *_canonicalURLsOfAllFavorites;
    TouchIconCache *_touchIconCache;
    NSArray *_lastSeenFrequentlyVisitedSites;
}

@property (copy, nonatomic) NSString *UUIDOfRootBookmarkList;
@property (retain, nonatomic) SafariWebBookmarkList *rootBookmarkListForFavorites;
@property (readonly, nonatomic) TopSitesController *topSitesController;
@property (readonly, nonatomic) NSArray *frequentlyVisitedSites;
@property (readonly, nonatomic) NSString *providerSectionIdentifier;
@property (weak, nonatomic) id<WBSStartPageSuggestionsProviderDelegate> suggestionsProviderDelegate;
@property (readonly, copy, nonatomic) NSArray *suggestions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_refreshFrequentlyVisitedSitesIfNecessary:(id)a0 updateCacheIfChanged:(BOOL)a1;
- (void)_associateHistoryItemToFrequentlyVisitedSite:(id)a0;
- (void)_bookmarksWereChanged:(id)a0;
- (void)_bookmarksWereCleanedUp:(id)a0;
- (void)_bookmarksWereReloaded:(id)a0;
- (void)_collectCanonicalURLsOfAllFavoritesWithCompletionHandler:(id /* block */)a0;
- (void)_favoritesContentsChanged;
- (void)_favoritesContentsChangedWithModifiedBookmark:(id)a0;
- (void)_frequentlyVisitedSitesDidChange:(id)a0;
- (BOOL)_loadFrequentlyVisitedSitesFromCache;
- (id)_personalProfileFavoritesSyncServerID;
- (BOOL)_refreshFrequentlyVisitedSitesIfNecessary;
- (id)_syncServerIdOfAllDesignatedFavoritesFolders;
- (void)_titleOfFrequentlyVisitedSiteDidChange:(id)a0;
- (void)_touchIconsCacheWillPurge:(id)a0;
- (void)_updateSuggestions;
- (id)bookmarkForUUID:(id)a0;
- (id)fetchMetadataForSuggestion:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithTouchIconCache:(id)a0 topSitesController:(id)a1;
- (void)sendAnalyticsIfNecessaryForURLNavigation:(id)a0;

@end
