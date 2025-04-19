@class NSCache, NSMapTable;

@interface HistoryController : WBSHistoryController {
    NSCache *_bookmarkSources;
    NSCache *_cachedTopSitesControllers;
    NSMapTable *_strongProfileIdentiferToWeakTopSitesController;
    NSCache *_combinedFavoritesControllers;
}

- (id)init;
- (void).cxx_destruct;
- (id)_createHistoryForProfileIdentifier:(id)a0;
- (void)removeProfileWithIdentifier:(id)a0;
- (id)bookmarkSourceForProfileIdentifier:(id)a0 loadIfNeeded:(BOOL)a1;
- (id)combinedFavoritesControllerForProfileIdentifier:(id)a0 loadIfNeeded:(BOOL)a1;
- (id)topSitesControllerForProfileIdentifier:(id)a0 loadIfNeeded:(BOOL)a1;

@end
