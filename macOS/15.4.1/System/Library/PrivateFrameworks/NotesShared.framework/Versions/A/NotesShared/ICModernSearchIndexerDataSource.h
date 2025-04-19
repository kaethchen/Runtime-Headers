@class ICPersistentContainer;

@interface ICModernSearchIndexerDataSource : ICBaseSearchIndexerDataSource

@property (weak, nonatomic) ICPersistentContainer *persistentContainer;

- (void).cxx_destruct;
- (id)persistentStoreCoordinator;
- (void)contextWillSave:(id)a0;
- (id)initWithPersistentContainer:(id)a0;
- (id)newManagedObjectContext;
- (BOOL)isFolderWithServerShareChanged:(id)a0;
- (id)addNotesFromSubtree:(id)a0;
- (id)additionalItemsForObject:(id)a0;
- (id)additionalUniqueIdentifiersToDeleteForObject:(id)a0;
- (id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)a0;
- (id)dataSourceIdentifier;
- (unsigned long long)indexingPriority;
- (BOOL)isPaperKitOrSynapseAttachment:(id)a0;
- (id)searchableItemForSynapseContentItem:(id)a0 note:(id)a1 attachment:(id)a2;
- (id)searchableItemResultForObject:(id)a0;
- (id)synapseItemsForObject:(id)a0;

@end
