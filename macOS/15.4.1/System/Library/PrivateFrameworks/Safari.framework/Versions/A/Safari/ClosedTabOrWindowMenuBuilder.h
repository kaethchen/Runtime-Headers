@class NSMenu, NSArray, NSMutableSet;

@interface ClosedTabOrWindowMenuBuilder : NSObject {
    NSMenu *_menu;
    NSArray *_closedTabOrWindowStates;
    NSMutableSet *_addedURLStringsToTopLevelMenu;
    id _menuActionTarget;
}

@property (nonatomic) long long limit;
@property (nonatomic) long long menuItemForTabPolicy;
@property (nonatomic) long long menuItemForWindowPolicy;
@property (nonatomic) long long menuItemForTabGroupPolicy;
@property (nonatomic) long long tabRestoreDestination;
@property (nonatomic) unsigned long long menuItemDeduplicationPolicy;

+ (unsigned long long)numberOfMenuItemsForStates:(id)a0 withWindowItemPolicy:(long long)a1;

- (id)init;
- (void).cxx_destruct;
- (void)_appendToMenuUsingWindowPolicy:(id)a0;
- (id)initWithItems:(id)a0 menuActionTarget:(id)a1;
- (id)_menuItemsForTabGroupItemPolicyExpandTabGroupsIntoIndentedTabs:(id)a0;
- (void)_addMenuItemToTopLevelMenu:(id)a0;
- (void)_appendToMenuUsingTabGroupPolicy:(id)a0;
- (void)_appendToMenuUsingTabPolicy:(id)a0;
- (id)_firstNonDisposableTabStateInWindowState:(id)a0;
- (id)_menuItemForReopenTabGroupState:(id)a0;
- (id)_menuItemForReopenWindowState:(id)a0;
- (id)_menuItemForTabGroupItemPolicyCollapseTabGroupsIntoSubmenu:(id)a0;
- (id)_menuItemForTabGroupItemPolicyCollapseTabGroupsIntoSubmenuWithMultipleNonDisposableTabs:(id)a0;
- (id)_menuItemForTabGroupItemPolicyCollapseTabGroupsIntoSubmenuWithSingleNonDisposableTab:(id)a0;
- (id)_menuItemForTabGroupItemPolicyExpandTabGroupsIntoIndentedTabsWithSingleNonDisposableTab:(id)a0;
- (id)_menuItemForTabItemPolicyHideNativeTabs:(id)a0;
- (id)_menuItemForTabItemPolicyShowNativeTabs:(id)a0;
- (id)_menuItemForWindowItemPolicyCollapseWindowsIntoSubmenu:(id)a0;
- (id)_menuItemForWindowItemPolicyCollapseWindowsIntoSubmenuWithMultipleNonDisposableTabs:(id)a0;
- (id)_menuItemForWindowItemPolicyCollapseWindowsIntoSubmenuWithSingleNonDisposableTab:(id)a0;
- (id)_menuItemForWindowItemPolicyExpandWindowsIntoIndentedTabsWithSingleNonDisposableTab:(id)a0;
- (id)_menuItemsForTabGroupItemPolicyExpandTabGroupsIntoIndentedTabsWithMultipleNonDisposableTabs:(id)a0;
- (id)_menuItemsForTabGroupItemPolicyExpandTabGroupsIntoTabs:(id)a0;
- (id)_menuItemsForWindowItemPolicyExpandWindowsIntoIndentedTabs:(id)a0;
- (id)_menuItemsForWindowItemPolicyExpandWindowsIntoIndentedTabsWithMultipleNonDispoasbleTabs:(id)a0;
- (id)_menuItemsForWindowItemPolicyExpandWindowsIntoTabs:(id)a0;
- (long long)_numberOfTopLevelMenuItemsToBeAddedForTabGroupState:(id)a0;
- (long long)_numberOfTopLevelMenuItemsToBeAddedForWindowState:(id)a0;
- (void)_resetMenu;
- (SEL)_selectorForTabReopenDestination;
- (BOOL)_shouldDeduplicateMenuItemForTopLevelMenu:(id)a0;
- (BOOL)_shouldDeduplicateMenuItemForTopLevelMenuByURLString:(id)a0;
- (BOOL)_tabStateIsShowingNativeContent:(id)a0;
- (id)_urlStringForMenuItem:(id)a0;
- (id)buildClosedTabOrWindowMenu;
- (id)urlStringsInTopLevelMenu;

@end
