@class WBSHistorySessionController, NSString, NSArray, NSDateFormatter, NSMenu, NSMenuItem, NSDate;

@interface HistoryMenuController : NSObject <NSMenuDelegate> {
    BOOL _isMenuUpToDate;
    NSMenu *_historyMenu;
    long long _builtInHistoryMenuItemsCount;
    NSMenuItem *_recentlyClosedSubmenuMenuItem;
    NSMenuItem *_reopenRecentlyClosedTabsMenuItem;
    NSArray *_sessions;
    NSDate *_oldestDateLoaded;
    NSDateFormatter *_dateFormatter;
}

@property (retain, nonatomic) WBSHistorySessionController *historySessionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)menuHasKeyEquivalent:(id)a0 forEvent:(id)a1 target:(id *)a2 action:(SEL *)a3;
- (void)menuNeedsUpdate:(id)a0;
- (void)_addHistoryEntry:(id)a0 toMenu:(id)a1;
- (BOOL)_addItemsForSession:(id)a0 toMenu:(id)a1 skip:(unsigned int)a2 limit:(unsigned int)a3;
- (id)_addSubmenu:(id)a0 withTitle:(id)a1;
- (void)_appendHistoryToMenu;
- (void)_clearHistoryAndKeepWebsiteDataFromMenu:(id)a0;
- (void)_clearHistoryFromMenu:(id)a0;
- (void)_generateSessionsAfterDate:(id)a0;
- (void)_generateSessionsForHistoryMenuIfNecessary;
- (void)_historySessionsDidChange:(id)a0;
- (int)_recentHistoryLimit;
- (void)_recentlyClosedTabsOrWindowsDidChange;
- (void)_removeHistoryFromMenu;
- (long long)_tabGroupItemPolicyWithWindowPolicy:(long long)a0;
- (void)_takeLocationFromHistoryEntry:(id)a0;
- (id)_titleForSession:(id)a0;
- (void)_updateRecentlyClosedSubmenu;
- (void)_updateReopenRecentlyClosedTabsMenuItem;
- (long long)_windowItemPolicyForClosedStates:(id)a0;
- (void)setupMenu:(id)a0;
- (BOOL)validate__takeLocationFromHistoryEntry:(id)a0;

@end
