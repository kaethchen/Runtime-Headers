@class NSArray, NSDictionary;

@interface BrowserSessionPersistentState : NSObject

@property (readonly, nonatomic) NSArray *pinnedTabsStates;
@property (readonly, nonatomic) NSArray *privatePinnedTabsStates;
@property (readonly, nonatomic) NSDictionary *pinnedTabsStatesByProfileIdentifier;
@property (readonly, nonatomic) NSArray *windowStates;

- (id)init;
- (void).cxx_destruct;
- (BOOL)containsAnyURLs;
- (id)copyForReopeningLastSession;
- (id)initFromCurrentSessionIgnoringPrivateWindows:(BOOL)a0 encryptionProvider:(id)a1;
- (id)initFromFile:(id)a0 encryptionProvider:(id)a1;
- (id)initWithBrowserState:(id)a0 tabGroups:(id)a1 encryptionProvider:(id)a2;
- (id)initWithPinnedTabsStates:(id)a0 privatePinnedTabsStates:(id)a1 pinnedTabsStatesByProfileIdentifier:(id)a2 windowStates:(id)a3;
- (void)restoreSessionMinimizingRestoredWindows:(BOOL)a0 completion:(id /* block */)a1;

@end
