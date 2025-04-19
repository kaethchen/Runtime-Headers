@class PKPredefinedSharedEntitlementSelection;

@interface PKPassEntitlementsComposerPredefinedEntryNode : PKPassEntitlementsComposerEntryNode {
    PKPredefinedSharedEntitlementSelection *_predefinedSelection;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)visibility;
- (id)allPossibleManageability;
- (id)allPossibleShareability;
- (id)allPossibleVisibility;
- (id)initWithPredefinedSelection:(id)a0 parentEntitlementComposer:(id)a1;
- (unsigned long long)manageability;
- (BOOL)possibleIntraAccountSharing;
- (unsigned long long)possibleManageability;
- (unsigned long long)possibleShareability;
- (unsigned long long)possibleVisibility;
- (unsigned long long)shareability;

@end
