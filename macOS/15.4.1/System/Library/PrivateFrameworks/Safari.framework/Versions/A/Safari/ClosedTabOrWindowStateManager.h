@class NSObject, NSString, NSMutableDictionary, WBTabGroupManager, NSArray, NSMutableArray, WBSCoalescedAsynchronousWriter;
@protocol OS_dispatch_queue, TabSnapshotSensitiveDataPurging, WBSEncryptionProvider;

@interface ClosedTabOrWindowStateManager : NSObject <WBTabGroupManagerObserver, ClosedTabOrWindowMenuBuilderMenuActionTarget> {
    NSMutableArray *_closedTabOrWindowPersistentStates;
    WBSCoalescedAsynchronousWriter *_recentlyClosedTabsOrWindowsWriter;
    NSObject<OS_dispatch_queue> *_loadClosedTabsDataFromDiskSynchronizationQueue;
    struct atomic<LoadingStatus> { struct __cxx_atomic_impl<LoadingStatus, std::__cxx_atomic_base_impl<LoadingStatus>> { _Atomic long long __a_value; } __a_; } _savedStateLoadingStatus;
    NSMutableDictionary *_closingWindowUUIDsToClosedTabStateArrays;
    id<TabSnapshotSensitiveDataPurging> _purger;
    id<WBSEncryptionProvider> _encryptionProvider;
    WBTabGroupManager *_tabGroupManager;
    NSArray *_windowStatesFromLastSession;
}

@property unsigned long long numberOfSavedTabStates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_dictionaryRepresentation;
- (void)clearStates;
- (void)_historyItemsWereRemoved:(id)a0;
- (void)performDelayedLaunchOperations;
- (void)savePendingChangesBeforeTermination;
- (id)allClosedStates;
- (void)_removeAllState;
- (void)clearBrowserTabPersistentState:(id)a0;
- (id)_closedStatesToPersist;
- (id)_destinationBrowserWindowControllerToRestoreTabState;
- (void)_didReopenTabOrWindow;
- (void)_didReopenTabOrWindowFromPersistedState;
- (void)_didUndoTabOrTabGroupClose;
- (void)_invalidateUndoClosedTabForAllWindows;
- (void)_loadRecentlyClosedTabsOrWindowsFromDiskForProfilesWithIdentifiers:(id)a0;
- (unsigned long long)_maximumNumberOfTabStatesToPersist;
- (void)_performInternalBookkeepingWithAddedState:(id)a0;
- (void)_performInternalBookkeepingWithAddedStates:(id)a0;
- (void)_pruneSavedStates;
- (id)_recentlyClosedTabsOrWindowsFileURL;
- (void)_recentlyClosedTabsOrWindowsStateDidChange;
- (BOOL)_registerTabStateForWindowIfNeeded:(id)a0;
- (void)_removeState:(id)a0;
- (void)_removeStatesInArray:(id)a0;
- (void)_removeTabPersistentState:(id)a0;
- (BOOL)_restoreClosedTabPreservingTabGroupScopeWithTabState:(id)a0 atIndex:(unsigned long long)a1 inWindow:(id)a2;
- (void)_restoreClosedTabWithState:(id)a0 atIndex:(unsigned long long)a1 inWindowWithUUID:(id)a2 preservingTabGroupScope:(BOOL)a3;
- (void)_restoreClosedTabWithState:(id)a0 placement:(long long)a1;
- (void)_restoreWindowWithState:(id)a0;
- (void)_updateNumberOfSavedTabStatesWithRemovedState:(id)a0;
- (void)_waitUntilStateHasLoadedFromDisk;
- (void)beginClosingBrowserWindowController:(id)a0;
- (void)cancelClosingBrowserWindowController:(id)a0;
- (void)clearStatesAddedAfterDate:(id)a0 beforeDate:(id)a1 profileIdentifier:(id)a2;
- (void)closeTabGroupWhileRedoing:(id)a0 inWindow:(id)a1;
- (void)closeTabWithoutConfirmingWithUUID:(id)a0 inWindow:(id)a1;
- (id)closedStatesForProfileWithIdentifier:(id)a0;
- (BOOL)containsAnySavedState;
- (BOOL)containsAnySavedStateForWindowUUID:(id)a0;
- (void)didReopenAllWindowsInSession:(id)a0;
- (void)endClosingBrowserWindowController:(id)a0;
- (id)initWithTabSnapshotSensitiveDataPurger:(id)a0 encryptionProvider:(id)a1 tabGroupManager:(id)a2;
- (BOOL)isClosingBrowserWindowController:(id)a0;
- (void)registerClosedState:(id)a0;
- (void)reopenLastClosedTabOrWindow;
- (void)reopenTabFromPersistentStateIntoActiveWindow:(id)a0;
- (void)reopenTabFromPersistentStateIntoActiveWindowConsultingPagesOpenInWindowsInsteadOfTabsPreference:(id)a0;
- (void)reopenTabGroupFromPersistentState:(id)a0;
- (void)reopenWindowFromPersistentState:(id)a0;
- (void)saveRestoredWindowState:(id)a0;
- (void)tabGroupManager:(id)a0 didRemoveProfileWithIdentifier:(id)a1;
- (long long)typeOfLastClosedTabOrWindowState;
- (void)undoCloseTabGroupWithUUID:(id)a0;
- (void)undoClosedTabWithUUID:(id)a0 inWindowWithUUID:(id)a1;
- (void)windowDidRestoreReplacedTabGroup:(id)a0;

@end
