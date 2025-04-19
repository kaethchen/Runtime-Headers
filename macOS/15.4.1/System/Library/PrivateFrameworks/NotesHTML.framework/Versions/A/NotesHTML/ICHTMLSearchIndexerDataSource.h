@interface ICHTMLSearchIndexerDataSource : ICBaseSearchIndexerDataSource

- (id)persistentStoreCoordinator;
- (void)contextWillSave:(id)a0;
- (id)newManagedObjectContext;
- (BOOL)isFolderWithServerShareChanged:(id)a0;
- (id)addNotesFromSubtree:(id)a0;
- (id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)a0;
- (id)dataSourceIdentifier;
- (unsigned long long)indexingPriority;

@end
