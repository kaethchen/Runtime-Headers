@class PLPerson, PLGraphLabel, NSSet, PLMoment, PLManagedAsset, PLGraphNode;

@interface PLGraphEdge : PLManagedObject

@property (retain, nonatomic) PLGraphLabel *primaryLabel;
@property (retain, nonatomic) NSSet *labels;
@property (retain, nonatomic) NSSet *values;
@property (retain, nonatomic) PLManagedAsset *sourceAsset;
@property (retain, nonatomic) PLMoment *sourceMoment;
@property (retain, nonatomic) PLGraphNode *sourceNode;
@property (retain, nonatomic) PLPerson *sourcePerson;
@property (retain, nonatomic) PLManagedAsset *targetAsset;
@property (retain, nonatomic) PLMoment *targetMoment;
@property (retain, nonatomic) PLGraphNode *targetNode;
@property (retain, nonatomic) PLPerson *targetPerson;

+ (id)entityName;
+ (id)_edgeReferenceRelationshipNames;
+ (id)_edgeReferenceSourceRelationshipNames;
+ (id)_edgeReferenceTargetRelationshipNames;
+ (id)_edgesForObject:(id)a0 relationshipPrefix:(id)a1;
+ (id)_entityNameFromRelationshipName:(id)a0;
+ (id)_sourceRelationshipNameForEntity:(id)a0;
+ (id)_targetRelationshipNameForEntity:(id)a0;
+ (void)cleanupDanglingReferencesInManagedObjectContext:(id)a0;
+ (id)edgesInToObject:(id)a0;
+ (id)edgesOutFromObject:(id)a0;
+ (id)insertGraphEdgeInContext:(id)a0 withPrimaryLabel:(id)a1;
+ (BOOL)managedObjectConformsToProtocolPLGraphEdgeReferenceRecipient:(id)a0;
+ (id)objectIDsPendingDanglingReferenceCleanupForManagedObjectContext:(id)a0;
+ (void)registerDeletedObjectForDanglingReferenceCleanup:(id)a0;

- (void)prepareForDeletion;
- (BOOL)validateForInsert:(id *)a0;
- (BOOL)validateForUpdate:(id *)a0;
- (void)willSave;
- (void)removeLabel:(id)a0;
- (void)addLabel:(id)a0;
- (void)addEdgeValue:(id)a0;
- (id)edgeValueWithName:(id)a0;
- (id)edgeValueWithName:(id)a0 createIfMissing:(BOOL)a1;
- (BOOL)hasLabel:(id)a0;
- (BOOL)hasLabelWithCode:(unsigned int)a0;
- (void)removeEdgeValue:(id)a0;

@end
