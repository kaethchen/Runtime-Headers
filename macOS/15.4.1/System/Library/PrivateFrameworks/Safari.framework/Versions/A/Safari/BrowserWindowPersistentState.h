@class NSUUID, NSString, NSArray, WBWindowState, NSSet, NSData, NSDictionary, NSDate, BrowserTabPersistentState;

@interface BrowserWindowPersistentState : NSObject <BrowserTabCollectionPersistentState> {
    NSDictionary *_modifiedDictionaryRepresentationForWBWindowState;
}

@property (readonly, nonatomic, getter=isPrivateWindow) BOOL privateWindow;
@property (readonly, nonatomic) NSUUID *windowUUID;
@property (readonly, nonatomic) WBWindowState *windowState;
@property (readonly, nonatomic) BOOL hasTabsToRestore;
@property (readonly, copy, nonatomic) NSArray *tabStates;
@property (readonly, copy, nonatomic) NSArray *tabStatesToRestore;
@property (readonly, copy, nonatomic) NSString *activeTabGroupUUID;
@property (readonly, nonatomic) BrowserTabPersistentState *selectedTab;
@property (readonly, nonatomic) unsigned long long selectedUnpinnedTabIndex;
@property (readonly, nonatomic) unsigned long long selectedPinnedTabIndex;
@property (readonly, copy, nonatomic) NSDictionary *extraAttributes;
@property (readonly, copy, nonatomic) NSDictionary *tabGroupsToActiveTabs;
@property (readonly, copy, nonatomic) NSSet *unnamedTabGroupUUIDs;
@property (readonly, nonatomic) long long unifiedSidebarMode;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } windowContentRect;
@property (readonly, copy, nonatomic) NSString *customUnifiedFieldText;
@property (nonatomic, getter=isMinimized) BOOL minimized;
@property (readonly, nonatomic, getter=isPopupWindow) BOOL popupWindow;
@property (readonly, nonatomic, getter=isTabBarHidden) BOOL tabBarHidden;
@property (readonly, nonatomic, getter=isFavoritesBarHidden) BOOL favoritesBarHidden;
@property (readonly, nonatomic) BOOL prefersSidebarVisible;
@property (readonly, nonatomic) BOOL containsAnyURLs;
@property (readonly, copy, nonatomic) NSData *windowRestorationArchiveData;
@property (readonly, nonatomic) unsigned long long numberOfNonDisposableTabs;
@property (readonly, copy, nonatomic) NSArray *closedTabs;
@property (readonly, nonatomic) NSDate *dateClosed;
@property (readonly, nonatomic) long long closedItemType;
@property (readonly, copy, nonatomic) NSArray *tabUUIDs;
@property (readonly, nonatomic) unsigned long long numberOfTabs;
@property (readonly, copy, nonatomic) NSString *profileIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_shouldRestoreTabStateInWindow:(id)a0;
- (id)_extraAttributesWithDictionaryRepresentation:(id)a0;
- (void)_initWithDictionaryRepresentationCommon:(id)a0;
- (id)_initWithV1DictionaryRepresentation:(id)a0 encryptionProvider:(id)a1;
- (id)_initWithV2DictionaryRepresentation:(id)a0 encryptionProvider:(id)a1;
- (id)_modifiedDictionaryRepresentationForWBWindowStateWithDictionaryRepresentation:(id)a0;
- (id)_windowStateWithDictionaryRepresentation:(id)a0;
- (BOOL)containsTabStateWithUUID:(id)a0;
- (id)dictionaryRepresentationIncludingSessionState:(BOOL)a0 forCleanExit:(BOOL)a1;
- (void)discardAndRecreateWindowState;
- (void)discardWindowState;
- (void)enumerateTabStatesUsingBlock:(id /* block */)a0;
- (id)initWithBrowserWindowController:(id)a0 encryptionProvider:(id)a1;
- (id)initWithBrowserWindowController:(id)a0 encryptionProvider:(id)a1 skipTabStates:(BOOL)a2;
- (id)initWithDictionaryRepresentation:(id)a0 encryptionProvider:(id)a1;
- (id)initWithWindowState:(id)a0 tabGroups:(id)a1 encryptionProvider:(id)a2;
- (void)removeStateWithURLs:(id)a0;
- (void)removeTabStateWithUUID:(id)a0;
- (void)restoreBrowserWindow:(id /* block */)a0;

@end
