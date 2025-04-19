@interface ISyncRecordSnapshot : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)recordStore;
- (void)freeOSResources;
- (id)initWithTruthRecordStore:(id)a0 clientRecordIdMapper:(id)a1 entityNames:(id)a2;
- (id)initWithTruthRecordStore:(id)a0 clientRecordIdMapper:(id)a1 entityNames:(id)a2 session:(id)a3;
- (id)recordIdentifierForReference:(id)a0 isModified:(BOOL *)a1;
- (id)recordReferenceForRecordWithIdentifier:(id)a0;
- (id)recordsMatchingAllAttributes:(id)a0;
- (id)recordsWithIdentifiers:(id)a0;
- (id)recordsWithIdentifiers:(id)a0 useUnformattedValues:(BOOL)a1;
- (id)recordsWithMatchingAttributes:(id)a0;
- (id)sourceIdentifiersForRelationshipName:(id)a0 withTargetIdentifier:(id)a1;
- (id)targetIdentifiersForRelationshipName:(id)a0 withSourceIdentifier:(id)a1;

@end
