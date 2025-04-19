@class NSArray, BrowserWindowController, NSMutableDictionary;

@interface PinnedTabsManager : NSObject {
    BrowserWindowController *_browserWindowControllerForMainWindow;
    NSArray *_pinnedTabsStatesToRestore;
    NSArray *_privatePinnedTabsStatesToRestore;
    long long _pinnedTabsChangesSuppressionCounter;
    NSMutableDictionary *_pinnedTabsStatesToRestoreByProfileIdentifier;
    NSMutableDictionary *_pinnedTabsByProfileIdentifier;
    BOOL _applicationDidFinishLaunching;
    BOOL _isMergingWindows;
    BOOL _shouldReleaseIconsAfterStatesAreRestored;
}

@property (class, readonly, nonatomic) PinnedTabsManager *sharedManager;

@property (readonly, copy, nonatomic) NSArray *pinnedTabs;
@property (readonly, copy, nonatomic) NSArray *privatePinnedTabs;
@property (readonly, copy, nonatomic) NSArray *currentPinnedTabsStates;
@property (readonly, copy, nonatomic) NSArray *currentPrivatePinnedTabsStates;

- (void).cxx_destruct;
- (void)_closePlaceholdersAndDetachPinnedTabsInBrowserWindowController:(id)a0;
- (void)browserWindowControllerDidLoad:(id)a0;
- (BOOL)_isSuppressingPinnedTabsChanges;
- (unsigned long long)_pinnedTabCount;
- (void)_attachAnyDetachedPinnedTabsToBrowserWindowController:(id)a0;
- (void)_attachAnyDetachedPinnedTabsToExistingWindowInProfileWithIdentifier:(id)a0;
- (void)_attachAnyDetachedPinnedTabsToExistingWindowWithPrivateBrowsingEnabled:(BOOL)a0;
- (void)_enumerateBrowserWindowControllersWithPrivateBrowsingEnabled:(BOOL)a0 usingBlock:(id /* block */)a1;
- (id)_firstWindowToAttachOrphanedPinnedTabsToInProfileWithIdentifier:(id)a0;
- (id)_firstWindowToAttachOrphanedPinnedTabsToWithPrivateBrowsingEnabled:(BOOL)a0;
- (BOOL)_hasMoreThanOneWindowLikeBrowserWindowController:(id)a0;
- (BOOL)_hasMoreThanOneWindowWithPrivateBrowsingEnabled:(BOOL)a0;
- (id)_pinnedTabsStatesToRestoreForBrowserWindowController:(id)a0;
- (void)_releaseTemplateIconsInTabs:(id)a0;
- (void)_restorePinnedTabStatesOrSyncPinnedTabs:(id)a0;
- (void)_restorePinnedTabsInWindow:(id)a0 withStates:(id)a1;
- (void)_retainTemplateIconsInTabs:(id)a0;
- (void)_setPinnedTabs:(id)a0 forBrowserWindowController:(id)a1;
- (void)_setPinnedTabsStatesToRestore:(id)a0 forBrowserWindowController:(id)a1;
- (BOOL)_shouldRestoreLastSessionOnLaunch;
- (void)_startSuppressingPinnedTabsChanges;
- (void)_stopSuppressingPinnedTabsChanges;
- (void)_syncCurrentPinnedTabsWithBrowserWindowController:(id)a0;
- (id)_tabsStatesFromBrowserTabViewItems:(id)a0 resetToPinnedPage:(BOOL)a1;
- (void)applicationDidLaunchWithPinnedTabsToRestore:(id)a0 privatePinnedTabsToRestore:(id)a1 pinnedTabsToRestoreByProfileIdentifier:(id)a2;
- (void)applicationWillTerminate;
- (void)attachAnyDetachedPinnedTabsToExistingWindow;
- (BOOL)browserWindowControllerCanContainGlobalPinnedTabs:(id)a0;
- (BOOL)browserWindowControllerCanContainPinnedTabs:(id)a0;
- (void)browserWindowControllerDidBecomeMain:(id)a0;
- (void)browserWindowControllerSelectedTabGroup:(id)a0 didSelectTabGroup:(id)a1;
- (void)browserWindowControllerSelectedTabGroup:(id)a0 willSelectTabGroup:(id)a1;
- (void)browserWindowControllerWillClose:(id)a0;
- (id)currentPinnedTabsStatesForProfileWithIdentifier:(id)a0;
- (id)findPinnedTabMatchingURL:(id)a0 inBrowserWindowController:(id)a1;
- (BOOL)isTabIndexWithinRangeOfCurrentPinnedTabs:(unsigned long long)a0;
- (id)nonPrivatePinnedTabsForProfileIdentifier:(id)a0;
- (void)pinnedTabContentDidMoveFromBrowserTabViewItem:(id)a0 toBrowserTabViewItem:(id)a1;
- (id)pinnedTabsForBrowserWindowController:(id)a0;
- (BOOL)shouldTryClosingPinnedTabsWhenClosingBrowserWindowController:(id)a0;
- (void)tabsDidChangeInBrowserWindowController:(id)a0;
- (void)updatePinnedTabSiteIconsNow;
- (void)windowShouldCloseWasInvokedForBrowserWindowController:(id)a0;
- (void)windowsWereMerged;
- (void)windowsWillBeMerged;

@end
