@class NSUUID, NSArray, BrowserTabPersistentState, NSDate, NSString, NSMutableArray;

@interface BrowserTabGroupPersistentState : NSObject <BrowserTabCollectionPersistentState> {
    NSMutableArray *_tabStates;
    NSUUID *_selectedTabUUID;
    NSUUID *_windowUUID;
}

@property (readonly, nonatomic) NSUUID *tabGroupUUID;
@property (readonly, nonatomic) BrowserTabPersistentState *firstNonDisposableTab;
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

- (id)init;
- (void).cxx_destruct;
- (void)restoreTabGroup;
- (id)_selectedTab;
- (BOOL)containsTabStateWithUUID:(id)a0;
- (id)dictionaryRepresentationIncludingSessionState:(BOOL)a0 forCleanExit:(BOOL)a1;
- (void)enumerateTabStatesUsingBlock:(id /* block */)a0;
- (id)initWithBrowserTabViewItems:(id)a0 encryptionProvider:(id)a1;
- (id)initWithBrowserWindowController:(id)a0 encryptionProvider:(id)a1;
- (id)initWithDictionaryRepresentation:(id)a0 encryptionProvider:(id)a1;
- (void)removeStateWithURLs:(id)a0;
- (void)removeTabStateWithUUID:(id)a0;
- (void)restoreTabGroupIntoBrowserWindowController:(id)a0;

@end
