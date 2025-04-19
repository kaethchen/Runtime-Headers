@class PKPassShareTimeConfiguration, NSArray, PKPassEntitlementsComposer, NSMutableDictionary, NSMutableArray;
@protocol NSCopying;

@interface PKPassEntitlementsComposerEntryNode : NSObject <PKPassEntitlementsComposerView, NSCopying> {
    PKPassEntitlementsComposer *_parentEntitlementComposer;
    NSMutableDictionary *_properties;
}

@property (readonly, nonatomic) id<NSCopying> identifier;
@property (nonatomic) BOOL editable;
@property (weak, nonatomic) PKPassEntitlementsComposerEntryNode *parent;
@property (retain, nonatomic) NSMutableArray *children;
@property (readonly, nonatomic) unsigned long long possibleShareability;
@property (readonly, nonatomic) unsigned long long possibleVisibility;
@property (readonly, nonatomic) unsigned long long possibleManageability;
@property (readonly, nonatomic) BOOL possibleIntraAccountSharing;
@property (readonly, nonatomic) NSArray *allPossibleShareability;
@property (readonly, nonatomic) NSArray *allPossibleVisibility;
@property (readonly, nonatomic) NSArray *allPossibleManageability;
@property (readonly, nonatomic) NSArray *allPossibleCapabilitySets;
@property (readonly, nonatomic) PKPassShareTimeConfiguration *possibleTimeConfiguration;
@property (nonatomic) unsigned long long shareability;
@property (nonatomic) unsigned long long visibility;
@property (nonatomic) unsigned long long manageability;
@property (nonatomic) BOOL intraAccountSharingEnabled;
@property (retain, nonatomic) PKPassShareTimeConfiguration *timeConfiguration;
@property (nonatomic) BOOL isManagingTimeConfiguration;
@property (nonatomic) BOOL isManagingEntitlementConfiguration;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) unsigned long long maxSelectionCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_allPossibleCapabilityForAccumulateBlock:(id /* block */)a0;
- (id)_effectiveValueForProperty:(unsigned long long)a0 ofType:(Class)a1;
- (unsigned long long)_leastRestrictivePossibleCapabilityForAccumulateBlock:(id /* block */)a0 maxCapability:(unsigned long long)a1;
- (unsigned long long)_mostRestrictiveCapabilityForAccumulateBlock:(id /* block */)a0 maxCapability:(unsigned long long)a1;
- (void)_mutateCapability:(id /* block */)a0;
- (void)childEntryNodeDidSetProperty:(unsigned long long)a0 updatedChildNode:(id)a1;
- (void)enumerateEntitlementEntries:(id /* block */)a0;
- (BOOL)hasEnabledEntitlements;
- (id)initWithIdentifier:(id)a0 parentEntitlementComposer:(id)a1;
- (void)parentEntryNodeWillSetProperty:(unsigned long long)a0 updatedParentNode:(id)a1;
- (void)resetCapabilities;
- (void)setEnabled:(BOOL)a0 notifyIfRoot:(BOOL)a1;
- (void)updateCapabilitiesWithSet:(id)a0;

@end
