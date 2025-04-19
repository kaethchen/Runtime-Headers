@class ISyncRecordGraphNode, NSString, NSDictionary, NSMutableDictionary, NSSet, ISyncRecordView;

@interface ISyncConcreteRecordGraphNode : ISyncRecordGraphNode {
    ISyncRecordView *_recordView;
    NSString *_recordIdentifier;
    NSDictionary *_cachedRecord;
    NSMutableDictionary *_addedChildNodes;
    NSMutableDictionary *_modifiedChildNodes;
    NSMutableDictionary *_deletedChildNodes;
    NSSet *_displayKeys;
    NSSet *_changedKeys;
    NSSet *_identityKeys;
    NSSet *_relationshipNames;
    NSSet *_changedRelationshipNames;
    ISyncRecordGraphNode *_parentNode;
    ISyncRecordGraphNode *_topLevelParentNode;
    int _changeType;
}

- (void)dealloc;
- (id)description;
- (int)changeType;
- (id)entityName;
- (id)parentNode;
- (void)setParentNode:(id)a0;
- (id)record;
- (id)changedKeys;
- (void)setChangeType:(int)a0;
- (id)recordIdentifier;
- (id)deletedChildNodesByRelationship;
- (void)setChangedKeys:(id)a0;
- (void)setDisplayKeys:(id)a0;
- (id)orderedSubentityIdsFromIds:(id)a0 usingEntityNames:(id)a1 defaultOrder:(id)a2 isAdd:(BOOL)a3;
- (id)_formattedAwayProperties;
- (id)addedChildNodesByRelationship;
- (id)changedRelationshipNames;
- (id)childNodesByRecordIdentifier;
- (id)dependenciesForPropertyName:(id)a0;
- (id)descriptionForEntireTree;
- (id)descriptionForEntireTreeTabs:(int)a0;
- (id)displayKeys;
- (id)entityDisplayName;
- (id)identityKeys;
- (id)initWithRecordView:(id)a0 recordIdentifier:(id)a1;
- (id)interestingAttributeKeysByComparingGraphNode:(id)a0 interestingAttributeKeysForOther:(id *)a1;
- (id)interestingAttributeKeysByComparingGraphNode:(id)a0 interestingAttributeKeysForOther:(id *)a1 includeRelationship:(BOOL)a2;
- (id)interestingAttributeKeysByComparingGraphNode:(id)a0 interestingAttributeKeysForOther:(id *)a1 unInterestingAttributeKeysForOther:(id *)a2 includeRelationship:(BOOL)a3 forClientWithIdentifier:(id)a4;
- (BOOL)mergeChangesFromNode:(id)a0;
- (BOOL)mergeChangesFromNode:(id)a0 childChangeType:(int)a1;
- (BOOL)mergeChildrenTree:(id)a0 atRelationship:(id)a1 childChangeType:(int)a2;
- (id)modifiedChildNodesByRelationship;
- (id)orderedSubentityIdsFromIds:(id)a0 usingEntityNames:(id)a1;
- (id)orderedSubentityIdsFromIds:(id)a0 usingEntityNames:(id)a1 defaultOrder:(id)a2;
- (id)propertiesByExcludingExcludedPropertiesFromProperties:(id)a0;
- (id)recordView;
- (id)relationshipNames;
- (void)setChangedRelationshipNames:(id)a0;
- (void)setTopLevelParentNode:(id)a0;
- (id)topLevelParentNode;

@end
