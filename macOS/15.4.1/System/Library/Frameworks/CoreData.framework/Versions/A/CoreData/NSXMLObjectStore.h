@interface NSXMLObjectStore : NSMappedObjectStore

+ (id)metadataForPersistentStoreWithURL:(id)a0 error:(id *)a1;
+ (id)metadataForPersistentStoreWithURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (BOOL)setMetadata:(id)a0 forPersistentStoreWithURL:(id)a1 error:(id *)a2;
+ (BOOL)setMetadata:(id)a0 forPersistentStoreWithURL:(id)a1 options:(id)a2 error:(id *)a3;

- (id)type;
- (id)initWithPersistentStoreCoordinator:(id)a0 configurationName:(id)a1 URL:(id)a2 options:(id)a3;
- (void)saveDocumentToPath:(id)a0;

@end
