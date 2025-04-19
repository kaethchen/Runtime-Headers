@class NSString, WebsiteIconMenu, NSMenuItem;

@interface BookmarksMenuController : NSObject <NSMenuDelegate> {
    WebsiteIconMenu *_bookmarksMenu;
    NSMenuItem *_lastBuiltInBookmarksMenuItem;
    NSMenuItem *_lastBookmarksMenuCollectionMenuItem;
    NSMenuItem *_lastUserBookmarkMenuItem;
    NSMenuItem *_favoritesMenuItem;
    NSMenuItem *_separatorMenuItem;
    BOOL _menuNeedsReload;
    BOOL _command1Through9SwitchesTabs;
    unsigned long long _bookmarksGenerationAtLastReload;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)menuHasKeyEquivalent:(id)a0 forEvent:(id)a1 target:(id *)a2 action:(SEL *)a3;
- (void)menuNeedsUpdate:(id)a0;
- (void)_addBookmarksMenuFolderItemsFromFolder:(id)a0 bookmarksMenuCollection:(id)a1 shouldFinishAddingHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)_addBookmarksMenuFolderItemsIfNeeded;
- (void)_addBookmarksToMenu;
- (void)_addFavoritesBookmarksKeyEquivalentsToMenu:(id)a0;
- (void)_addFavoritesSubmenuItemsFromFolder:(id)a0 profile:(id)a1 shouldFinishAddingHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)_addSpecialBookmarkSourcesToMenu;
- (void)_bookmarksDidChange:(id)a0;
- (void)_bookmarksMenuPreferencesDidChange:(id)a0;
- (void)_bookmarksWereCleanedUp:(id)a0;
- (void)_bookmarksWereReloaded:(id)a0;
- (void)_commonInitWithBookmarksMenu:(id)a0;
- (BOOL)_doesTopLevelBookmarkContainPresentableInMenuBookmarksWithMenuCollection:(id)a0 barCollection:(id)a1;
- (id)_existingMenuItemPrecedingSection:(long long)a0;
- (id)_existingMenuItemPrecedingSection:(long long)a0 usingLastBuiltInBookmarksMenuItem:(id)a1 separatorMenuItem:(id)a2 lastBookmarksMenuCollectionMenuItem:(id)a3 favoritesMenuItem:(id)a4;
- (void)_insertMenuSeparatorIfNeeded;
- (void)_removeAllBookmarksFromMenu;
- (void)_removeBookmarksFromMenu;
- (void)_removeBookmarksFromMenu:(id)a0 withFavoritesMenuItem:(id)a1 lastBookmarksMenuCollectionMenuItem:(id)a2 separatorMenuItem:(id)a3 lastBuiltInBookmarksMenuItem:(id)a4 lastUserBookmarkMenuItem:(id)a5;
- (void)_removeBookmarksMenuFolderItemsFromMenu;
- (void)_removeFavoritesSubmenu;
- (void)_resetMenu;
- (void)_scheduleMenuReload;
- (void)_scheduleProcessingBlock:(id /* block */)a0;
- (id)_sectionsToMenuItemsUsingLastBuiltInBookmarksMenuItem:(id)a0 separatorMenuItem:(id)a1 lastBookmarksMenuCollectionMenuItem:(id)a2 favoritesMenuItem:(id)a3;
- (void)addOrUpdateFavoritesSubmenu;
- (id)initWithBookmarksMenu:(id)a0;

@end
