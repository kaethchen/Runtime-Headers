@class NSArray, NSDictionary, PKPassEntitlementsComposerPredefinedSelectionEntry, PKPassEntitlementsComposerEntryNode, NSMapTable, NSMutableArray;

@interface PKPassEntitlementsComposer : NSObject {
    NSArray *_originalSharedEntitlements;
    NSArray *_availableEntitlements;
    NSDictionary *_entitlementEntriesForEntitlementIdentifier;
    NSArray *_entitlementEntries;
    NSArray *_predefinedCapabilitySets;
    PKPassEntitlementsComposerEntryNode *_globalGroup;
    NSMapTable *_entitlementNodeForEntitlementEntry;
    NSMapTable *_predefinedSelectionNodeForPredefinedEntry;
    NSMutableArray *_allEntryNodes;
    unsigned long long _maxSelectionCount;
    BOOL _isMyEntitlements;
}

@property (readonly, nonatomic) NSArray *entitlementEntries;
@property (readonly, nonatomic) NSArray *predefinedEntitlementEntries;
@property (readonly, nonatomic) NSArray *composeSharedEntitlements;
@property (readonly, nonatomic) PKPassEntitlementsComposerPredefinedSelectionEntry *activePredefinedSelectionEntry;
@property (readonly, nonatomic) BOOL editable;
@property (readonly, nonatomic) BOOL canAllowResharing;
@property (readonly, nonatomic) BOOL preferDetailedCapabilityDisplay;

- (id)init;
- (void).cxx_destruct;
- (id)_allPossibleCapabilitySetsForView:(id)a0;
- (void)_rootEntryNodeDidSetEnabled:(id)a0;
- (id)addPredefinedSharedEntitlementSelection:(id)a0;
- (id)globalView;
- (id)initWithMyEntitlements:(id)a0;
- (id)initWithMyEntitlements:(id)a0 predefinedSharedEntitlements:(id)a1;
- (id)initWithRedeemableSharedEntitlements:(id)a0 predefinedSharedEntitlements:(id)a1;
- (id)initWithSharedEntitlements:(id)a0 availableEntitlements:(id)a1 editable:(BOOL)a2;
- (id)initWithSharedEntitlements:(id)a0 availableEntitlements:(id)a1 predefinedSharedEntitlements:(id)a2 editable:(BOOL)a3;
- (id)localizedSelectedEntitlementSummaryForAccessType:(long long)a0;
- (unsigned long long)maxSelectionCount;
- (void)setMaxSelectionCount:(unsigned long long)a0;
- (void)setPossiblePredefinedSharedEntitlementSelection:(id)a0;
- (id)viewFor:(id)a0;
- (id)viewForEnabledEntitlements;
- (id)viewForPredefined:(id)a0;

@end
