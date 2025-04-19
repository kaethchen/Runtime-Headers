@interface ISyncRecordGraphNode : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (int)changeType;
- (id)entityName;
- (id)parentNode;
- (id)record;
- (id)changedKeys;
- (void)setChangeType:(int)a0;
- (id)recordIdentifier;
- (id)deletedChildNodesByRelationship;
- (void)setChangedKeys:(id)a0;
- (void)setDisplayKeys:(id)a0;
- (id)addedChildNodesByRelationship;
- (id)childNodesByRecordIdentifier;
- (id)dependenciesForPropertyName:(id)a0;
- (id)displayKeys;
- (id)identityKeys;
- (id)initWithRecordView:(id)a0 recordIdentifier:(id)a1;
- (id)modifiedChildNodesByRelationship;
- (id)orderedSubentityIdsFromIds:(id)a0 usingEntityNames:(id)a1;
- (id)orderedSubentityIdsFromIds:(id)a0 usingEntityNames:(id)a1 defaultOrder:(id)a2;
- (id)orderedSubentityIdsFromIds:(id)a0 usingEntityNames:(id)a1 isAdd:(BOOL)a2;
- (id)recordView;
- (id)relationshipNames;
- (id)topLevelParentNode;

@end
