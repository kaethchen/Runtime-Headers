@class NSString, PLGraphLabel, NSSet;

@interface PLGraphNode : PLManagedObject <PLSearchableManagedObject, PLGraphEdgeReferenceRecipient>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) short cloudLocalState;
@property (nonatomic) short cloudDeleteState;
@property (retain, nonatomic) PLGraphLabel *primaryLabel;
@property (readonly, nonatomic) unsigned int primaryLabelCode;
@property (retain, nonatomic) NSSet *additionalLabels;
@property (retain, nonatomic) NSSet *values;
@property (nonatomic) int changeFlag0;
@property (nonatomic) int changeFlag1;
@property (nonatomic) int changeFlag2;
@property (nonatomic) int changeFlag3;
@property (nonatomic) int changeFlag4;
@property (nonatomic) int edgeDeletionCounter;
@property (nonatomic) int cplChangeFlag;
@property (nonatomic) BOOL needsPersistenceUpdate;
@property (readonly, nonatomic) BOOL shouldUpdatePersistence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (id)graphNodeWithUUID:(id)a0 inManagedObjectContext:(id)a1;
+ (id)insertGraphNodeInContext:(id)a0 withPrimaryLabel:(id)a1;
+ (id)isEligibleForSearchIndexingPredicateForLibraryIdentifier:(long long)a0;
+ (id)relationshipKeyPathsToPrefetch;

- (void)didSave;
- (void)prepareForDeletion;
- (BOOL)validateForInsert:(id *)a0;
- (BOOL)validateForUpdate:(id *)a0;
- (void)willSave;
- (id)edgesIn;
- (void)addNodeValue:(id)a0;
- (id)edgesOut;
- (void)implementsPLGraphEdgeReferenceObjectRecipient;
- (void)incrementEdgeDeletionCounter;
- (BOOL)isEligibleForSearchIndexing;
- (Class)nodeContainerClass;
- (id)nodeValueWithName:(id)a0;
- (id)nodeValueWithName:(id)a0 createIfMissing:(BOOL)a1;
- (unsigned int)primaryLabelCode;
- (void)removeNodeValue:(id)a0;
- (id)searchIdentifier;

@end
