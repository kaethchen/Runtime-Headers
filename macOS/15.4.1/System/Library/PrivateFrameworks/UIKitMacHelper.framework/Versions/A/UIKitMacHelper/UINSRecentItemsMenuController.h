@class NSString;

@interface UINSRecentItemsMenuController : _NSRecentItemsMenuController <NSMenuDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedRecentItemsController;

- (BOOL)updateMenu:(id)a0 withEvent:(id)a1 withFlags:(long long)a2;
- (id)_addClearMenuItemToMenu:(id)a0 withTitle:(id)a1;
- (id)_insertItemInMenu:(id)a0 atIndex:(long long)a1;
- (id)_menuName;
- (SEL)_selectorForClearRecentItems;
- (BOOL)validateMenuItem:(id)a0;
- (void)_openRecentItemURL:(id)a0;
- (BOOL)_shouldShowOpenRecentMenu;
- (void)clearRecentFileURLs:(id)a0;

@end
