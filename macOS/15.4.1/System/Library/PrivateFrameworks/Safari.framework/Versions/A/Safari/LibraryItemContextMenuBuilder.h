@interface LibraryItemContextMenuBuilder : NSObject

@property (copy, nonatomic) id /* block */ renameHandler;
@property (copy, nonatomic) id /* block */ deleteHandler;
@property (copy, nonatomic) id /* block */ createTabGroupFromThisWindowHandler;
@property (copy, nonatomic) id /* block */ tabOverviewHandler;
@property (copy, nonatomic) id /* block */ copyLinksHandler;
@property (copy, nonatomic) id /* block */ openTabGroupFavoriteHandler;
@property (copy, nonatomic) id /* block */ showHideTabsHandler;
@property (copy, nonatomic) id /* block */ duplicateTabHandler;
@property (copy, nonatomic) id /* block */ closeTabHandler;
@property (copy, nonatomic) id /* block */ moveToNewTabGroupHandler;
@property (copy, nonatomic) id /* block */ closeOtherTabsHandler;
@property (copy, nonatomic) id /* block */ closeTabsBelowHandler;
@property (copy, nonatomic) id /* block */ moveTabToNewWindowHandler;
@property (copy, nonatomic) id /* block */ copyLinkForTabHandler;
@property (copy, nonatomic) id /* block */ sortByTitleHandler;
@property (copy, nonatomic) id /* block */ sortByWebsiteHandler;
@property (copy, nonatomic) id /* block */ moveToTabGroupHandler;
@property (copy, nonatomic) id /* block */ goToTabHandler;
@property (copy, nonatomic) id /* block */ canGoToTabHandler;
@property (copy, nonatomic) id /* block */ userFacingTabCountForTabGroup;
@property (copy, nonatomic) id /* block */ shareTabGroupHandler;
@property (copy, nonatomic) id /* block */ moveToProfileHandler;
@property (nonatomic) BOOL hideTabOverview;
@property (nonatomic) BOOL hideTabsinSidebar;
@property (nonatomic) BOOL currentUserIsTabGroupOwner;

- (void).cxx_destruct;
- (id)_duplicateTabMenuItemWithCount:(unsigned long long)a0;
- (id)_renameMenuItem;
- (id)_deleteMenuItem;
- (id)_closeOtherTabsMenuItemWithCount:(unsigned long long)a0;
- (id)_closeTabMenuItemWithCount:(unsigned long long)a0;
- (id)_closeTabsBelowMenuItemWithCount:(unsigned long long)a0;
- (id)_copyLinkForTabMenuItemWithCount:(unsigned long long)a0;
- (id)_copyLinksMenuItemWithCount:(unsigned long long)a0;
- (id)_createTabGroupFromThisWindowMenuItem:(unsigned long long)a0;
- (id)_moveTabToNewWindowMenuItemWithCount:(unsigned long long)a0;
- (id)_moveToNewTabGroupMenuItemWithCount:(unsigned long long)a0;
- (id)_moveToProfileMenuItemForProfiles:(id)a0 activeProfileIdentifier:(id)a1;
- (id)_showHideTabsMenuItem;
- (id)_sortByTitleMenuItemWithCount:(unsigned long long)a0;
- (id)_sortByWebsiteMenuItemWithCount:(unsigned long long)a0;
- (id)_tabGroupFavoritesMenuItemForTabGroup:(id)a0;
- (id)_tabOverviewMenuItem;
- (id)buildLibraryItemMenuForTabWithTabCount:(long long)a0 tabGroups:(id)a1;
- (id)buildLibraryItemMenuWithTabGroup:(id)a0 profiles:(id)a1;

@end
