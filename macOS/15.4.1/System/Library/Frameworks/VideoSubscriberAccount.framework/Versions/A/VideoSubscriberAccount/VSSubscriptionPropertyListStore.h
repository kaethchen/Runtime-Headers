@interface VSSubscriptionPropertyListStore : NSAtomicStore

+ (id)metadataForPersistentStoreWithURL:(id)a0 error:(id *)a1;
+ (BOOL)setMetadata:(id)a0 forPersistentStoreWithURL:(id)a1 error:(id *)a2;

- (id)type;
- (BOOL)save:(id *)a0;
- (id)initWithPersistentStoreCoordinator:(id)a0 configurationName:(id)a1 URL:(id)a2 options:(id)a3;
- (BOOL)load:(id *)a0;
- (id)newCacheNodeForManagedObject:(id)a0;
- (id)newReferenceObjectForManagedObject:(id)a0;
- (void)updateCacheNode:(id)a0 fromManagedObject:(id)a1;

@end
